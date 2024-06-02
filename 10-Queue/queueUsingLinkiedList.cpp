#include"queue.h"
void Node::enqueueLL()
{
	int x;
	cout << "enter the value to be inserted in queue :";
	cin >> x;
	Node* t = new Node;
	if (t == nullptr)
	{
		cout << "queue is full.";
	}
	else
	{
		t->data = x;
		t->next = nullptr;
	}
	if (front == nullptr)
		front = rear = t;
	else
	{
		rear->next = t;
		rear = t;
	}
}
int Node::dedueueLL() {
	int x = -1;
	Node* p;
	if (front == nullptr)
	{
		cout << "queue is emoty";
	}
	else {
		p = front;
		front = front->next;
		free(p);
	}
	return x;
}