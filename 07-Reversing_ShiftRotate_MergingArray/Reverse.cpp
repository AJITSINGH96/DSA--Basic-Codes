#include"Reversing_ShiftRotate_Merge.h"
void ReverseShft::ReverseArrayUsingAuxillaryArray(ReverseShft rev, int lenght)
{
	ReverseShft Auxillary;

	Auxillary.B = new int[lenght * (sizeof(int))];
	int i = 0; int j = 0;
	for (i = lenght - 1, j = 0; i >= 0; i--, j++)
	{
		Auxillary.B[j] = rev.A[i];
	}
	for (int i = 0; i < lenght; i++)
	{
		rev.A[i] = Auxillary.B[i];
	}
}
void ReverseShft::ReverseArrayBySwappingElements(ReverseShft rev, int length)
{
	for (int i = 0, j = length - 1; i < j; i++, j--)
	{
		int temp = rev.A[i];
		rev.A[i] = rev.A[j];
		rev.A[j] = temp;
	}
}