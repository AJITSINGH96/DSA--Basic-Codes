#pragma once
#include <iostream>
using namespace std;

class CreateNode {
public:
    int data;
    CreateNode* next;
    CreateNode* create(int A[], int n, CreateNode* pass);
    void display(CreateNode* pass);

};
class InsertNode :public CreateNode {
public:
    virtual CreateNode* insert(CreateNode* Pass, CreateNode* rpass, int N = 0);
};
class CountNodes :public InsertNode
{
public:
    int count(CreateNode* Pass, int x);
};
