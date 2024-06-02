#include"stacks.h"
stack stack::push(int x, stack st) {
	if (st.top == st.size - 1) {
		cout << "Stack is full";
	}
	else {
		st.top++;
		//st.s = new int[st.size];
		st.s[st.top] = x;
	}

	return st;
}
stack stack::pop(stack st) {
	int x = 0;
	if (st.top == -1) {
		cout << "Stack is underflow";
	}
	else {
		x = st.s[st.top];
		cout << "Top element is : " << x;
		st.top--;
	}
	return st;

}
int stack::peek(stack st, int index) {
	int x = 0;
	if (st.top - index + 1 < 0) {
		cout << "invalid position!!";
	}
	else {
		x = st.s[st.top - index + 1];
	}
	cout << "Element at index: " << index << " is " << x;
	cout << endl;
	return x;
}
int stack::stackTop(stack st) {
	int x = 0;
	if (st.top == -1)
	{
		cout << "stack is empty !!";
	}
	else {
		x = st.s[st.top];
	}
	cout << "Top element is :" << x;
	cout << endl;
	return x;
}
bool stack::isEmpty(stack st) {
	if (st.top == -1) {
		cout << "stack is empty !!";
		cout << endl;
		return 1;

	}
	else
		cout << "stack is not empty!!";
	return 0;
	cout << endl;
}
bool stack::isFull(stack st) {
	if (st.top == st.size - 1)
	{
		cout << "stack is full!!";
		cout << endl;
		return 1;
	}
	else {

		cout << "Stack is not full!!";
		cout << endl;
		return 0;
	}

}
StackUsingLinkedList* StackUsingLinkedList::push(int x, StackUsingLinkedList* top) {
	StackUsingLinkedList* node = new StackUsingLinkedList;
	if (node == nullptr) {
		cout << "stack is full";
	}
	else
	{
		node->data = x;
		node->next = top;
		top = node;
	}
	return node;
}
////Rest to be done later,because functions are same ,we just need an already existing linked list in this