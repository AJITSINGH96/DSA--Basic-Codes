#pragma once
#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include <stack>
#include<set>
using namespace std;
class BridgesAndArticulation {
public:
	void CreateAdjList(int u, int v, bool direction, unordered_map<int, list<int>>& adj);
	void PrintAdjList(unordered_map<int, list<int>>& adj);
	void addedge(unordered_map<int, list<pair<int, int>>>& adj, int u, int v, int w,int direction);
	void PrintAdjListWeight(unordered_map<int, list<pair<int, int>>>& adj);
	void dfs(int node, int parent, int& timer, vector<int>& disc, vector<int>& low, vector<vector<int>>& result, unordered_map<int, list<int>>& adj, unordered_map<int, bool>& visited);
	void artidfs(int node, int parent, vector<int>& artidisc, vector<int>& artilow, unordered_map<int, bool>& artivis, unordered_map<int, list<int>>& artiadj, vector<int>& artipoints, int& artitimer);
	void kosa_dfs(int node, unordered_map<int, bool>& vis, stack<int>& s, unordered_map<int, list<int>>& adj);
	void transdfs(int node, unordered_map<int, bool>& vis, unordered_map<int, list<int>>& adj);
	vector<int> DijkstrasShortestPath(unordered_map<int, list<pair<int, int>>> adj, int n, int m, int src);
};
