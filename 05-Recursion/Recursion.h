#pragma once
#include <iostream>
using namespace std;
class Recusrion {
public:
	void fun1(int n);
	void fun2(int n);
};
//class operationafterrecursion {
//public:
//	int fun(int n);
//};
class TypeRecursion {
public:
	//Tail Recursion: Last thing which is done is calling itself, i.e all operations must be
	//done before recursive call, nothing after that
	void funTail(int n);
	// Head Recursion: No operation before Recursive call,nothing at calling time, everything to be done
	//in returning time.
	void funHead(int n);
	//Tree Recursion: if function is calling itself recursively more than once
	void funTree(int n);
	//Indirect Recursion:A->B->C->A
	void funIndirect(int n);
	void funA(int n);
	void funB(int n);
	//Nested Recursion: Recursive function will pass another recursive function as a parameter
	int funNested(int n);

};
class OperationsOnSeries {
public:
	int SumOfNaturalNumbers(int n);
	int Factorial(int n);
	double PowerUsingRecusion(int m, int n);
	int sumFibnocci(int n);
	int fun(int n);
};