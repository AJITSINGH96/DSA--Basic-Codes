#include"Heap.h"

void Heap::createHeap(int A[], int x, Heap H) {
	for (int i = 2; i < x; i++) {
		H.Insert(A, i);
	}
}
void Heap::Insert(int A[], int n) {
	int i = n;
	int temp = A[i];
	while (i > 1 && temp > A[i / 2]) {
		A[i] = A[i / 2];
		i = i / 2;
	}
	A[i] = temp;
}
int Heap::Delete(int A[], int n) {
	int x, i, j, val, temp;
	val = A[1];
	x = A[n];
	A[1] = x;
	A[n] = val;
	i = 1; j = 2 * i;

	while (j <= n - 1) {
		if (j<n - 1 && A[j + 1] > A[j]) {
			j = j + 1;
		}

		if (A[i] < A[j]) {
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			i = j;
			j = 2 * i;
		}
		else
			break;
	}
	return val;
}
