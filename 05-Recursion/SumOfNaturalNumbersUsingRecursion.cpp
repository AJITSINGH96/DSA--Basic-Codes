#include"Recursion.h"

int OperationsOnSeries::SumOfNaturalNumbers(int n)
{
	if (n == 0)
		return 0;
	else
		return SumOfNaturalNumbers(n - 1) + n;

}

int OperationsOnSeries::Factorial(int n)
{

	if (n == 0) {
		return 1;
	}
	else {
		return Factorial(n - 1) * n;
	}
}

double OperationsOnSeries::PowerUsingRecusion(int m, int n)
{
	if (n == 0)
		return 1;
	else {
		return PowerUsingRecusion(m, n - 1) * m;
	}
}
int OperationsOnSeries::sumFibnocci(int n)
{
	if (n <= 1) {
		return n;
		cout << n;
	}
	else
	{
		return sumFibnocci(n - 2) + sumFibnocci(n - 1);
	}
	cout << endl;
	cout << endl;
}

int OperationsOnSeries::fun(int n) {
	int x = 1, k;
	if (n == 1)
		return x;
	for (k = 1; k < n; k++) {
		x = x + fun(k) + fun(n - k);
		
	}
	return x;
}



