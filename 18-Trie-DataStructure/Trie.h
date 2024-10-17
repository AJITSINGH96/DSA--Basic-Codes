#pragma once
#include<iostream>
using namespace std;
class TrieNode {
public:
	char data;
	TrieNode* children[26];
	bool isTerminal;
	TrieNode(char ch) {
		data = ch;
		for (int i = 0; i < 26; i++) {
			children[i] = NULL;
		}
		isTerminal = false;
	}
};

class Trie {
public:
	TrieNode* root;
	Trie() {
		root = new TrieNode('\0');
	}
	void insertUtil(TrieNode* root, string word);
	void inseretWord(string word);
	bool search(string word);
	bool searchUtil(TrieNode* root, string word);
};
