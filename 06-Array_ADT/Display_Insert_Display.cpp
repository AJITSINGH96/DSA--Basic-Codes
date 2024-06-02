
#include "array.h";

void Array::DisplayArray(Array arr, int length) {
	cout << "Elements are : ";
	for (int i = 0; i < length; i++)
	{
		cout << arr.A[i];
	}
	cout << endl;
}

void inserting::insert(int index, int x, int* A, int n)
{
	for (int i = n; i > index; i--)   //we are shifting from last tille our position, to vacate that place in array.
	{
		A[i] = A[i - 1];
	}
	A[index] = x;
}

int deleting::Delete(int index, int* A, int n)
{
	for (int i = index; i < n; i++)   //we are shifting from last tille our position, to vacate that place in array.
	{
		A[i] = A[i + 1];
	}
	n--;
	return n;
}


