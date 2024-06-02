#include"Tree.h"
int main() {

	TreeNode t;
	TreeNode* p;
	p = t.createTree();
	cout << "Preordr is : ";
	t.preorder(p);
	cout << endl;
	cout << endl;
	cout << "Inordr is : ";
	t.inorder(p);
	cout << endl;
	cout << endl;
	cout << " Postordr is : ";
	t.postorder(p);
	return 0;
}