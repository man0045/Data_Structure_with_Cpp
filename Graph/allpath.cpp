#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>

using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int> > result;

int v;
void add_edges(int src, int dest, bool bi_dir = true){
 graph[src].push_back(dest);
 if(bi_dir){
  graph[dest].push_back(src);
 }
}

void dfs(int curr, int end, vector<int> &paths){
 if(curr == end){
  paths.push_back(curr);
  result.push_back(paths);
  paths.pop_back();
  return;
 }
 visited.insert(curr);
 paths.push_back(curr);
 for(auto neighbour:graph[curr]){
  if(!visited.count(neighbour)){
     dfs(neighbour, end, paths);
  }
 }
 paths.pop_back();
 visited.erase(curr);
 return;
}
void allpath(int src, int dest){
 vector<int> v;
 dfs(src, dest, v);
}

int main(){
 cin>>v;
 graph.resize(v, list<int> ());
 int e;
 cin>>e;
 visited.clear();
 while(e--){
  int s, d;
  cin>>s>>d;
  add_edges(s, d);
 }
 int x, y;
 cin>>x>>y;
 allpath(x,y);
 for(auto paths: result){
  for(auto el : paths){
   cout<<el<<" ";
  }
  cout<<"\n";
 }

 return 0;
}