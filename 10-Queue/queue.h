#pragma once
#include<iostream>
using namespace std;

class queue {
public:
	int size;
	int front;//pointer at front
	int rear;//pointer at rear
	int* Q;
	queue* enqueue(queue* q, int A[], int size);
	int dequeue(queue* q);
	void displayqueue(queue* Q);
};
class Node {
public:
	int data;
	Node* node;
	Node* front;
	Node* rear;
	Node* next;
	void enqueueLL();
	int dedueueLL();
};


