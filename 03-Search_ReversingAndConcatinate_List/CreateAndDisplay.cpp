#include"ReversingAndConcatinating.h"
CreateNode* CreateNode::create(int A[], int n, CreateNode* p)
{
	CreateNode* first = new CreateNode;
	first->data = A[0];
	CreateNode* second = first;
	first->next = nullptr;

	for (int i = 1; i < n; i++)
	{
		CreateNode* temp = new CreateNode;
		temp->data = A[i];
		second->next = temp;
		second = temp;
		temp->next = nullptr;
	}
	p = first;
	return p;
}
CreateNode* CreateNode::Display(CreateNode* p, int n, CreateNode* pass) {
	for (int i = 0; i < n; i++) {
		cout << "-->" << p->data;
		p = p->next;
	}
	cout << endl;
	p = pass;
	return p;
}
int CreateNode::Count(CreateNode* p, int n) {

	while (p) {
		p = p->next;
		n++;
	}

	return n;
}