#include <bits/stdc++.h>
using namespace std;

void Bfs(vector<vector<int>> graph, int source)
{
    int n = graph.size();
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(source);
    visited[source] = true;
    while (!q.empty())
    {
        int w = q.front();
        q.pop();
        cout << w << " ";
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == false && graph[w][i] != 0)
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main()
{
    vector<vector<int>> graph = {
        {0, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 0}};

    int source = 0; // Starting node
    cout << "BFS Traversal: ";
    Bfs(graph, source);

    return 0;
}