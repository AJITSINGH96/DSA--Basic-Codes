#include "array.h"
#include"Searching.h"

int main() {

	int size;
	cout << "enter the size of array :";
	Array arr;
	cin >> arr.size;
	arr.A = new int[arr.size * sizeof(int)];  //memory allocation for all integer type array of size=size	
	int n;
	int length = 0;
	cout << "enter the no. of elements: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter element " << i + 1 << ". ";
		cin >> arr.A[i];

	}

	arr.lenght = n;//n is no. of elements

	arr.DisplayArray(arr, n);

	inserting ins;
	int index, value;
	cout << "Enter the position where value needs to be inserted :";
	cin >> index;
	if (index > arr.size)
	{
		cout << "Please enter a valid index :";
		cout << "Enter the position where value needs to be inserted :";
		cin >> index;
	}

	int position = index - 1;
	cout << "Enter the value to be inserted : ";
	cin >> value;
	ins.insert(position, value, arr.A, n);
	n++;
	//int m = sizeof(position);
	//n = n + m;//to increase the size of array to pass in display, size is increased by the no. elements inserted

	arr.DisplayArray(arr, n);
	deleting del;
	cout << "enter the position you want to delete :";
	cin >> index;
	if (index > n) {
		cout << "Please enter a valid index :";
		return 0;
	}

	position = index - 1;
	n = del.Delete(position, arr.A, n);

	arr.DisplayArray(arr, n);
	cout << endl;
	//linear search
	cout << "Try linear search...." << endl;

	//searching operation
	search ser;
	cout << "Plug in the array :" << endl;

	cout << "All Elements must be unique for better results  :------:";
	cout << endl;
	cout << "enter the no.of elements for next array: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter element " << i + 1 << ". ";
		cin >> arr.A[i];

	}

	arr.lenght = n;
	int key;
	cout << "Enter the element you want to search :" << endl;
	cin >> key;
	int resultoflin = ser.searchLinear(key, arr, n);
	cout << "result of linear search : " << resultoflin;
	cout << endl;

	cout << "lets try Binary search now ----***----";
	int low = arr.A[0];
	int high = arr.A[n - 1];
	int resultofBin = ser.BinarySearch(key, arr, low, high);
	cout << endl;
	cout << "result of Binary search : " << resultofBin;
	cout << endl;
	cout << "lets try using recursion ---***---";
	cout << endl;
	cout << "enter the no.of elements for next array: ";
	cout << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter element " << i + 1 << ". ";
		cin >> arr.A[i];
	}

	arr.lenght = n;
	cout << "Enter the key value you want to search in above array :";
	cin >> key;
	cout << endl;
	int recurvalue = ser.RecursiveBinarySearch(key, arr, low, high);
	cout << "Result of resursive binary search : " << recurvalue;


}


