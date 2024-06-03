#include"Graphs.h"
bool graph::IsCycleBFS(int src, unordered_map<int, bool>& visitedcycle, unordered_map<int, list<int>>& adjcycle) {
	unordered_map<int, int>parent;
	parent[src] = -1;
	visitedcycle[src] = 1;
	queue<int>q;
	q.push(src);
	while (!q.empty()) {
		int front = q.front();
		q.pop();
		for (auto neighbour : adjcycle[front]) {
			if (visitedcycle[neighbour] == true && neighbour != parent[front]) {
				return true;
			}
			else if (!visitedcycle[neighbour]) {
				q.push(neighbour);
				visitedcycle[neighbour] = 1;
				parent[neighbour] = front;
			}
		}
	}
	return false;
}

bool graph::IsCycleDFS(int node, int parent, unordered_map<int, bool>& visitedcycle, unordered_map<int, list<int>>& adjcycle)
{
	visitedcycle[node] = true;
	for (auto neighbour : adjcycle[node]) {
		if (!visitedcycle[neighbour]) {
			bool cycledetected = IsCycleDFS(neighbour, node, visitedcycle, adjcycle);
			if (cycledetected) {
				return true;
			}
			else if (neighbour != parent) {
				return true;
			}
		}
	}
	return false;
}
