#include "array.h"
#include"Searching.h"
int search::BinarySearch(int key, Array arr, int low, int high) {
	while (low < high) {
		int mid = (low + high) / 2;
		if (key == arr.A[mid])
			return mid;//<-----------sucessful search
		else if (key < arr.A[mid])
			high = mid - 1;
		else if (key > arr.A[mid])
			low = mid + 1;
	}
	return -1;//<--------------------unsucessful search
}
int search::RecursiveBinarySearch(int key, Array arr, int low, int high) {
	if (low <= high) {
		int mid = (low + high) / 2;
		if (key == arr.A[mid])
			return mid;
		else if (key < arr.A[mid])
			return RecursiveBinarySearch(key, arr, low, (mid - 1));
		else
			return  RecursiveBinarySearch(key, arr, (mid + 1), high);
	}
	return -1;
}


