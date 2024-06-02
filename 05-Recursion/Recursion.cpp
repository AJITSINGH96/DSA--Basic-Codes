
#include"Recursion.h"
void Recusrion::fun1(int n) {
	if (n > 0) {
		cout << n;
		fun1(n - 1);
	}
}
void Recusrion::fun2(int n) {
	if (n > 0) {
		fun2(n - 1);
		cout << n;
	}
}


