#pragma once
using namespace std;
#include<iostream>
class TreeNode {
public:

	TreeNode* lchild;
	int data;
	TreeNode* rchild;
	TreeNode* createTree();
	void preorder(TreeNode* t);
	void inorder(TreeNode* t);
	void postorder(TreeNode* t);
	TreeNode* t;
};
class queue {
public:
	int size;
	int front;//pointer at front
	int rear;//pointer at rear
	TreeNode** Q;
	void enqueue(TreeNode* x);
	TreeNode* dequeue(queue* q);
	bool isEmpty(queue q);
	void createqueue(queue* q, int size); /*{
		q->size = size;
		q->front = q->rear = 0;
		Q = new TreeNode * [q->size * sizeof(TreeNode*)];
	}*/

};



