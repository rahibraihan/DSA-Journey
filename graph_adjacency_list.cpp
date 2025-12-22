#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int>mat[],int i,int j){
    mat[i].push_back(j);
    mat[j].push_back(i);
}
void display(vector<int>mat[],int v){
    for(int i=0;i<v;i++){
        cout<<"Node "<<i<<" : ";
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int v=4;
    vector<int>adjancy_list[v];
    addedge(adjancy_list,0,1);
    addedge(adjancy_list,0,2);
    addedge(adjancy_list,1,2);
    addedge(adjancy_list,2,3);
    cout << " Adjacency List Representation: "<<endl;
    display(adjancy_list,v);
}