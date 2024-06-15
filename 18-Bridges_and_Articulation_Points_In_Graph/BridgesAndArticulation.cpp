#include"Bridges_and_Articulation.h"
void BridgesAndArticulation::dfs(int node, int parent, int& timer, vector<int>& disc,vector<int>&low, vector<vector<int>>& result, unordered_map<int, list<int>>& adj, unordered_map<int, bool>& visited) {
	visited[node] = true;
	disc[node] = low[node] = timer++;
	for (auto neighbour : adj[node]) {
		if (neighbour == parent) {
			continue;
		}
		if (!visited[neighbour]) {
			dfs(neighbour, node, timer,disc, low, result, adj, visited);
			low[node] = min(low[node], low[neighbour]);
			//check if edge is a bridge

			if (low[neighbour] > disc[node]) {
				vector<int>ans;
				ans.push_back(node);
				ans.push_back(neighbour);
				result.push_back(ans);
			}
		}
		else {
			//back edge
			low[node] = min(low[node], low[neighbour]);
		}
	}



}

void BridgesAndArticulation::artidfs(int node, int parent, vector<int>& artidisc, vector<int>& artilow, unordered_map<int, bool>& artivis, unordered_map<int, list<int>>& artiadj, vector<int>& artipoints, int& artitimer)
{
	artivis[node] = true;
	artidisc[node] = artilow[node] = artitimer++;
	int child = 0;
	for (auto neighbour : artiadj[node]) {
		if (neighbour == parent) {
			continue;
		}
		if (!artivis[neighbour]) {
			artidfs(neighbour, node, artidisc, artilow, artivis, artiadj, artipoints, artitimer);
			artilow[node] = min(artilow[neighbour], artilow[node]);
			//check articulation point or not
			if (artilow[neighbour] >= artidisc[node] && parent != -1) {
				artipoints[node] = 1;				
			}
			child++;
		}
		else {
			artilow[node] = min(artilow[node], artilow[neighbour]);
		}
	}
	if (parent == -1 && child > 1) {
		artipoints[node] = 1;
	}
}
