#include"stacks.h"
int main() {
	stack st;

	int InValue;
	int index;
	int x;
	cout << "Enter size of stack:";
	cin >> st.size;
	cout << "Enter the elements to push into stack :";
	cin >> InValue;
	st.top = -1;
	st.s = new int[st.size];
	st = st.push(InValue, st);
	st = st.pop(st);
	cout << "Enter size of stack:";
	cin >> st.size;
	cout << "Enter the elements to push into stack :";
	cin >> InValue;
	st.s = new int[st.size];
	st = st.push(InValue, st);
	cout << endl;

	cout << "Enter the index that you want to peek:";
	cin >> index;
	st.peek(st, index);
	st.stackTop(st);
	st.isEmpty(st);
	st.isFull(st);

	StackUsingLinkedList node;
	StackUsingLinkedList* top = new StackUsingLinkedList;
	top->next = nullptr;
	for (int i = 0; i < 3; i++) {
		cout << "enter " << (i + 1) << "th element to push into stack : ";
		cin >> x;
		top = node.push(x, top);
	}

	//rest to be done later, because functions are same ,we just need an already existing linked list in this
}