#pragma once
#include<iostream>
using namespace std;
class Sorting {
public:
	void BubbleSort(int A[], int n);
	void InsertionSort(int A[], int n);
	void SelectionSort(int A[], int n);
	int partition(int A[], int l, int h);
	void QuickSort(int A[], int l, int h);

};
