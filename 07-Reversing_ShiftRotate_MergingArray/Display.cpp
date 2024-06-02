#include"Reversing_ShiftRotate_Merge.h"
void ReverseShft::DisplayArray(ReverseShft rev, int length) {
	cout << "Elements are : ";
	for (int i = 0; i < length; i++) {
		cout << rev.A[i];
	}
	cout << endl;
}