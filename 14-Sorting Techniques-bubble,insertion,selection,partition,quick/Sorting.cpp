#include"Sorting.h"
void Sorting::BubbleSort(int A[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int flag = 0;
		for (int j = 0; j < n - 1 - i; j++) {
			if (A[j] > A[j + 1]) {
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
	cout << "After Bubble Sort : ";
	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;
}
void Sorting::InsertionSort(int B[], int n) {
	for (int i = 1; i < n; i++) {
		int j = i - 1;
		int x = B[i];
		while ((B[j] > x) && j > -1) {
			B[j + 1] = B[j];
			j--;
		}
		B[j + 1] = x;
	}
	cout << "After Insertion Sort : ";
	for (int i = 0; i < n; i++) {
		cout << B[i] << "  ";
	}
	cout << endl;
}

void Sorting::SelectionSort(int A[], int n) {
	///in this method,we select a position and tries to find a suitable element for the position
	int i, j, k;
	for (i = 0; i < n - 1; i++) {
		for (j = k = i; j < n; j++)
		{
			if (A[j] < A[k]) {
				k = j;
			}
		}
		int temp = A[i];
		A[i] = A[k];
		A[k] = temp;
	}
	cout << "After Selection Sort : ";
	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;
}

int Sorting::partition(int A[], int l, int h) {

	int pivot = A[l];
	int i = l, j = h;
	do {
		do {
			i++;
		} while ((A[i] <= pivot) && i < h);
		do {
			j--;
		} while ((A[j] > pivot) && j > l);
		if (i < j) {
			int temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	} while (i < j);
	int temp = A[l];
	A[l] = A[j];
	A[j] = temp;
	return j;

}
void Sorting::QuickSort(int A[], int l, int h) {
	//in this techniques, we select a element and tried to find a suitable position for the element
	int j;
	if (l < h) {
		j = partition(A, l, h);
		QuickSort(A, l, j);
		QuickSort(A, j + 1, h);
	}


}