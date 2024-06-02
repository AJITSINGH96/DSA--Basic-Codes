#include"queue.h"
int main() {

	queue q;
	queue* p = nullptr;
	cout << "enter the size of queue :";
	cin >> q.size;
	q.Q = new int[q.size];
	q.front = q.rear = -1;
	p = q.enqueue(p, q.Q, q.size);
	q.displayqueue(p);
	cout << endl;
	q.dequeue(p);
	Node n;
	n.enqueueLL();
	n.dedueueLL();


}