#include <bits/stdc++.h>
using namespace std;
void bft(vector<vector<int>> graph, int source)
{
    queue<int> q;
    vector<bool> visited(graph.size(), false);
    q.push(source);
    visited[source] = true;
    while (!q.empty())
    {
        int val = q.front();
        q.pop();
        cout << val << " ";
        for (int i = 0; i < graph.size(); i++)
        {
            if (visited[i] == false && graph[val][i] != 0)
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
    bft(graph, source);
    return 0;
}