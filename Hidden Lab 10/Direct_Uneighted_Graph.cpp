//
//  Direct_Uneighted_Graph.cpp
//  Hidden Lab 10
//
//  Created by Kareem Elnaghy on 5/16/23.
//

#include <stdio.h>
#include "DirectedUnweightedGraph.h"


DirectedUnweightedGraph::DirectedUnweightedGraph(int count)
{
    numberOfVertices = count;
    adjacencyList.resize(numberOfVertices);
}

void DirectedUnweightedGraph::addEdge(Edge edge)
{
    adjacencyList[edge.source].push_back(edge.destination);
}

void DirectedUnweightedGraph::printGraph()
{
    for (int i = 0; i < numberOfVertices; i++)
    {
        cout << i << " -> ";
        for (int x : adjacencyList[i])
        {
            cout << x << " -> ";
        }
        cout << endl;
    }
}

void DirectedUnweightedGraph::DFSRec(int vertex, vector<bool>& visited)
{
    visited[vertex] = true;
    cout << vertex << " ";

    for (int neighbor : adjacencyList[vertex])
    {
        if (!visited[neighbor])
        {
            DFSRec(neighbor, visited);
        }
    }
}

void DirectedUnweightedGraph::DFS()
{
    vector<bool> visited(numberOfVertices, false);
    for (int i = 0; i < numberOfVertices; i++)
    {
        if (!visited[i])
        {
            DFSRec(i, visited);
        }
    }
}

void DirectedUnweightedGraph::BFS()
{
    vector<bool> visited(numberOfVertices, false);
    queue<int> q;

    visited[0] = true;
    q.push(0);

    while (!q.empty())
    {
        int vertex = q.front();
        q.pop();
        cout << vertex << " ";

        for (int neighbor : adjacencyList[vertex])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}
