#include "array.h"
#include"Searching.h"
int search::searchLinear(int key, Array arr, int n) {
	for (int i = 0; i < n; i++)
	{
		if (key == arr.A[i])
		{
			cout << "Element found at index " << i << ".";
			return i;//<------Successful Search....
		}
	}
	cout << "Element not found..******...";
	return -1;//<------unsuccessful search...	
}
