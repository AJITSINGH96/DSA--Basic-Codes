#pragma once
#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include <stack>
using namespace std;
class graph {
public:
	void CreateAdjList(int u, int v, bool direction, unordered_map<int, list<int>>& adj);
	void PrintAdjList(unordered_map<int, list<int>>& adj);
	void BFS(unordered_map<int, list<int>>& adj, unordered_map<int, bool>& visited, vector<int>& ans, int i);
	void DFS(int DFSnode, unordered_map<int, list<int>>& DFSadj, unordered_map<int, bool>& DFSvisited, vector<int>& component);
	bool IsCycleBFS(int src, unordered_map<int, bool>& visitedcycle, unordered_map<int, list<int>>& adjcycle);
	bool IsCycleDFS(int src,int parent, unordered_map<int, bool>& visitedcycle, unordered_map<int, list<int>>& adjcycle);
	bool IsCycleDFSInDirected(int node, unordered_map<int, bool>& visited, unordered_map<int, bool>& dfspathvisited, unordered_map<int, list<int>>& adjcycle);
	vector<int>TopologicalSortusingBFS(unordered_map<int, list<int>>& Topoadj, int v, int edge);
	void ToposortDFS(int node, unordered_map<int, bool>& visited, stack<int>& s, unordered_map<int, list<int>>& adj);
};

