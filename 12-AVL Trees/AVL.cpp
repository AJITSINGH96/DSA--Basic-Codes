#include"AVL.h"
Node* AVL::Insert(Node* P, int key) {

	Node* temp;
	if (P == nullptr) {
		temp = new Node;
		temp->data = key;
		temp->lchild = nullptr;
		temp->rchild = nullptr;
		temp->height = 1;
		P = temp;
		return P;
	}

	if (key < P->data) {
		P->lchild = Insert(P->lchild, key);
	}

	else  if (key > P->data) {
		P->rchild = Insert(P->rchild, key);
	}


	P->height = Height(P);
	// Balance Factor and Rotation
	if (BalanceFactor(P) == 2 && BalanceFactor(P->lchild) == 1) {
		return LLRotation(P);
	}
	else if (BalanceFactor(P) == 2 && BalanceFactor(P->lchild) == -1) {
		return LRRotation(P);
	}
	else if (BalanceFactor(P) == -2 && BalanceFactor(P->rchild) == -1) {
		return RRRotation(P);
	}
	else if (BalanceFactor(P) == -2 && BalanceFactor(P->rchild) == 1) {
		return RLRotation(P);
	}

	return P;
}
int AVL::Height(Node* P) {
	int hl;
	int hr;
	if (P && P->lchild) {
		hl = P->lchild->height;
	}
	else
	{
		hl = 0;
	}
	if (P && P->rchild) {
		hr = P->rchild->height;
	}
	else
	{
		hr = 0;
	}

	if (hl > hr) {
		return hl + 1;
	}
	else
		return hr + 1;
}
int AVL::BalanceFactor(Node* P) {
	int hl;
	int hr;
	if (P && P->lchild) {
		hl = P->lchild->height;
	}
	else
	{
		hl = 0;
	}
	if (P && P->rchild) {
		hr = P->rchild->height;
	}
	else
	{
		hr = 0;
	}
	return hl - hr;

}
Node* AVL::LLRotation(Node* P) {
	Node* pl = P->lchild;
	Node* plr = pl->rchild;

	//rotate now
	plr->rchild = P;
	plr = P->lchild;

	//update height
	P->height = Height(P);
	pl->height = Height(pl);

	//update root
	if (root = P) {
		root = pl;
	}
	return pl;
}
Node* AVL::RRRotation(Node* P) {
	Node* pr = P->rchild;
	Node* prl = pr->lchild;

	//rotate now
	pr->lchild = P;
	prl = P->lchild;

	//update height
	P->height = Height(P);
	pr->height = Height(pr);

	//update root
	if (root == P) {
		root = pr;
	}
	return pr;

}
Node* AVL::LRRotation(Node* P) {
	Node* pl = P->lchild;
	Node* plr = pl->rchild;

	//rotate

	pl->rchild = plr->lchild;
	P->lchild = plr->rchild;
	plr->lchild = pl;
	plr->rchild = P;

	//update height
	pl->height = Height(pl);
	P->height = Height(P);
	plr->height = Height(plr);
	if (root == P) {
		root = plr;
	}
	return plr;
}
Node* AVL::RLRotation(Node* P) {
	Node* pr = P->rchild;
	Node* prl = pr->lchild;

	pr->lchild = prl->rchild;
	P->rchild = prl->lchild;

	prl->rchild = pr;
	prl->lchild = P;

	// Update height
	pr->height = Height(pr);
	P->height = Height(P);
	prl->height = Height(prl);

	// Update root
	if (root == P) {
		root = prl;
	}
	return prl;

}
void AVL::Inorder(Node* P)
{
	if (P) {
		Inorder(P->lchild);
		cout << P->data << ", ";
		Inorder(P->rchild);
	}
}