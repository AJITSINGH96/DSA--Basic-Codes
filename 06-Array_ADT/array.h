#pragma once
#include <iostream>
using namespace std;
class Array {
public:
	int* A;         //will be pointing to the first element of array given.
	int size;       //shows size of array
	int lenght;     //shows no. of elements in an array
	void DisplayArray(Array arr, int length);
	//Array();
};
//Array::Array() {    //constructor
//	size = 0;
//	lenght = 0;
//}
class inserting :public Array {
public:
	void insert(int index, int value, int* A, int n);
};
class deleting :public Array {
public:
	int Delete(int index, int* A, int n);

};
