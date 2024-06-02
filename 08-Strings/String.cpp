#include"String.h"
int strings::strlength(string s) {
	int count = 0;
	for (int i = 0; s[i]; i++) {
		count++;
	}
	cout << "length of string is :" << count;
	return count;
	cout << endl;
}
void strings::ChangeCase(string s)
{
	for (int i = 0; s[i]; i++)
	{
		if (s[i] >= 65 && s[i] <= 90) //ASCII Code for A=65 and a=75, difference of 32
		{
			s[i] += 32;
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	cout << s;
	cout << endl;
}
bool strings::valid(string s) {
	for (int i = 0; s[i]; i++) {
		if (!(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122) && !(s[i] >= 48 && s[i] <= 57))
		{
			cout << "Invalid string!!";
			return 0;
		}
		else
		{
			cout << "Valid string..";
			return 1;
		}
	}
}
void strings::reverse(string s) {
	cout << "------let's see reversing of string------";
	cout << "This is using swap by traversing from both ends,so no extra array is required ";
	cout << endl;
	int i = 0;
	strings st;
	for (i = 0; i < s[i]; i++) {

	}
	int j = i - 1;//now i is at 2nd last element that is by not including '\0'
	char t;
	for (i = 0; i < j; i++, j--) {
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
	cout << "Reverse of string is :";
	cout << s;
	cout << endl;
}