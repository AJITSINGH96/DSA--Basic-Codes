#include"Reversing_ShiftRotate_Merge.h"
int main()
{
	cout << "Enter the size of Array :";
	ReverseShft reverse;
	cin >> reverse.size;

	reverse.A = new int[reverse.size * (sizeof(int))];
	cout << "Enter the no. of elements in the Array :";
	cin >> reverse.lenght;
	for (int i = 0; i < reverse.lenght; i++)
	{
		cout << "Enter element " << (i + 1) << " : ";
		cin >> reverse.A[i];
	}
	reverse.DisplayArray(reverse, reverse.lenght);

	reverse.ReverseArrayUsingAuxillaryArray(reverse, reverse.lenght);
	cout << endl;
	cout << "Elements after Reversing using auxillary array: ";
	cout << endl;
	reverse.DisplayArray(reverse, reverse.lenght);
	cout << "But in this case, time complexity is O(n-sqaure)--->NOT GOOD----****----:" << endl;
	cout << "To reduce time complexity, we must use swapping values method -->" << endl;

	reverse.ReverseArrayBySwappingElements(reverse, reverse.lenght);
	cout << "Elements after Reversing using swapping values Method: ";
	cout << endl;
	reverse.DisplayArray(reverse, reverse.lenght);
	cout << " in this case, time complexity is O(n)--->VERY GOOD IMPROVEMENT----****----:" << endl;

	cout << "Lets find single missing Element --->";
	cout << endl;
	FindMissingElement Melement;
	cout << "Element the size of Array :";
	cin >> reverse.size;
	cout << "Enter the no. of elements :";
	cin >> reverse.lenght;
	reverse.A = new int[reverse.size * sizeof(int)];
	for (int i = 0; i < reverse.lenght; i++)
	{
		cout << "Enter element " << (i + 1) << " : ";
		cin >> reverse.A[i];
	}

	Melement.DisplayArray(reverse, reverse.lenght);
	int missing = Melement.SingleMissingElement(reverse, reverse.lenght);
	cout << endl;
	cout << "Time complexity is o(n)";
	cout << endl;

	cout << "Lets try Multiple missing elements ------*---";
	cout << endl << endl;
	cout << "Element the size of Array :";
	cin >> reverse.size;
	cout << "Enter the no. of elements :";
	cin >> reverse.lenght;
	reverse.A = new int[reverse.size * sizeof(int)];
	for (int i = 0; i < reverse.lenght; i++)
	{
		cout << "Enter element " << (i + 1) << " : ";
		cin >> reverse.A[i];
	}


	Melement.DisplayArray(reverse, reverse.lenght);
	Melement.MultipleMissingElement(reverse, reverse.lenght);
	cout << endl;
	cout << "Time complexity is o(n)";
	cout << endl << endl;
	cout << "Lets find numbers that sums to key ---->";
	int key;
	cout << "Enter the key";
	cin >> key;

	FindingSumPair sum;
	cout << "Element the size of Array :";
	cin >> reverse.size;
	cout << "Enter the no. of elements :";
	cin >> reverse.lenght;
	reverse.A = new int[reverse.size * sizeof(int)];
	for (int i = 0; i < reverse.lenght; i++)
	{
		cout << "Enter element " << (i + 1) << " : ";
		cin >> reverse.A[i];
	}
	sum.DisplayArray(reverse, reverse.lenght);
	sum.sumpair(reverse, reverse.lenght, key);
	cout << endl;
	cout << "it is of O(n-sqaure),bcoz,two for loops are used here----,NOT GOOD ENOUGH!!";

	cout << endl;
	cout << "Element the size of Array :";
	cin >> reverse.size;
	cout << "Enter the no. of elements :";
	cin >> reverse.lenght;
	cout << "Enter key again :";
	cin >> key;
	reverse.A = new int[reverse.size * sizeof(int)];
	for (int i = 0; i < reverse.lenght; i++)
	{
		cout << "Enter element " << (i + 1) << " : ";
		cin >> reverse.A[i];
	}
	sum.DisplayArray(reverse, reverse.lenght);

	sum.sumpairOderN(reverse, reverse.lenght, key);
	cout << endl;
	cout << "this is more optimized method, we are using only one while loop---->GOOD ENOUGH!!";
	return 0;

}