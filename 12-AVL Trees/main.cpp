#include"AVL.h"
int main() {
	AVL tr;
	tr.root = tr.Insert(tr.root, 50);
	tr.root = tr.Insert(tr.root, 10);
	tr.root = tr.Insert(tr.root, 20);

	tr.Inorder(tr.root);
}