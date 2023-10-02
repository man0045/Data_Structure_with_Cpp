#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    // vector<int>v;
    // cout<<v.size();
    // cout<<endl<<v.capacity();
    // v.push_back(5);
    // v.push_back(34);
    // v.push_back(12);
    // v.push_back(4);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // for(int i = 0;i<v.size(); i++){
    //     cout<<v[i]<< " ";
    // }
    // cout<<endl;
    
    // for(auto i : v){
    //     cout<<i<<" ";
    // }
    // vector<int>v(5,2);
    // for(int i =0; i<v.size();i++){
    //     cout<<v[i]<<" ";
    //     cout<<endl<<" size is "<< v.size();
    //     cout<<endl<<"the capacity is"<<v.capacity()<<endl;
    //     v.push_back(20);
    //     cout<<endl;
    //     for(int i =0; i<v.size(); i++){
    //         cout<<v[i]<<" ";
    //         cout<<endl;
    //         cout<<v.capacity()<<endl;
    //     }

    // }
    // vector<int>input;
    // int n;
    // cin>>n;
    // while(n--){
    //     int x;
    //     cin>>x;
    //     input.push_back(x);
    //     cout<<x<<" ";
    //     sort(x.begin(), x.end());

        
    // }
    // vector<int>v1;
    // vector<int>v2;
    // int x;
    // cout<<"enter the edge"<<endl;
    // cin >>x>> " ";
    // cout<<"enter the vertices"<<endl;
    // int k;
    // cin>>k>> " ";
    // cout<<"enter the enteries in edges<<"<<endl;
    // for(int i = 0; i<x; i++){
    //     int l;
    //     cin >>l;
    //     v1.push_back(l);
    // }
    // cout<<"enter the enteries in vertices"<<endl;
    // for(int j =0; j<k ; j++){
    //     int f;
    //     cin>>f;
    //     v2.push_back(f);
    // }
    // for(auto i : v1){
    //    cout<<i<<" ";
    // }
    // for(auto j : v2){
    //     cout<<j<<endl;
    // }

    
    // vector<int>input[6];
    // input[0].push_back(10);
    // input[0].push_back(40);
    // input[1].push_back(20);
    // input[1].push_back(50);
    // input[1].push_back(44);
    // input[2].push_back(22);
    // input[3].push_back(14);
    // input[4].push_back(55);
    // input[5].push_back(66);

    // for(int i =0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     input.push_back(x);
    // }
    // // sort(input.begin(), input.end());
    // reverse(input.begin(), input.end());
    // for(auto i: input){
    //     cout<<i<<endl;
    // // }
    // for(int i =0; i<=5; i++){
    //     cout<<i<<endl;
    //     for(int j = 0; j<input[i].size(); j++){
    //         cout<<input[i][j]<<" ";

    //     }
    //     cout<<endl;
    // }
    // int v, e,a,b;
    // cin>>v>>e;
    // vector<int>v1[5];
    // for(int i =1; i<=e;i++){
    //     cout<<"edge"<<i<<" : ";
    //     cin>>a>>b;
    //     v1[a].push_back(b);
    //     v1[b].push_back(a);
    // }
    // cout<<"source\t:\t:destination"<<endl;
    // for(int i =0; i<v; i++){
    //     cout<<i<<"\t:\t";
    //     for(auto j : v1[i]){
    //         cout<<j<<" , "<<endl;
        
    //     }
    //     cout<<endl;
    // }

    // queue<int>MyQ;
    // cout<<endl<<"size:"<<MyQ.size();
    // cout<<endl;
    // MyQ.push(1);
    // MyQ.push(2);
    // MyQ.push(3);
    // MyQ.push(4);
    // MyQ.push(5);
    // MyQ.push(6);
    // MyQ.push(10);
    // cout<<endl;
    // while(!MyQ.empty())
    // {
    //     MyQ.pop();
    //     cout<<MyQ.front();
    //     cout<<endl;

    // }


    queue<int>q1;
    queue<int>q2;
    cout<<endl<<"size"<<q1.size()<<endl<<q2.size()<<endl;
    cout<<endl;


    q1.push(2);
    q1.push(4);
    q1.push(6);
    q1.push(7);
    q1.push(3);
    q1.push(1);
    q1.push(8);
    q1.push(9);
    
    q2.push(11);
    q2.push(82);
    q2.push(19);

   q2.swap(q1);

   q1.swap(q2);
   cout<<"q2";
   while(!q2.empty()){
    cout<<endl<<q2.front();
    // cout<<endl<<q1.front();
    cout<<endl;
    q2.pop();
   }
   cout<<"All the content of q1 is going to moved out at q2"<<endl;
   while(!q1.empty()){
    cout<<endl<<q1.front();
    // cout<<endl<<q1.front();
    cout<<endl;
    q1.pop();
   }


}