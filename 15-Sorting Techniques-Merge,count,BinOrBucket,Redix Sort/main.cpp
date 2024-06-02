#include"Sorting.h"
int main() {
	int A[] = { 11, 5, 14, 2, 6, 3, 1 };
	int c = 0;
	for (auto i : A) {
		c++;
	}
	int n = c;
	Sorting sort;
	sort.MergeSort(A, n);
	cout << "After Merge Sort : ";
	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\n");


	int B[] = { 11, 5, 14, 2, 6, 3, 1 };
	c = 0;
	for (auto i : A) {
		c++;
	}
	n = c;
	sort.CountSort(B, n);
	cout << "After Count Sort : ";
	for (int i = 0; i < n; i++)
		printf("%d ", B[i]);
	printf("\n");

	int C[] = { 11, 5, 14, 2, 6, 3, 1 };
	c = 0;
	for (auto i : A) {
		c++;
	}
	n = c;
	sort.ShellSort(C, n);
	cout << "After Shell Sort : ";
	for (int i = 0; i < n; i++)
		printf("%d ", B[i]);
	printf("\n");

	return 0;
}