#include"Recursion.h"

int main() {
	int n = 5;
	Recusrion rec;
	cout << "Output of fun1() :";
	rec.fun1(n);
	cout << endl;
	cout << "NOTE: Output of fun1() is in Descending order, as printing is done before function call, i.e in calling time" << endl;
	cout << endl;
	cout << "Output of fun2() :";
	rec.fun2(n);
	cout << endl;
	cout << "NOTE: Output of fun2() is in Aescending order, as printing is done after function call,i.e in return time" << endl;
	cout << endl;
	cout << endl;


	/*operationafterrecursion add;
	int result = add.fun(n);
	cout << "Output of fun after operation using static variable :";
	cout << result;
	cout << endl;
	cout << endl;*/

	TypeRecursion type;
	cout << "Output of Tail recursion:";
	type.funTail(n = 3);
	cout << endl; cout << endl;


	cout << "output of Head recursion:";
	type.funHead(n = 3);
	cout << endl; cout << endl;

	cout << "Output of Tree recursion:";
	type.funTree(n = 3);
	cout << endl; cout << endl;

	cout << "Output of Indirect recursion:";
	type.funIndirect(n = 20);
	cout << endl; cout << endl;

	cout << "Output of Nested recursion:";
	int resultNested = type.funNested(n = 95);
	cout << resultNested;
	cout << endl; cout << endl;

	OperationsOnSeries operation;
	int sum = operation.SumOfNaturalNumbers(n = 3);
	cout << "sum of first " << n << " natural numbers is : " << sum;
	cout << endl; cout << endl;
	int factorial = operation.Factorial(n = 5);
	cout << "factorial of " << n << " is : " << factorial;
	cout << endl; cout << endl;
	int m;
	double power = operation.PowerUsingRecusion(m = 4, n = 5);
	cout << "value of " << m << " to the power " << n << " is : " << power;
	cout << endl; cout << endl;

	cout << "sumFibnocci of first five numbers is :";
	int sumFibnocci = operation.sumFibnocci(n = 5);
	cout << sumFibnocci; cout << endl; cout << endl;


	int results = operation.fun(n = 5);
	cout << "results is : " << results << endl;

}