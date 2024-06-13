#include"Graphs.h"

//Topological sort does not exist in a cyclic graph
vector<int> graph::TopologicalSortusingBFS(unordered_map<int, list<int>>& Topoadj, int v, int edge) {
	//IT IS ALSO KNOWN AS KAHN'S ALGORITHM
	//find all indegree
	vector<int>indegree(v+1);
	for (auto i : Topoadj) {
		{
			for (auto j : i.second) {
				indegree[j]++;
			}
		}
	}
	//push all nodes with 0-indegree in queue
	queue<int>q;
	for (int i = 0; i < v; i++) {
		if (indegree[i] == 0) {
			q.push(i);
		}
	}
	//Do BFS
	vector<int>ans;
	while (!q.empty()) {
		int front = q.front();
		q.pop();
		ans.push_back(front);
		//neightbour indegree update
		for (auto neighbour : Topoadj[front]) {
			indegree[neighbour]--;
			if (indegree[neighbour] == 0) {
				q.push(neighbour);
			}
		}
	}
	return ans;
}

void graph::ToposortDFS(int node, unordered_map<int, bool>& visited, stack<int>& s, unordered_map<int, list<int>>& adj) {
	visited[node] = 1;
	for (auto neighbour : adj[node]) {
		if (!visited[neighbour]) {
			ToposortDFS(neighbour, visited, s, adj);
		}
	}
	s.push(node);

}