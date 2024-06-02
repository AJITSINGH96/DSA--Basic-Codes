#include"CreateNode.h"
CreateNode* CreateNode::create(int A[], int n, CreateNode* pass)
{
	CreateNode* first = new CreateNode;
	first->data = A[0];
	first->next = nullptr;
	CreateNode* second = first;


	for (int i = 1; i < n; i++)
	{
		CreateNode* temp = new CreateNode;
		temp->data = A[i];
		second->next = temp;
		second = temp;
		temp->next = nullptr;//0r first=first->next//same thing		
	}
	pass = first;
	return pass;
}

void CreateNode::display(CreateNode* Pass)
{
	cout << "Final linked list";
	while (Pass) {

		cout << "-->" << Pass->data;

		Pass = Pass->next;
	}
	cout << endl << endl;
}