#include<iostream>
#include<list>
#include<map>


using namespace std;
class Graph {
    void DFSUntill(int v);
    public:
    map<int ,bool> visited;
    map<int, list<int>> adj;
    void addEdge(int v, int w);
    void DFS();
};
void Graph::addEdge(int v, int w){
    //push v to behind
    adj[v].push_back(w);
    //if we comment the next line it becomes a directed graph, now its undirected graph
    adj[w].push_back(v);

}
void Graph::DFSUntill(int v){
    
}
