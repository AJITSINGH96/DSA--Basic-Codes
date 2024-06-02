#pragma once
#include<iostream>
using namespace std;
class CreateNode {
public:
	int data;
	CreateNode* next;
	CreateNode* create(int A[], int n, CreateNode* p);
	CreateNode* Display(CreateNode* p, int n, CreateNode* pass);
	int Count(CreateNode* p, int n);

};

class ReverseElement :public CreateNode
{
public:
	void usingReverseElement(CreateNode* p, int n, CreateNode* pass, int* B);
	CreateNode* usingReverseLink(CreateNode* p, CreateNode* rp);
};
class Concatinating : public CreateNode {
public:
	void Concatinate();
};
