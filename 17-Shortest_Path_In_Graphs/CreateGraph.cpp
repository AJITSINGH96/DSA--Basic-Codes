#include"Shortest_in_Graphs.h"

void ShorttestPathInGraph::CreateAdjList(int u, int v, bool direction, unordered_map<int, list<int>>& adj) {
	//direction==0-->undirected graph
	//direction==1-->directed graph
	adj[u].push_back(v);
	if (direction == 0) {
		adj[v].push_back(u);
	}

}

void ShorttestPathInGraph::PrintAdjList(unordered_map<int, list<int>>& adj) {
	for (auto i : adj) {
		cout << i.first << "-->";
		for (auto j : i.second) {
			cout << j << ",";
		}
		cout << endl;
	}
}
void ShorttestPathInGraph:: addedge(unordered_map<int, list<pair<int, int>>>&adj,int u, int v, int w) {
	pair<int, int>p = make_pair(v, w);
	adj[u].push_back(p);
}
void ShorttestPathInGraph::PrintAdjListWeight(unordered_map<int, list<pair<int, int>>>& adj) {
	for (auto i : adj) {
		cout << i.first << "-->";
		for (auto j : i.second) {
			cout << "(" << j.first << " , " << j.second << "),";
		}
		cout << endl;

	}
}
