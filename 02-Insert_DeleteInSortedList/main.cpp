#include "Create_Insert_Display.h"
#include<conio.h>

//enum einput { Yes, No };
//einput dir;
//void input() {
//	
//	if (_kbhit())
//	{
//		switch (_getch())
//		{
//		case 'n':
//			dir = Yes;
//			break;
//		case 'y':
//			dir = No;
//			break;
//		}
//	}
//}

int main() {
	int count = 0;
	int A[] = { 1,2,3,4,5,7 };
	int n = sizeof(A) / sizeof(A[0]);
	CreateNode N;
	CreateNode* p = nullptr;

	p = N.create(A, n, p);
	CreateNode* pass = p;
	cout << "linked list :";
	p = N.Display(p, n, pass);
	CreateNode* rp = p;
	InsertSorted s;
	int x;
	cout << "Do you want to insert any element :";
	cout << "y/n" << endl;


	//input();

	/*switch (dir)
	{
	case Yes:*/
	cout << "enter the value to be inserted :";
	cin >> x;
	p = s.InsertInSorted(A, p, n, x, rp);
	count = N.Count(p, count);
	cout << "Sorted list after insertion:";
	p = N.Display(p, count, rp);
	/*break;
case No:*/
	count = 0;
	count = N.Count(p, count);
	/*	break;*/

	cout << endl;
	cout << "No. of Nodes :" << count << endl;
	//}
	DeleteNode Del;
	int value;
	cout << "Enter the Node position you want to delete :";
	cin >> value;
	CreateNode* retpass = rp;
	rp = Del.deleteNode(rp, value, retpass);

	count = 0;
	count = N.Count(rp, count);

	CreateNode* rp2 = rp;
	rp = Del.Display(rp, count, rp2);

	count = 0;
	count = N.Count(rp, count);
	cout << endl;
	cout << "No. of Nodes :" << count << endl;;
	/*RemoveDuplicates R;
	R.RemoveDuplicate();*/
}