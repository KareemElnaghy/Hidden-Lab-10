#include <iostream>
#include <fstream>
#include <vector>
#include "DirectedUnweightedGraph.h"

using namespace std;

int main()
{
    ifstream iFile("Board.txt");

    vector<vector<int>> board(10, vector<int>(10));
    int numberOfVertices = 0;
    int value;

    // Count the number of vertices
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            iFile >> value;
            board[i][j] = value;
            if (value != -1)
            {
                numberOfVertices++;
            }
        }
    }
    
    iFile.close();
//    cout<<endl;
//
//    for(int i = 0; i<10; i++)
//    {
//        for(int j = 0; j<10; j++)
//        {
//            cout<<board[i][j]<<"   ";
//        }
//        cout<<endl;
//    }
//
//
//    cout<<endl;
    DirectedUnweightedGraph graph(numberOfVertices);

   
    int currentVertex = 0;
    int i;
    int j;
    
    for(i = 0; i<10; i++)
    {
        for(j = 0; j< 10; j ++)
        {
            if (board[i][j] != -1)
                {
                    // Check right neighbor
                    if (board[i][j+1] != -1)
                    {
                    graph.addEdge({currentVertex, board[i][j+1]});
                    
                        
                    }
                   //check left
                    
                    if (board[i][j-1] != -1)
                    {
                        graph.addEdge({currentVertex, board[i][j-1]});
                        
                    }
                    
                    //check top
                    if (board[i-1][j] != -1)
                    {
                            graph.addEdge({currentVertex, board[i-1][j]});
                        
                    }

                    // Check bottom neighbor
                    
                    if (board[i+1][j] != -1)
                    {
                        graph.addEdge({currentVertex, board[i+1][j]});
                    }

                    currentVertex++;
                }
             

            
        }
    }
   

    cout << "Graph: " << endl;
    graph.printGraph();
    
    cout<<endl<<"BFS: ";
    graph.BFS();

    return 0;
}
