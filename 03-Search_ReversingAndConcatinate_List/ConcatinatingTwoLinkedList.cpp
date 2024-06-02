#include"ReversingAndConcatinating.h"
void Concatinating::Concatinate() {
	CreateNode Node;
	int A[] = { 1,2,5,8,16,17 };
	int n = sizeof(A) / sizeof(A[0]);
	CreateNode* first = new CreateNode;
	first = Node.create(A, n, first);
	CreateNode* last = nullptr;
	CreateNode* third = nullptr;
	CreateNode* final = nullptr;

	//display first linked list
	CreateNode* pass = first;
	cout << "First Linked List                   :";
	first = Node.Display(first, n, pass);


	///creating 2nd linked link
	int B[] = { 10,12,13,15,19 };
	int m = sizeof(B) / sizeof(B[0]);
	CreateNode* second = new CreateNode;
	second = Node.create(B, m, second);

	//display second linked list

	CreateNode* secondpass = second;
	cout << "Second Linked List                  :";
	second = Node.Display(second, m, secondpass);
	cout << endl << endl;

	//concatinating

	if (first->data < second->data) {
		final = first;
		third = last = first;
		first = first->next;
		last->next = NULL;

	}
	else {
		final = second;
		third = last = second;
		second = second->next;
		last->next = NULL;

	}

	while (first && second)
	{
		if (first->data < second->data)
		{
			last->next = first;
			last = first;
			first = first->next;
			last = NULL;
		}

		else
		{
			last->next = second;
			last = second;
			second = second->next;
			last = nullptr;
		}
	}
	if (first == nullptr)
	{
		last->next = first;
	}
	else
	{
		last->next = second;
	}
	int FinalSize = n + m;
	CreateNode* FinalPass = final;
	cout << "Final Linked List After Concatinating Sorted Lists :";
	FinalPass = Node.Display(final, FinalSize, FinalPass);
}