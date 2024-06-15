//kosaraju's algorithm is used to find the strongly connected components in a graph.
//strongly connected components-->A component of a graph in which you start from any node, you can reach to any other node in that component of the graph.

#include"Bridges_and_Articulation.h"
void BridgesAndArticulation::kosa_dfs(int node, unordered_map<int, bool>& vis, stack<int>& s, unordered_map<int, list<int>>& adj) {
	vis[node] = true;
	for (auto nbr : adj[node]) {
		if (!vis[nbr]) {
			kosa_dfs(nbr, vis, s, adj);
		}
	}
	s.push(node);

}

void BridgesAndArticulation::transdfs(int node, unordered_map<int, bool>& vis, unordered_map<int, list<int>>& adj) {
	vis[node] = true;
	for (auto nbr : adj[node]) {
		if (!vis[nbr]) {
			transdfs(nbr, vis, adj);
		}
	}
}