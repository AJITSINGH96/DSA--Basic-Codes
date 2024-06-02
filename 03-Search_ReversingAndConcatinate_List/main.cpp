#include"ReversingAndConcatinating.h"
int main() {

	int count = 0;
	int A[] = { 1,2,3,4,5,6,7 };
	int n = sizeof(A) / sizeof(A[0]);
	CreateNode N;
	CreateNode* p = nullptr;

	p = N.create(A, n, p);
	CreateNode* pass = p;
	cout << "Linked List Before Reversing                   :";
	p = N.Display(p, n, pass);
	cout << endl;
	CreateNode* rp = p;
	ReverseElement Rev;

	int* B = new int[n];//creating an auxillary array to store data of linked list
	Rev.usingReverseElement(p, n, rp, B);

	pass = rp;
	cout << "Linked List After Reversing by Reversing Data  :";
	pass = N.Display(rp, n, pass);
	cout << endl;
	rp = pass;
	rp = Rev.usingReverseLink(pass, rp);
	cout << "Linked List After Reversing by Reversing Links :";
	CreateNode* s = p;
	s = N.Display(rp, n, s);
	cout << endl;

	Concatinating connect;
	connect.Concatinate();

}