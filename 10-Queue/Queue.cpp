#include"queue.h"
queue* queue::enqueue(queue* q, int A[], int size) {
	queue* lq = new queue;
	lq->Q = A;
	lq->front = lq->rear = -1;
	lq->size = size;
	int x;
	for (int i = 0; i <= size; i++) {
		if (lq->rear == lq->size - 1)
		{
			cout << "queue is full now";
		}

		else
		{
			cout << "enter value to put in queue :";
			cin >> x;
			lq->rear++;
			lq->Q[lq->rear] = x;
		}
		q = lq;
	}
	return q;

}

int queue::dequeue(queue* q) {
	int x = -1;

	if (q->front == q->rear) {
		cout << "queue is empty";
	}
	else {
		q->front++;
		x = q->Q[q->front];
	}
	return x;
}
void queue::displayqueue(queue* q) {
	for (int i = 0; i < size; i++) {
		cout << q->Q[i];
		cout << " ";
	}
	cout << endl;
}