#include<vector>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
DFS_Visit(vector<int> Adj[], vector<int>&status, int i){
 status[i] = 1;
 cout<<i<<" ";
 for(int j =0; j<Adj[i].size(); j++){
  if(status[Adj[i][j]]==0){
   DFS_Visit(Adj, status, Adj[i][j]);
  }
 }
}
void DFS(vector<int> Adj[], int N){
 vector<int>status(N,0);
 for(int i =0; i<N; i++){
  if(status[i]==0){
   DFS_Visit(Adj[i], status, i)
  }
 }
}