	#pragma once
using namespace std;
#include<iostream>
class DoublyList {
public:
	int data;
	DoublyList* prev;
	DoublyList* next;
	DoublyList* CreateDoubly(int A[], DoublyList* p, int n);
	DoublyList* Dispay(DoublyList* pass, DoublyList* rpass);
};

class Insert :public DoublyList {
public:
	DoublyList* insert(DoublyList* pass, DoublyList* rpass);
};
