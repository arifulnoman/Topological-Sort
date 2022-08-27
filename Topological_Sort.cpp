#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100];
bool visited[100];
void dfs(int u)
{
    int i;
    visited[u] = true;
    for(i = 0;i < adj[u].size();i++)
    {
        int v = adj[u][i];
        if(visited[v] == false)
        {
            visited[v] = true;
            cout << "--->" << v;
            dfs(v);
        }
    }
}
void topological_sort(int vertex)
{
    int i;
    for(i = 0;i < vertex;i++)
    {
        if(visited[i] == false)
        {
            cout << i;
            dfs(i);
        }
    }
}
void initialize(int vertex)
{
    int i;
    for(i = 0;i < vertex;i++)
    {
        visited[i] = false;
    }
}
void get_edge(int edge)
{
    int i,u,v;
    for(i = 0;i < edge;i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
    }
}
int main()
{
    int vertex,edge,u,v;
    cout << "Number of vertexes: ";
    cin >> vertex;
    cout << "Number of edges: ";
    cin >> edge;
    get_edge(edge);
    initialize(vertex);
    topological_sort(vertex);
    return 0;
}