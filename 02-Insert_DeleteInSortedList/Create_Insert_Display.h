#pragma once
#include <iostream>
using namespace std;
//void input();
class CreateNode {
public:
	int data;
	CreateNode* next;
	CreateNode* create(int A[], int n, CreateNode* p);
	CreateNode* Display(CreateNode* p, int n, CreateNode* pass);
	int Count(CreateNode* p, int n);

};
class InsertSorted :public CreateNode
{
public:
	CreateNode* InsertInSorted(int A[], CreateNode* p, int n, int x, CreateNode* pass);
};
class DeleteNode :public CreateNode {
public:
	CreateNode* deleteNode(CreateNode* pass, int x, CreateNode* retpass);
};
//class RemoveDuplicates :public CreateNode 
//{
//public:
//	CreateNode* RemoveDuplicate();
//};#pragma once
