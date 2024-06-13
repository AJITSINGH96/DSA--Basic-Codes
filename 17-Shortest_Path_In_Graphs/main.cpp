#include"Shortest_in_Graphs.h"
int main() {
	//int n;
	//cout << "Enter the no. of nodes : " << endl;
	//cin >> n;
	//int m;
	//cout << "Enter the no.of edges : " << endl;
	//cin >> m;
	//unordered_map<int, list<int>> adj;
	ShorttestPathInGraph g;
	//for (int i = 0; i < m; i++) {
	//	int u, v;
	//	cout << "enter the first node of edge " << i << " : ";
	//	cin >> u;
	//	cout << "enter the second node of edge " << i << " : ";
	//	cin >> v;
	//	g.CreateAdjList(u, v, 0, adj);
	//}
	//int src,dest;
	//cout << "enter the source node : ";
	//cin >> src;
	//cout << "enter the destination node : ";
	//cin >> dest;

	//unordered_map<int, bool> visited;
	//unordered_map<int, int> parent;
	//g.ShortestPathUsingBFS(adj, src, dest, visited, parent);
	//vector<int>ans;
	////set current node to destination and tract its parent untill you reach source node
	//int currentnode = dest;
	//ans.push_back(dest);
	//int count = 0;
	//while (currentnode != src) {
	//	currentnode = parent[currentnode];
	//	ans.push_back(currentnode);
	//	count++;
	//}
	//cout << endl;
	//cout << "no. of steps to reach destination from source = " << count+1;
	//reverse(ans.begin(), ans.end());
	//cout << endl;
	//cout << " shortest path is : ";
	//for (int i = 0; i < ans.size(); i++) {
	//	cout << ans[i] << " , ";
	//}

	unordered_map<int, list<pair<int, int>>>adjList;
	
	g.addedge(adjList, 0, 1, 5);
	g.addedge(adjList, 0, 2, 3);
	g.addedge(adjList, 1, 2, 2);
	g.addedge(adjList, 1, 3, 6);
	g.addedge(adjList, 2, 3, 7);
	g.addedge(adjList, 2, 4, 4);
	g.addedge(adjList, 2, 5, 2);
	g.addedge(adjList, 3, 4, -1);
	g.addedge(adjList, 4, 5, -2); 

	int n = 6;
	unordered_map<int, bool>visited;
	stack<int>s;
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			g.dfs(i, adjList, visited, s);
		}
	}
	int src = 1;
	vector<int>distance(n);
	for (int i = 0; i < n; i++) {
		distance[i] = INT_MAX;		
	}
	g.ShortestDistance(adjList, src, distance, s);
	for (int i = 0; i < distance.size(); i++) {
		cout << distance[i] << " , ";
	}


}