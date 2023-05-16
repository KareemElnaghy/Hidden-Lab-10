//
//  DirectedUnweightedGraph.h
//  Hidden Lab 10
//
//  Created by Kareem Elnaghy on 5/16/23.
//

#ifndef DirectedUnweightedGraph_h
#define DirectedUnweightedGraph_h
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

struct Edge
{
    int source;
    int destination;
};

class DirectedUnweightedGraph
{
private:
    int numberOfVertices;
    vector<vector<int>> adjacencyList;
    void DFSRec(int vertex, vector<bool>& visited);
public:
    DirectedUnweightedGraph(int count);
    void addEdge(Edge edge);
    void BFS(); // Breadth First Search
    void DFS(); // Depth First Search
    void printGraph();
};

#endif /* DirectedUnweightedGraph_h */
