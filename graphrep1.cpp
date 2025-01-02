#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:
    int numVertices;
    vector<vector<int>> adjList;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjList.resize(vertices);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // For undirected graph
    }

    void display() {
        for (int i = 0; i < numVertices; i++) {
            cout << i << " -> ";
            for (int j : adjList[i])
                cout << j << " ";
            cout << endl;
        }
        
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Adjacency List:" << endl;
    g.display();

    return 0;
}
