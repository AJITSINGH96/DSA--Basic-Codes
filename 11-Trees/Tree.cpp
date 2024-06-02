#include"Tree.h"
TreeNode* root = new TreeNode;
void queue::enqueue(TreeNode* x)
{

	if (rear == size - 1)
	{
		cout << "queue is full now";
	}
	else
	{
		rear++;
		Q[rear] = x;
	}
}
void queue::createqueue(queue* q, int size) {
	q->size = size;
	q->front = q->rear = 0;
	Q = new TreeNode * [q->size * sizeof(TreeNode*)];
}
bool queue::isEmpty(queue q)
{
	if (q.front == q.rear)
		return true;
	else {
		return false;
	}

}
TreeNode* queue::dequeue(queue* q) {
	TreeNode* x = nullptr;

	if (q->front == q->rear) {
		cout << "queue is empty";
	}
	else {
		q->front++;
		x = q->Q[q->front];
	}
	return x;
}

TreeNode* TreeNode::createTree()
{
	TreeNode* p;

	queue q;
	q.createqueue(&q, 100);
	cout << "enter root value:";
	cin >> root->data;
	root->lchild = root->rchild = 0;
	q.enqueue(root);
	while (!q.isEmpty(q)) {
		int x;
		p = q.dequeue(&q);
		cout << "enter left child :";
		cin >> x;
		if (x != -1)
		{
			TreeNode* temp = new TreeNode;
			temp->data = x;
			temp->lchild = temp->rchild = 0;
			p->lchild = temp;
			q.enqueue(temp);
		}
		cout << "enter right child :";
		cin >> x;
		if (x != -1)
		{
			TreeNode* temp = new TreeNode;
			temp->data = x;
			temp->lchild = temp->rchild = 0;
			p->rchild = temp;
			q.enqueue(temp);
		}
	}
	return root;
}

void TreeNode::preorder(TreeNode* t) {
	if (t != nullptr) {
		cout << t->data << ",";
		preorder(t->lchild);
		preorder(t->rchild);
	}

}
void TreeNode::inorder(TreeNode* t) {
	if (t != nullptr) {
		inorder(t->lchild);
		cout << t->data << ",";
		inorder(t->rchild);
	}
}
void TreeNode::postorder(TreeNode* t) {
	if (t != nullptr) {
		postorder(t->lchild);
		postorder(t->rchild);
		cout << t->data << ",";
	}
}