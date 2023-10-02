#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int sumOfArray(vector<int>&a, int idx){
 if(idx == a.size() - 1) return a[idx];

 return a[idx] + sumOfArray(a,idx+1);

}

int main(){
 int n;
 cin>>n;
 vector<int>a(n);
 for(int i =0; i<n; i++)cin>>a[i];
 cout<<sumOfArray(a,0);
}