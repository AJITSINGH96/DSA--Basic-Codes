#include"String.h"

int main() {
	strings st;
	string s = "";
	cout << "enter the string :";
	cin >> s;
	st.strlength(s);
	cout << endl;
	st.ChangeCase(s);
	cout << endl;
	st.valid(s);
	cout << endl;
	st.reverse(s);
	cout << endl;
	cout << "Enter a string to find it's duplicate alphabets :";
	cin >> s;
	st.Duplicates(s);
}