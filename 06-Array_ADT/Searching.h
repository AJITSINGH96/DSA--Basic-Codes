#pragma once
class search :public Array {
public:
	int searchLinear(int key, Array arr, int n);
	int BinarySearch(int key, Array arr, int low, int high);
	int RecursiveBinarySearch(int key, Array arr, int low, int high);
};