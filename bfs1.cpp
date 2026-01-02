#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>>&adj,int V,int s){
   vector<string>color(V,"white");
   vector<int> d(V,INT_MAX);
   vector<int>pred(V,-1);

   color[s]="gray";
   d[s]=0;
   queue<int>q;
   q.push(s);

   while(!q.empty()){
   
    int u=q.front();
    q.pop();
    
    for(int v:adj[u]){
        if(color[v]== "white"){
            color[v]="gray";
            d[v]=d[u]+1;
            pred[v]=u;
            q.push(v);
        }

    }
    color[u]="black";
}
cout<<"vertex,distance,predecessor\n";
for(int i=0;i<V;i++){
    cout<<i<<"\t"<<(d[i] == INT_MAX?"INF":to_string(d[i]))<<"\t"
    <<(pred[i]==-1?"NULL":to_string(pred[i]))<<"\n";
}
}
int main(){

int V,E;
cout<<"enter the vertex and Edge value: ";
cin>>V>>E;
vector<vector<int>>adj(V);
cout<<"enter edges u and v:";
for(int i=0;i<E;i++){
   int u,v;
   cin>>u>>v;
   adj[u].push_back(v);

}
int source;
cout<<"enter source vertex:";
cin>>source;
bfs(adj,V,source);
}
