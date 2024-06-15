#include"Bridges_and_Articulation.h"
int main() {
	int n;
	//cout << "Enter the no. of nodes : " << endl;
	//cin >> n;
	int m;
	//cout << "Enter the no.of edges : " << endl;
	//cin >> m;
	//unordered_map<int, list<int>> adj;
	BridgesAndArticulation g;
	//for (int i = 0; i < m; i++) {
	//	int u, v;
	//	cout << "enter the first node of edge " << i << " : ";
	//	cin >> u;
	//	cout << "enter the second node of edge " << i << " : ";
	//	cin >> v;
	//	g.CreateAdjList(u, v, 0, adj);
	//}
	//int timer = 0;
	//vector<int>discovery(n + 1);
	//vector<int>low(n + 1);///low-->loweat possible time
	//int parent = -1;
	//unordered_map<int, bool>vis;
	//for (int i = 0; i < n; i++) {
	//	discovery[i] = -1;
	//	low[i] = -1;
	//}
	//vector<vector<int>>result;
	//for (int i = 0; i < n; i++) {
	//	if (!vis[i]) {
	//		g.dfs(i, parent, timer, discovery, low, result, adj, vis);
	//	}
	//}
	//cout << "bridges are : ";
	//for (auto i : result) {		
	//	for (auto j : i) {
	//		cout << j << ",";
	//	}
	//	cout << endl;
	//}

	//cout << "let us find now articulation points, lets create a new graph:"<<endl;
	//cout << "Enter the no. of nodes : " << endl;
	//cin >> n;
	//cout << "Enter the no.of edges : " << endl;
	//cin >> m;
	//unordered_map<int, list<int>> artiadj;
	//BridgesAndArticulation g;
	//for (int i = 0; i < m; i++) {
	//	int u, v;
	//	cout << "enter the first node of edge " << i << " : ";
	//	cin >> u;
	//	cout << "enter the second node of edge " << i << " : ";
	//	cin >> v;
	//	g.CreateAdjList(u, v, 0, artiadj);
	//}
	//int artitimer = 0;
	//vector<int>artidisc(n);
	//vector<int>artilow(n);
	//unordered_map<int, bool>artivis;
	//vector<int>artipoints(n, 0);
	//for (int i = 0; i < n; i++) {
	//	artidisc[i] = -1;
	//	artilow[i] = -1;
	//}
	////artidfs
	//for (int i = 0; i < n; i++) {
	//	if (!artivis[i]) {
	//		g.artidfs(i, -1, artidisc, artilow, artivis,artiadj, artipoints, artitimer);
	//	}                                                                                                                                                                                                                                                                                               
	//}
	////print articulation points
	//cout << "Articulation Points are as follow : " << endl;
	//for (int i = 0; i < n; i++) {
	//	if (artipoints[i] != 0) {
	//		cout << i << " ";
	//	}
	//}
	//cout << endl;

	//cout << endl;
	//cout << "let us try to find the strongly connected components in a graph. "<<endl;
	//cout << "Lets create a new graph ." << endl;
	//cout << "let us find now articulation points, lets create a new graph:" << endl;
	//cout << "Enter the no. of nodes : " << endl;
	//cin >> n;
	//cout << "Enter the no.of edges : " << endl;
	//cin >> m;
	//unordered_map<int, list<int>> Kosaraju_adj;
	//for (int i = 0; i < m; i++) {
	//	int u, v;
	//	cout << "enter the first node of edge " << i << " : ";
	//	cin >> u;
	//	cout << "enter the second node of edge " << i << " : ";
	//	cin >> v;
	//	g.CreateAdjList(u, v, 0, Kosaraju_adj);
	//}
	////lets do topological sort
	//stack<int>s;
	//unordered_map<int, bool>Kosa_vis;
	//for (int i = 0; i < n; i++) {
	//	if (!Kosa_vis[i]) {
	//		g.kosa_dfs(i, Kosa_vis, s, Kosaraju_adj);
	//	}
	//}
	////Create a transpose graph
	//unordered_map<int, list<int>>transpose;
	//for (int i = 0; i < n; i++) {
	//	Kosa_vis[i] = 0;
	//	for (auto nbr : Kosaraju_adj[i]) {
	//		transpose[nbr].push_back(i);
	//	}
	//}
	//int count = 0;
	////do dfs on above transposed graph
	//while (!s.empty()) {
	//	int top = s.top();
	//	s.pop();
	//	if (!Kosa_vis[top]) {
	//		count++;
	//		g.transdfs(top, Kosa_vis, transpose);
	//	}
	//}
	//cout << "no. of strongly connected components :" << count;

	//cout << endl;
	cout << "let us try to find the shortest path using Dijkstra's algorithm in a graph. " << endl;
	cout << "Lets create a new graph ." << endl;
	cout << "Enter the no. of nodes : " << endl;
	cin >> n;
	cout << "Enter the no.of edges : " << endl;
	cin >> m;
	unordered_map<int, list<pair<int, int>>> adj;
	g.addedge(adj, 1, 0, 5,1);
	g.addedge(adj, 0, 2, 8,1);
	g.addedge(adj, 1, 2, 9,1);
	g.addedge(adj, 1, 3, 2,1);
	g.addedge(adj, 3, 2, 6,1);
	vector<int>shortestpath=g.DijkstrasShortestPath(adj, n, m, 0);
	for (int i = 0; i < shortestpath.size(); i++) {
		cout << shortestpath[i] << " , ";
	}

}
