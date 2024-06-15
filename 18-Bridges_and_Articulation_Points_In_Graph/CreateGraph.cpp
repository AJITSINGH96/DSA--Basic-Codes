#include"Bridges_and_Articulation.h"

void BridgesAndArticulation::CreateAdjList(int u, int v, bool direction, unordered_map<int, list<int>>& adj) {
	//direction==0-->undirected graph
	//direction==1-->directed graph
	adj[u].push_back(v);
	if (direction == 0) {
		adj[v].push_back(u);
	}

}

void BridgesAndArticulation::PrintAdjList(unordered_map<int, list<int>>& adj) {
	for (auto i : adj) {
		cout << i.first << "-->";
		for (auto j : i.second) {
			cout << j << ",";
		}
		cout << endl;
	}
}
void BridgesAndArticulation::addedge(unordered_map<int, list<pair<int, int>>>& adj, int u, int v, int w,int direction) {
	pair<int, int>p = make_pair(v, w);
	adj[u].push_back(p);
	if (direction == 1) {
		pair<int, int>p = make_pair(u, w);
		adj[v].push_back(p);
	}
}
void BridgesAndArticulation::PrintAdjListWeight(unordered_map<int, list<pair<int, int>>>& adj) {
	for (auto i : adj) {
		cout << i.first << "-->";
		for (auto j : i.second) {
			cout << "(" << j.first << " , " << j.second << "),";
		}
		cout << endl;
	}
}