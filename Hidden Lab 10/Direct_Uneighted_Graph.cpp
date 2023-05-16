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

void DirectedUnweightedGraph::BFS()
{
    
}

void DirectedUnweightedGraph::printGraph()
{
    for(int i=0; i < numberOfVertices; i++)
    {
        cout<< i <<": ";
        for(int j = 0; j<adjacencyList.size(); j++)
        {
            cout<< adjacencyList[i][j]<<"   ";
        }
        cout<< endl;
    }
}
