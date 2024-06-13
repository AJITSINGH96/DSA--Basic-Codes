#pragma once
#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include <stack>

using namespace std;
class ShorttestPathInGraph {
public:
	void CreateAdjList(int u, int v, bool direction, unordered_map<int, list<int>>& adj);
	void PrintAdjList(unordered_map<int, list<int>>& adj);
	void addedge(unordered_map<int, list<pair<int, int>>>& adj, int u, int v, int w);
	void PrintAdjListWeight(unordered_map<int, list<pair<int, int>>>& adj);
	void ShortestPathUsingBFS(unordered_map<int, list<int>>& adj, int src, int destination,unordered_map<int,bool>&visited,unordered_map<int,int>&parent);

	void dfs(int node, unordered_map<int, list<pair<int, int>>>&adjList, unordered_map<int, bool>& vis, stack<int>& topo);

	void ShortestDistance(unordered_map<int, list<pair<int, int>>>& adjListint, int src, vector<int>& distance, stack<int>& s);

};
