#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int minimum(vector<int>&a, int idx, int &mini){
 if(idx == a.size()) return mini;
 mini = min(mini,a[idx]);

 return minimum(a,idx+1,mini);

}

int main(){
 int n;
 cin>>n;
 vector<int>a(n);
 for(int i =0; i<n; i++)cin>>a[i];

 int mini = 1234567;
 cout<<minimum(a,0,mini);
}