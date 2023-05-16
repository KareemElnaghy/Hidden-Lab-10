//
//  main.cpp
//  Hidden Lab 10
//
//  Created by Kareem Elnaghy on 5/16/23.
//
#include <fstream>
#include "DirectedUnweightedGraph.h"

int main() {
//    cout << "Graph 1:" << endl;
//    DirectedUnweightedGraph graph(6);
//    graph.addEdge({ 0, 1 });
//    graph.addEdge({ 0, 2 });
//    graph.addEdge({ 1, 2 });
//    graph.addEdge({ 1, 3 });
//    graph.addEdge({ 1, 4 });
//    graph.addEdge({ 2, 4 });
//    graph.addEdge({ 3, 5 });
//    graph.addEdge({ 4, 3 });
//    graph.addEdge({ 4, 5 });
//
//    graph.printGraph();
//    cout << "BFS: ";
//    graph.BFS();
//    cout << endl;
//    cout << "DFS: ";
//    graph.DFS();
//    cout << endl;

//    cout << "Graph 2:" << endl;
//    DirectedUnweightedGraph graph2(7);
//    graph2.addEdge({ 0, 1 });
//    graph2.addEdge({ 0, 2 });
//    graph2.addEdge({ 1, 2 });
//    graph2.addEdge({ 1, 3 });
//    graph2.addEdge({ 1, 4 });
//    graph2.addEdge({ 2, 4 });
//    graph2.addEdge({ 3, 5 });
//    graph2.addEdge({ 4, 3 });
//    graph2.addEdge({ 4, 5 });
//    graph2.addEdge({ 6, 0 });
//    cout << "BFS: ";
//    graph2.BFS();
//    cout << endl;
//    cout << "DFS: ";
//    graph2.DFS();
//    cout << endl;
    ifstream iFile;
    iFile.open("Board.txt");
    int vertices;

    iFile >> vertices;

    DirectedUnweightedGraph pacGraph(vertices);
    for(int i = 0; i<vertices; i++)
    {
        for(int j = 0; j<vertices; j++)
        {
            int weight;
            iFile >> weight;
            if(weight>=0)
            {
                pacGraph.addEdge({i,j});
            }
        }
    }
    
    pacGraph.printGraph();
    
    
    return 0;
}
