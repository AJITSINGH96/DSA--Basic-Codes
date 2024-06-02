#include"CreateNode.h"
int CountNodes::count(CreateNode* Pass, int x) {
	int count = 0;
	while (Pass)
	{
		count++;
		Pass = Pass->next;
	}
	cout << "No. of Nodes :" << count;
	x = count;
	return x;
}