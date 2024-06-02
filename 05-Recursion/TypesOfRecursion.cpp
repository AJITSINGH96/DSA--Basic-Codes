#include"Recursion.h"

void TypeRecursion::funTail(int n) {
	if (n > 0) {
		cout << n;
		funTail(n - 1);
	}
}
void TypeRecursion::funHead(int n) {
	if (n > 0) {
		funHead(n - 1);
		cout << n;
	}
}
void TypeRecursion::funTree(int n) {
	if (n > 0) {
		cout << n;
		funTail(n - 1);
		funTail(n - 1);

	}
}
void TypeRecursion::funA(int n) {
	{
		cout << n << ",";
		funB(n - 1);
	}
}
void TypeRecursion::funB(int n) {
	if (n > 1)
	{
		cout << n << ",";
		funA(n / 2);
	}
}
void TypeRecursion::funIndirect(int n) {
	if (n > 0) {
		funA(n);
	}
}
int TypeRecursion::funNested(int n) {
	if (n > 100) {
		return (n - 10);
	}
	else
	{
		return funNested(funNested(n + 11));
	}
}