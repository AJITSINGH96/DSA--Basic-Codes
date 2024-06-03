#include"Graphs.h"
int main() {
	int n;
	cout << "Enter the no. of nodes : " << endl;
	cin >> n;
	int m;
	cout << "Enter the no.of edges : " << endl;
	cin >> m;
	unordered_map<int, list<int>> adj;
	graph g;
	for (int i = 0; i < m; i++) {
		int u, v;
		cout << "enter the first node of edge " << i << " : ";
		cin >> u;
		cout << "enter the second node of edge " << i << " : ";
		cin >> v;
		g.CreateAdjList(u, v, 0, adj);
	}
	g.PrintAdjList(adj);
	unordered_map<int, bool>visited;
	vector<int>ans;
	//i<1, in case for disjoint graphs,having two components
	for (int i = 0; i < 1; i++) {
		if (!visited[i]) {
			g.BFS(adj, visited, ans, i);
		}
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i];
		cout << endl;
	}

	//DFS
	unordered_map<int, bool>DFSVisited;
	vector<vector<int>>DFSAns;
	for (int i = 0; i < 1; i++) {
		if (!DFSVisited[i]) {
			vector<int>component;
			g.DFS(i, adj, DFSVisited, component);
			DFSAns.push_back(component);
		}
	}
	for (const auto& vec : DFSAns) {
		// Iterate over each element in the current vector
		for (int val : vec) {
			cout << val << " ";
		}
		cout << endl; // Print newline after each vector
	}


	//cycle detection using BFS
	//cyclic detection using BFS
	int nodes;
	cout << "Enter the no. of nodes : " << endl;
	cin >> nodes;
	int edges;
	cout << "Enter the no.of edges : " << endl;
	cin >> edges;
	unordered_map<int, list<int>> adjcycle;

	for (int i = 0; i < edges; i++) {
		int u, v;
		cout << "enter the first node of edge " << i << " : ";
		cin >> u;
		cout << "enter the second node of edge " << i << " : ";
		cin >> v;
		g.CreateAdjList(u, v, 0, adjcycle);
	}
	g.PrintAdjList(adjcycle);
	unordered_map<int, bool>visitedcycle;
	for (int i = 0; i < 1; i++) {
		if (!visitedcycle[i]) {
			bool ans = g.IsCycleBFS(i, visitedcycle, adjcycle);
			if (ans == 1) {
				cout << "cycle is present";

			}
		}
		else {
			cout << "cycle is not present" << endl;
		}
		

	}


	cout << "lets try cycle Detection using DFS:" << endl;
	int parent = -1;
	for (int i = 0; i < 1; i++) {
		if (!visitedcycle[i]) {
			bool ans = g.IsCycleDFS(i, parent, visitedcycle, adjcycle);
			if (ans == 1) {
				cout << "cycle is present";

			}
		}
		else {
			cout << "cycle is not present" << endl;
		}

	}
	return 0;

}