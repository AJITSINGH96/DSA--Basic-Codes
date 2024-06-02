#pragma once
#include<iostream>
using namespace std;
class Node {
public:
	Node* lchild;
	int data;
	Node* rchild;
	int height;
};
class AVL :public Node {
public:
	Node* root = nullptr;
	int Height(Node* P);
	int BalanceFactor(Node* P);
	Node* LLRotation(Node* P);
	Node* RRRotation(Node* P);
	Node* LRRotation(Node* P);
	Node* RLRotation(Node* P);
	Node* Insert(Node* P, int key);
	void Inorder(Node* P);
};
