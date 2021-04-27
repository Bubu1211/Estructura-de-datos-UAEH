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

///recorrido por anchura
void BFS(std::vector<int> adj[], int V, int v)
{
    std::queue<int> cola;
    std::vector<bool> visited(V, false);
    std::vector<int>::iterator it;
    visited[v] = true;
    cola.push(v);

    while(!cola.empty()){
        int w = cola.front();
        cola.pop();
        std::cout <<w<< " ";
        for (it = adj[w].begin(); it != adj[w].end(); it++){
            if (!visited[*it]){
                visited[*it] = true;
                cola.push(*it);
            }
        }
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

     BFS(adj,V,0); std::cout << std::endl;

    BFS(adj,V,1); std::cout << std::endl;

    BFS(adj,V,2); std::cout << std::endl;

    BFS(adj,V,3); std::cout << std::endl;

    BFS(adj,V,4); std::cout << std::endl;

    return 0;
}
