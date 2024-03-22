// @JahidulZaid
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'


bool isCyclic(vector<vector<int>>& adjList, int vertices) {
    vector<bool> visited(vertices, false);
    vector<int> parent(vertices, -1);

    for (int i = 0; i < vertices; ++i) {
        if (!visited[i]) {
            queue<int> q;
            q.push(i);
            visited[i] = true;

            while (!q.empty()) {
                int current = q.front();
                q.pop();

                for (int neighbor : adjList[current]) {
                    if (!visited[neighbor]) {
                        visited[neighbor] = true;
                        q.push(neighbor);
                        parent[neighbor] = current;
                    } else if (parent[current] != neighbor) {
                        // If the neighbor is visited and not the parent, a cycle is detected.
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edges;

    vector<vector<int>> adjList(vertices);

    cout << "Enter the edges (vertex pairs):" << endl;
    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    if (isCyclic(adjList, vertices)) {
        cout << "Cycle detected in the graph." << endl;
    } else {
        cout << "No cycle detected in the graph." << endl;
    }

    return 0;
}
