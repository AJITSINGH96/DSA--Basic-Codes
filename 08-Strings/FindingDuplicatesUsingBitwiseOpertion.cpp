#include"String.h"
void strings::Duplicates(string s)
{
	long int H = 0;//it takes 32 bits and have initialized all bits with 0
	long int x = 0;
	for (int i = 0; s[i]; i++)
	{
		x = 1;
		x = x << s[i] - 97;//left shift x by their difference i.e ASCII code of s[i] & 97
		if ((x & H) > 0) {
			cout << "is duplicate : ";
			cout << s[i];
			cout << endl;
		}
		else
			H = x | H;
	}
}