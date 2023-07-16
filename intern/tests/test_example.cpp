
#include "unittest/ut_test.h"
#include "ring_buffer.h"
#include "task.h"


#include <string.h>

UT_TEST(TEST_Ringbuffer)
{
	CRingbuffer Ringbuffer;

	UT_CHECK(Ringbuffer.IsEmpty());
	UT_CHECK(!Ringbuffer.IsFull());
	UT_CHECK(Ringbuffer.Size() == 0);
}

UT_TEST(TEST_Task)
{
	CTask Task;

	UT_CHECK(Task.GetID() == 0);
	UT_CHECK(Task.GetCustomer() == nullptr);
	UT_CHECK(Task.GetDescription() == nullptr);
}

UT_TEST(TEST_Ringbuffer_Write)
{
	CRingbuffer Ringbuffer;

	CTask Task;

	Task.SetID(1);
	Task.SetCustomer("Customer");
	Task.SetDescription("Description");

	Ringbuffer.Write(&Task);

	UT_CHECK(!Ringbuffer.IsEmpty());
	UT_CHECK(!Ringbuffer.IsFull());
	UT_CHECK(Ringbuffer.Size() == 1);
}

UT_TEST(TEST_Ringbuffer_Read)
{
	CRingbuffer Ringbuffer;

	CTask Task;

	Task.SetID(1);
	Task.SetCustomer("Customer");
	Task.SetDescription("Description");

	Ringbuffer.Write(&Task);

	CTask newTask;

	newTask = *Ringbuffer.Read();

	UT_CHECK(Ringbuffer.IsEmpty());
	UT_CHECK(!Ringbuffer.IsFull());
	UT_CHECK(Ringbuffer.Size() == 0);

	UT_CHECK(newTask.GetID() == 1);
	UT_CHECK(strcmp(newTask.GetCustomer(), "Customer") == 0);
	UT_CHECK(strcmp(newTask.GetDescription(), "Description") == 0);
}

UT_TEST(TEST_Ringbuffer_Muti_Read_And_Write)
{
	CRingbuffer Ringbuffer;

	CTask Tasks[10];

	for (int Index = 0; Index < 8; Index++)
	{
		Tasks[Index].SetID(Index);
		Tasks[Index].SetCustomer("Customer");
		Tasks[Index].SetDescription("Description");
	}

	for (int Index = 0; Index < 8; Index++)
	{
		Ringbuffer.Write(&Tasks[Index]);
	}

	UT_CHECK(!Ringbuffer.IsEmpty());
	UT_CHECK(Ringbuffer.IsFull());
	UT_CHECK(Ringbuffer.Size() == 8);

	CTask NewTasks[10];

	for (int Index = 0; Index < 4; Index++)
	{
		NewTasks[Index] = *Ringbuffer.Read();
	}

	UT_CHECK(!Ringbuffer.IsEmpty());
	UT_CHECK(!Ringbuffer.IsFull());
	UT_CHECK(Ringbuffer.Size() == 4);

	UT_CHECK(NewTasks[0].GetID() == 0);
	UT_CHECK(strcmp(NewTasks[0].GetCustomer(), "Customer") == 0);
	UT_CHECK(strcmp(NewTasks[0].GetDescription(), "Description") == 0);

	UT_CHECK(NewTasks[3].GetID() == 3);
	UT_CHECK(strcmp(NewTasks[3].GetCustomer(), "Customer") == 0);
	UT_CHECK(strcmp(NewTasks[3].GetDescription(), "Description") == 0);
}


