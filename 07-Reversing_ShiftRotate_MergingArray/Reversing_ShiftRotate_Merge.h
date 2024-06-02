#pragma once
#include<iostream>
using namespace std;
class ReverseShft {
public:
	int* A;
	int* B;
	int size;                                //shows size of array
	int lenght;                              //shows no. of elements in an array
	void DisplayArray(ReverseShft arr, int length);
	void ReverseArrayUsingAuxillaryArray(ReverseShft rev, int length);
	void ReverseArrayBySwappingElements(ReverseShft rev, int length);
};
class FindMissingElement :public ReverseShft {
public:
	int SingleMissingElement(ReverseShft arr, int length);
public:
	void MultipleMissingElement(ReverseShft arr, int length);
};
class FindingSumPair :public ReverseShft {
public:
	void sumpair(ReverseShft arr, int lenght, int key);
	void sumpairOderN(ReverseShft arr, int length, int key);
};
