#include <iostream>

using namespace std;

// Maximum number of vertices
const int MAX_VERTICES = 5;

// Structure for a node in the graph
struct Node {
    int data; // Data associated with the node
    // Add more data fields as needed
};

// Graph class
class Graph {
private:
    int V; // Number of vertices
    Node nodes[MAX_VERTICES]; // Array to store nodes
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES]; // Adjacency matrix representation

public:
    // Constructor
    Graph(int vertices) : V(vertices) {
        // Initialize the adjacency matrix with zeros
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                adjacencyMatrix[i][j] = 0;
            }
        }
        // Initialize nodes array with default data (-1)
        for (int i = 0; i < V; ++i) {
            nodes[i].data = -1; // Initialize with default data
        }
    }

    // Add a directed edge from u to v
    void addEdge(int u, int v) {
        adjacencyMatrix[u][v] = 1; // Set edge from u to v
    }

    // Set data for a node
    void setNodeData(int index, int newData) {
        if (index >= 0 && index < V) {
            nodes[index].data = newData;
        }
    }

    // Print the graph
    void printGraph() {
        for (int i = 0; i < V; ++i) {
            cout << "Node " << i << " data: " << nodes[i].data << endl;
            cout << "Adjacency list of vertex " << i << ": ";
            for (int j = 0; j < V; ++j) {
                if (adjacencyMatrix[i][j] == 1) {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph graph(5);

    // Set data for nodes
    graph.setNodeData(0, 100);
    graph.setNodeData(1, 200);
    graph.setNodeData(2, 300);
    graph.setNodeData(3, 400);
    graph.setNodeData(4, 500);

    // Add directed edges to the graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    // Print the graph
    graph.printGraph();

    return 0;
}
