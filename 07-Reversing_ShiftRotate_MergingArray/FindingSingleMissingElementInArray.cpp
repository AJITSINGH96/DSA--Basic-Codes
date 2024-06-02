#include"Reversing_ShiftRotate_Merge.h"
int FindMissingElement::SingleMissingElement(ReverseShft arr, int length) {
	int diff = arr.A[0] - 0;
	for (int i = 0; i < length; i++) {
		if (arr.A[i] - i != diff) {
			cout << "Missing element is :" << i + diff;
			return i + diff;
			break;
		}
	}
	cout << endl;
	cout << "Complete array is okay!..No Missing Element";
}

void FindMissingElement::MultipleMissingElement(ReverseShft arr, int length) {
	int diff = arr.A[0] - 0;
	for (int i = 0; i < length; i++) {
		if (arr.A[i] - i != diff) {
			while (diff < arr.A[i] - i) {
				cout << i << "th Missing element is :" << i + diff;
				cout << endl;
				diff++;
			}
		}
	}
	cout << endl;
}
void FindingSumPair::sumpair(ReverseShft arr, int length, int key) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (arr.A[i] + arr.A[j] == key) {
				cout << arr.A[i]; cout << arr.A[j]; cout << key;
			}
		}
	}

}

void FindingSumPair::sumpairOderN(ReverseShft arr, int length, int key) {
	int i = 0;
	int j = length - 1;
	while (i < j) {
		if (arr.A[i] + arr.A[j] == key) {
			cout << arr.A[i]; cout << arr.A[j]; cout << key;
			i++;
			j--;
		}
		else if (arr.A[i] + arr.A[j] < key)
		{
			i++;
		}
		else if (arr.A[i] + arr.A[j] > key)
		{
			j--;
		}
	}
}