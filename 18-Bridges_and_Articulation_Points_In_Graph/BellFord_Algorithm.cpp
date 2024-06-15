//BellFord algorithm is used to find the shortest distance between source and destination.-->useful in case we have -ive weights.Except that there should
// not exist any -ive cycle in the graph.
//Dijkstra's algorithm is also used to find the shortest distance between source and destination but in case of -ive weights, it gives wrong results.

#include"Bridges_and_Articulation.h"
vector<int> BridgesAndArticulation::DijkstrasShortestPath(unordered_map<int,list<pair<int,int>>>adj,int n, int m, int src) {
	vector<int>dist(n);
	for (int i = 0; i < n; i++) {
		dist[i] = INT_MAX;
	}
	set < pair<int, int>>st;
	dist[src] = 0;
	st.insert(make_pair(0, src));
	while (!st.empty()) {
		//fetch top record
		auto top = *(st.begin());
		int nodeDistance = top.first;
		int topNode = top.second;
		//remove top record
		st.erase(st.begin());
		//traverse on neighbour
		for (auto neighbour : adj[topNode]) {
			if (nodeDistance + neighbour.second < dist[neighbour.first]) {
				auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));//set always find the minimum value
				//if record found
				if (record != st.end()) {
					st.erase(record);
				}
				dist[neighbour.first] = nodeDistance + neighbour.second;
				st.insert(make_pair(dist[neighbour.first], neighbour.first));
			}
			
		}
	}
	return dist;

}
//in bellmenfor algorith,
//just apply the same formula that is if (dist[u] + wt < dist[v]) {
//	dist[v] = dist[u] + wt;
//}
//apply the above formula for (n-1)times.you will get the answer, if it is mentioned in the question that there is no cycle present.
//apply the same formula one more time, if the dist[] array gets updated that means a -iev cycle is presnt and we can not find the solution vis. this method.