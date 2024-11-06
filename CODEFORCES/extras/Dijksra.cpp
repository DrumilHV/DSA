#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

void dijkstra(){
    int n, m;
    cin>>n>>m;
    vector<vector<ll>> adj[n+1];
    vector<long long> dist(n+1, LLONG_MAX);
    priority_queue< pair<ll, ll> , vector<pair<ll, ll> > , greater<pair<ll, ll>> > pq;
    vector<ll> parent(n+1,-1);
    pq.push({0,1});
    dist[1] = 0;
    for(ll i = 0; i < m; i++){
        ll u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({w,v});
        adj[v].push_back({w,u});
    }
    while(!pq.empty()){
        ll u = pq.top().second;
        ll w = pq.top().first;
        pq.pop() ;
        if(w > dist[u]) continue;

        for(auto &neighbour: adj[u]){
            ll v = neighbour[1];
            ll w = neighbour[0];
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u]+w;
                pq.push({dist[v], v});
                parent[v] = u;
            }

        }
    }
    if(dist[n]==LLONG_MAX){
        cout<<-1<<endl;
    }else{
        vector<ll> path;
        for(ll i = n;i!=-1; i = parent[i]){
            path.push_back(i);
        }
        reverse(path.begin(), path.end());
        for(ll i = 0;i<path.size();i++){
            cout<<path[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int t;
    // cin>>t;
    // while(t--){
        dijkstra();
    // }
    return 0;
}