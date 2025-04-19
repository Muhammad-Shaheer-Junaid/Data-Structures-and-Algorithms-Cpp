#include <iostream>
#include <vector>
using namespace std;

class Graph{
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printGraph(){  // { {1,4}, {0,2}, {1,3}, {2,4}, {0,3} }
        for(int i = 0; i < V; i++){
            cout << i << " -> ";
            for(int j :  adj[i]){
                cout << j << " ";
            }
            cout << endl;
        }
    }
};



int main() {
    Graph g(5); // { {1,4}, {0,2}, {1,3}, {2,4},  {0,3} }
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.printGraph();
}