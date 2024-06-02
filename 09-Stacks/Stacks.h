#pragma once
#include<iostream>
using namespace std;
class stack {
	//required things:
	//1-space for storing data
	//2-Top pointer
public:
	int size;
	int top;//will be using to create array in heap, so will act as pointer
	int* s;
	stack push(int x, stack s);
	stack pop(stack st);
	int peek(stack st, int index);
	int  stackTop(stack st);
	bool isEmpty(stack st);
	bool isFull(stack st);
	stack() {

	}
	/*
	Methods are:
	1-push(x):
	2-pop():
	3-peek(index)
	4-stackTop()
	5-isEmpty()
	6-isFull()
	*/
};
class  StackUsingLinkedList {
public:
	int data;
	StackUsingLinkedList* next;

	StackUsingLinkedList* push(int x, StackUsingLinkedList* top);
	StackUsingLinkedList pop(StackUsingLinkedList);
	int peek(StackUsingLinkedList l, int index);
	int stackTop(StackUsingLinkedList l);
	bool isEmpty(StackUsingLinkedList l);
	bool isFull(StackUsingLinkedList l);

};
///to be done later,because functions are same ,we just need an already existing linked list in this#pragma once
