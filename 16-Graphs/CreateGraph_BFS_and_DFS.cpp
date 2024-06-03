#include"Graphs.h"

void graph::CreateAdjList(int u, int v, bool direction, unordered_map<int, list<int>>& adj) {
	//direction==0-->undirected graph
	//direction==1-->directed graph
	adj[u].push_back(v);
	if (direction == 0) {
		adj[v].push_back(u);
	}

}
void graph::PrintAdjList(unordered_map<int, list<int>>& adj) {
	for (auto i : adj) {
		cout << i.first << "-->";
		for (auto j : i.second) {
			cout << j << ",";
		}
		cout << endl;
	}
}
void graph::BFS(unordered_map<int, list<int>>& adj, unordered_map<int, bool>& visited, vector<int>& ans, int node) {
	queue<int>q;
	q.push(node);
	visited[node] = 1;
	while (!q.empty()) {
		int frontnode = q.front();
		q.pop();
		ans.push_back(frontnode);
		//traverse all neighbours of frontnode
		for (auto i : adj[frontnode]) {
			if (!visited[i]) {
				q.push(i);
				visited[i] = 1;
			}
		}
	}

}

void graph::DFS(int node, unordered_map<int, list<int>>& DFSadj, unordered_map<int, bool>& DFSvisited, vector<int>& component) {
	DFSvisited[node] = true;
	component.push_back(node);
	for (auto i : DFSadj[node]) {
		if (!DFSvisited[i]) {

			DFS(i, DFSadj, DFSvisited, component);
		}
	}
}