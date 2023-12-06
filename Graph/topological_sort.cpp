#include<bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
int v;
void add_edge(int a, int b, bool bidir = true){
 graph[a].push_back(b);
 if(bidir){
  graph[b].push_back(a);
 }
}
void topoBfs(){
 vector<int> indegree(v,0);
 for(int i = 0; i<v; i++){
  for(auto neighbour : graph[i]){
   indegree[neighbour]++;
  }
 }
 queue<int> qu;
 unordered_set<int> vis;
 for(int i = 0; i<v; i++){
  if(indegree[i] == 0){
   qu.push(i);
   vis.insert(i);
  }
 }
 while(!qu.empty()){
  int node = qu.front();
  cout<<node<<" ";
  qu.pop();
  for(auto neighbour : graph[node]){
   if(!vis.count(neighbour)){
    indegree[neighbour]--;
    if(indegree[neighbour] == 0){
     qu.push(neighbour);
     vis.insert(neighbour);
    }
   }
  }
 }
}
int main(){
 cin>>v;
 int e;
 cin>>e;
 graph.resize(v,list<int>());
 while(e--){
  int x, y;
  cin>>x>>y;
  add_edge(x,y,false);
 }
 topoBfs();
 return 0;
}