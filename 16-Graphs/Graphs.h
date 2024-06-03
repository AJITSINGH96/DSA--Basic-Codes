#pragma once
#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
class graph {
public:
	void CreateAdjList(int u, int v, bool direction, unordered_map<int, list<int>>& adj);
	void PrintAdjList(unordered_map<int, list<int>>& adj);
	void BFS(unordered_map<int, list<int>>& adj, unordered_map<int, bool>& visited, vector<int>& ans, int i);
	void DFS(int DFSnode, unordered_map<int, list<int>>& DFSadj, unordered_map<int, bool>& DFSvisited, vector<int>& component);
};

