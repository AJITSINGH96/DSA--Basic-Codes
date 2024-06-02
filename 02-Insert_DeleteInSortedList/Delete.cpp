#include "Create_Insert_Display.h"
CreateNode* DeleteNode::deleteNode(CreateNode* pass, int x, CreateNode* retpass) {
	CreateNode* p = pass;
	if (pass)
	{
		if (x == 0)
		{
			p = p->next;
			delete p;
		}
		else
		{
			for (int i = 0; i < (x - 1); i++)
			{
				p = pass;
				pass = pass->next;
			}
			if (pass) {
				p->next = pass->next;
				delete pass;
			}
		}
	}
	pass = retpass;
	return retpass;
}