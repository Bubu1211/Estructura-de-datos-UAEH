#include <iostream>
#include <bits/stdc++.h>

///Grafos con lista de adyacencia

///agregar una arista a un grafo no dirigidp
void addEdge(std::vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

///Imprimir la lista de adyacencia
void printGraph(std::vector<int> adj[], int V)
{
    for(int v = 0; v < V; v++)
    {
        std::cout<<v <<" = ";
        for(auto x : adj[v])
            std::cout<<x<<"-> ";

        std::cout<<std::endl;
    }
}
int main()
{
    int V = 5;
    std::vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printGraph(adj, V);

    return 0;
}
