#include"Sorting.h"




int main() {
	int c = 0;
	int A[] = { 9,8,7,6 };
	for (auto i : A) {
		c++;
	}
	int n = c;
	Sorting Sort;
	Sort.BubbleSort(A, n);
	int B[] = { 9,8,7,6 };
	Sort.InsertionSort(B, n);
	int C[] = { 9,8,7,6 };
	Sort.SelectionSort(C, n);
	int D[] = { 9,8,7,6 };
	int l = 0, h = n;
	Sort.QuickSort(D, l, h);

	cout << "After quick Sort : ";

	for (int i = 0; i < n; i++) {
		cout << D[i] << "  ";
	}
	cout << endl;
}