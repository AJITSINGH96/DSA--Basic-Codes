#include"Graphs.h"
bool graph::IsCycleDFSInDirected(int node,  unordered_map<int, bool>& visited, unordered_map<int, bool>& dfspathvisited, unordered_map<int, list<int>>& adjcycle) 
{
	visited[node] = true;
	dfspathvisited[node] = true;
	for (auto neighbour : adjcycle[node]) 
	{
		if (!visited[neighbour])
		{
			bool cycledetect = IsCycleDFSInDirected(neighbour, visited, dfspathvisited, adjcycle);
			if (cycledetect) 
			{
				return true;
			}
		}
		else if (dfspathvisited[neighbour])
		{
			return true;
		}
	}
	dfspathvisited[node] = false;
	return false;
}
              /////////////****IMPORTANT****//////////////
			  
// :://Topological sort does not exist in a cyclic graph
// so if we want to check if there is a cycle in directed graph using BFS, just find the topologic sort using BFS, if we find a valid topological
//sort i.e no. of elements in topologic sort==no. of nodes, that means there is no cycle present,
//if(no. of elements in TOPOSORT using BFS !=no. of nodes)
//means there is a cycle present in the graph.
