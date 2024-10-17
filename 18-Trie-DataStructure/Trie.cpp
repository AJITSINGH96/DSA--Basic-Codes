#include "Trie.h"

void Trie::insertUtil(TrieNode* root, string word) {
	//base case
	if (word.length() == 0) {
		root->isTerminal=true;
		return;
	}
	int index = word[0] - 'a';
	TrieNode* child;
	//present
	if (root->children[index] != NULL) {
		child = root->children[index];
	}
	//absent
	else {
		child = new TrieNode(word[0]);
		root->children[index] = child;
	}
	//recursion
	insertUtil(child, word.substr(1));

}

void Trie::inseretWord(string word)
{
	insertUtil(root, word);
}
bool Trie::search(string word) {
	return searchUtil(root, word);
}
bool Trie::searchUtil(TrieNode* root, string word) {
	//base case
	if (word.length() == 0) {
		return root->isTerminal;
	}
	int index = word[0] - 'a';
	TrieNode* child;
	//present
	if (root->children[index] != NULL) {
		child = root->children[index];
	}
	else {
		//absent
		return false;
	}
	return searchUtil(child, word.substr(1));
}

