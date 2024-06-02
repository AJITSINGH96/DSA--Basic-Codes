#pragma once
using namespace std;
#include<iostream>
class Heap {
public:
	void createHeap(int A[], int x, Heap H);
	void Insert(int A[], int n);
	int Delete(int A[], int n);
};
