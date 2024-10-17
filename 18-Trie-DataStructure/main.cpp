#include"Trie.h"
int main() {
	Trie *t=new Trie();
	t->inseretWord("abcd");
	cout << "present or not :" << t->search("abcde") << endl;
	return 0;
	//Time complexity-insertion:O(length of word)
	//T-0
}