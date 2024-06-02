#include"ReversingAndConcatinating.h"
CreateNode* ReverseElement::usingReverseLink(CreateNode* p, CreateNode* rp) {
	CreateNode* q = nullptr;
	CreateNode* r = nullptr;
	while (p)
	{
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	p = q;
	rp = p;
	return rp;
}