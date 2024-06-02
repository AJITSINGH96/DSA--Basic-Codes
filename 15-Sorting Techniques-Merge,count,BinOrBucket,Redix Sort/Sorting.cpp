#include"Sorting.h"


void Merge(int A[], int l, int mid, int h)
{
	int i = l, j = mid + 1, k = l;
	int B[100];
	while (i <= mid && j <= h)
	{
		if (A[i] < A[j])
			B[k++] = A[i++];
		else
			B[k++] = A[j++];
	}
	for (; i <= mid; i++)
		B[k++] = A[i];
	for (; j <= h; j++)
		B[k++] = A[j];
	for (i = l; i <= h; i++)
		A[i] = B[i];
}
void Sorting::MergeSort(int A[], int n) {
	int p, i, l, mid, h;
	for (p = 2; p <= n; p = p * 2)
	{
		for (i = 0; i + p - 1 < n; i = i + p)
		{
			l = i; h = i + p - 1;
			mid = (l + h) / 2;
			Merge(A, l, mid, h);
		}

		if (n - i > p / 2)
		{
			l = i;
			h = i + p - 1;
			mid = (l + h) / 2;
			Merge(A, l, mid, n - 1);
		}
	}
	if (p / 2 < n) {
		Merge(A, 0, (p / 2) - 1, n - 1);
	}

}


void Sorting::CountSort(int A[], int n) {
	int max;
	max = *max_element(A, A + n);
	int* count = new int[max + 1];
	for (int i = 0; i < max + 1; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		count[A[i]]++;
	}
	int i = 0; int j = 0;
	while (i < max + 1) {
		if (count[i] > 0)
		{
			A[j++] = i;
			count[i]--;
		}
		else
			i++;
	}

}

void Sorting::ShellSort(int A[], int n) {
	int gap, i, j, temp;
	for (gap = n / 2; gap >= 1; gap /= 2) {
		for (i = gap; i < n; i++) {
			temp = A[i];
			j = i - gap;
			while (j >= 0 && A[j] > temp)
			{
				A[j + gap] = A[j];
				j = j - gap;
			}
			A[j + gap] = temp;
		}
	}
}
void Sorting::BinOrBucketSort() {

}
void Sorting::RedixSort() {

}