#include <iostream>
#include <vector>
using namespace std;

vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
    // Distance from source to all other vertices initialized as "infinity"
    vector<int> dist(V + 1, 1e8);  // Use V+1 to handle 1-based indexing
    dist[src] = 0;

    // Relax edges (V - 1) times
    for (int i = 0; i < V - 1; i++) {
        for (auto& edge : edges) {
            int u = edge[0], v = edge[1], wt = edge[2];
            if (dist[u] != 1e8 && dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // Check for negative-weight cycle
    for (auto& edge : edges) {
        int u = edge[0], v = edge[1], wt = edge[2];
        if (dist[u] != 1e8 && dist[u] + wt < dist[v]) {
            return {-1};  // Negative cycle detected
        }
    }

    return dist;
}

int main() {
    int V = 5;  // Number of vertices (1-based indexing)
    vector<vector<int>> edges = {
        {1, 2, 3}, {1, 5, -4}, {5, 4, 6}, {4, 1, 2}, {2, 5, 7}, 
        {2, 4, 1}, {1, 3, 8}, {3, 2, 4}, {4, 3, -5}
    };

    int src = 1;  // Source node
    vector<int> ans = bellmanFord(V, edges, src);

    if (ans[0] == -1) {
        cout << "Negative weight cycle detected.\n";
    } else {
        for (int i = 1; i <= V; i++) {  // Print distances (1-based index)
            cout << "Shortest distance from " << src << " to " << i << " is " << ans[i] << "\n";
        }
    }

    return 0;
}
