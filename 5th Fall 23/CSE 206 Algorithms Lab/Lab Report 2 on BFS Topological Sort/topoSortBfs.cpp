//jahidulZaid
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'

const int MAX = 1e5+12;
vector<int> adj[MAX];
vector<int> inDegree(MAX, 0);

vector<int> TopologicalSort(int n) {
    vector<int> result; // Store the topological order.

    queue<int> q;

    // Initialize the queue with vertices having in-degree 0.
    for (int i = 1; i <= n; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        result.push_back(u);

        // Process adjacent vertices.
        for (int v : adj[u]) {
            inDegree[v]--;
            if (inDegree[v] == 0) {
                q.push(v);
            }
        }
    }

    return result;
}

int main() {

    int n, m;
    cout << "Enter the number of Node and Edges: ";
    cin >> n >> m;

    cout << "Enter the Edges (X Y):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        inDegree[v]++;
    }

    // Call for topological sort and get the result.
    vector<int> result = TopologicalSort(n);

    // Check if the graph is a DAG (no cycles).
    if (result.size() == n) {
        cout << "Topological Order: ";
        for (int vertex : result) {
            cout << vertex << " ";
        }
    } else {
        cout << "Error! The graph contains cycle." << endl;
    }

    return 0;
}
