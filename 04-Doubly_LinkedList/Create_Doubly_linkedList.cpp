

#include"DoublyLinkedList.h";
DoublyList* DoublyList::CreateDoubly(int A[], DoublyList* p, int n)
{
	DoublyList* first = new DoublyList;

	first->data = A[0];
	first->prev = nullptr;
	first->next = nullptr;

	DoublyList* rpass = first;

	for (int i = 1; i < n; i++)
	{
		DoublyList* temp = new DoublyList;
		temp->data = A[i];
		rpass->next = temp;

		temp->prev = rpass;
		temp->next = nullptr;
		rpass = temp;
	}

	return first;
}
DoublyList* DoublyList::Dispay(DoublyList* pass, DoublyList* rpass)
{
	rpass = pass;
	cout << "Final Doubly linked list";
	while (pass) {
		cout << "<-->" << pass->data;
		pass = pass->next;
	}
	pass = rpass;
	return pass;
}


DoublyList* Insert::insert(DoublyList* pass, DoublyList* rpass)
{
	rpass = pass;
	int pos, x;
	cout << "Enter the Index where you want to Insert a New Node :";
	cin >> pos;
	cout << endl;
	cout << "Enter the Data for the Node to be Inserted :";
	cin >> x;
	DoublyList* inserted = new DoublyList;
	if (pos == 0)
	{
		inserted->data = x;
		inserted->next = pass;
		pass->prev = inserted;
		inserted->prev = nullptr;
		return inserted;
	}
	else
	{
		DoublyList* temp = rpass;
		inserted->data = x;
		for (int i = 0; i < (pos - 2); i++)
		{
			temp = temp->next;
		}
		inserted->next = temp->next;
		inserted->prev = temp;
		temp->next->prev = inserted;

		temp->next = inserted;
	}
	return rpass;
}












// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file