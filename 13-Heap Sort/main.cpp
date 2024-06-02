#include"Heap.h"
int x;//size of array
int main() {
	cout << "enter the size of array : ";
	cin >> x;
	int value;
	int* A = new int[x];
	for (int i = 0; i < x; i++) {
		cout << "Enter value no." << i + 1 << " : ";
		cin >> value;
		A[i] = value;
		cout << endl;
	}
	cout << "before inserting : ";
	for (int i = 0; i < sizeof(A); i++) {
		cout << A[i] << ",";
	}

	Heap H;
	H.createHeap(A, x, H);
	cout << "After Inserting : ";
	for (int i = 0; i < sizeof(A); i++) {
		cout << A[i] << ",";
	}
	int n = sizeof(A);
	for (int i = n - 1; i > 1; i--) {
		H.Delete(A, i);
	}
	cout << "After Deleting and Heap Sorting : ";
	for (int i = 1; i <= n - 1; i++) {
		cout << A[i] << ",";
	}
}