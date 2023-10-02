#include <iostream>
#include <algorithm>
#include <vector>
#include<queue>
using namespace std;
int main()
{
 int V;
 int  E;
 cout << "enter the Vertices of the Graph" << endl;
 cin >> V;
 cout << "enter the Edges of the Graph" << endl;
 cin >> E;
 vector<int>Adj(V);
 vector<int>in(V, 0);
 vector<int>out(V, 0);

 vector<int> ve(V, 0);
 for (int i = 0; i < E; i++)
 {
  cout << "Enter source and destinatiomn of edge" << i << " ";
  int a, b;
  cin >> a >> b;
  out[a]++;
  in[b]++;
 }

    for (int i = 0; i < V; i++) {
        cout << i << "\t" << out[i] << "\t" << in[i] << endl;
    }
}
