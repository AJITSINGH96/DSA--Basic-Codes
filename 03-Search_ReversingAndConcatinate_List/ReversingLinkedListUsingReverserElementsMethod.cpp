#include"ReversingAndConcatinating.h"

void ReverseElement::usingReverseElement(CreateNode* p, int n, CreateNode* pass, int* B) {

	int i = 0;
	while (p) {

		B[i] = p->data;
		p = p->next;
		i++;
	}
	p = pass;
	i--;
	while (p) {
		p->data = B[i];
		i--;
		p = p->next;
	}

}