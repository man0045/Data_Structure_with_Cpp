#include<bits/stdc++.h>
#include<iostream>

using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007
int32_t main(){
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t =1;
 cin>>t;
 while(t--){
  int n, a, b;
  cin>>n>>a>>b;
  int cure[n*n], dull[n*n], emp[n], FULL=INT_MAX;
  for(int i =0; i<(n*n); i++){
   cin>>cure[i];
   emp[i]=0;
  }
  sort(cure, cure+(n*n));
  FULL=cure[0];
  int fearless=0;
  for(int i = 0; i<n; i++){
   emp[i] = (FULL+(i*b));
  }
  for(int i=0; i<n; i++){
   for(int j =0; j<n; j++){
    dull[i*n+(j)]=(emp[i]+(a*j));
   }
  }
  sort(dull, dull+(n*n));
  for(int i =0; i<(n*n); i++){
   if(cure[i]!=dull[i]){
    fearless=1;
    break;
   }
  }
  if(fearless==0){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"No"<<endl;
  }
 }
 return 0;
}