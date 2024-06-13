#include"Shortest_in_Graphs.h"


void ShorttestPathInGraph::ShortestPathUsingBFS(unordered_map<int, list<int>>& adj, int src, int destination, unordered_map<int, bool>& visited, unordered_map<int, int>& parent) {
	queue<int>q;
	q.push(src);
	parent[src] = -1;
	visited[src] = true;
	while (!q.empty()) {
		int front = q.front();
		q.pop();
		for (int neighbour : adj[front]) {
			if (!visited[neighbour]) {
				visited[neighbour] = true;
				parent[neighbour] = front;
				q.push(neighbour);
			}
		}
	}
}

void ShorttestPathInGraph:: dfs(int node, unordered_map<int, list<pair<int, int>>>&adjList, unordered_map<int, bool>& vis, stack<int>& topo) {
	vis[node] = true;
	for (auto neighbour : adjList[node]) {
		if (!vis[neighbour.first]) {
			dfs(neighbour.first, adjList, vis, topo);
		}
	}
	topo.push(node);
}
void ShorttestPathInGraph::ShortestDistance(unordered_map<int, list<pair<int, int>>>&adjListint,int src, vector<int>& distance, stack<int>& s) {
	distance[src] = 0;
	while (!s.empty()) {
		int top = s.top();
		s.pop();
		if (distance[top] != INT_MAX) {
			for (auto i : adjListint[top]) {
				if (distance[top] + i.second < distance[i.first]) {
					distance[i.first] = distance[top] + i.second;
				}
			}
		}
	}
}