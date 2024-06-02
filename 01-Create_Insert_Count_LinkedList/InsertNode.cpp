#include"CreateNode.h"
CreateNode* InsertNode::insert(CreateNode* Pass, CreateNode* rpass, int N) {
	CreateNode* insertNode = new CreateNode;
	cout << "enter the data for node :";
	int x;
	cin >> x;
	insertNode->data = x;
	int pos;
	cout << "insert the position you want to insert :";
	cin >> pos;
	if (pos > N + 1) {
		cout << "The Length of Node is " << N << "." << " Please Enter a Valid Position." << endl;
		cout << "insert the position you want to insert :";
	}
		
	cin >> pos;




	if (pos == 0)
	{
		insertNode->next = Pass;
		Pass = insertNode;
	}
	else
	{
		CreateNode* temp = Pass;
		for (int i = 0; i < pos - 2; i++)
		{
			temp = temp->next;
		}
		insertNode->next = temp->next;//insert action
		temp->next = insertNode;

	}
	rpass = Pass;
	return rpass;//we return the pointer storing the value of position of new node to use in display function.

}