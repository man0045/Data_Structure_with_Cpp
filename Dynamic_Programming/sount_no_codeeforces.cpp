#include<iostream>
#include<vector>
#include<cstring>
#define ll long long int
#define ld long double
using namespace std;

ld dp[102][103][103];

int fp(int p, int q, int r){
 if(p ==0 or q==0) return 0.0;
 if(r == 0) return 1;
 if(dp[p][q][r] >=-0.9) return dp[p][q][r];
 ld total = p*q + q*r + r*p;
 ld ps = p*q;

 ld sum = 0;

 sum += fp(p-1,q,r)*(total/ps);
 sum += fp(p,q-1,r)*(total/ps);
 sum += fp(p,q,r-1)*(total/ps);

 return dp[p][q][r] = sum;

}
int fr(int p, int q, int r){
 if(p ==0 or r==0) return 0;
 if(q == 0) return 1;
 if(dp[p][q][r] >=-0.9) return dp[p][q][r];
 ld total = p*q + q*r + r*p;
 ld pr = p*r;

 ld sum = 0;

 sum += fp(p-1,q,r)*(pr/total);
 sum += fp(p,q-1,r)*(pr/total);
 sum += fp(p,q,r-1)*(pr/total);

 return dp[p][q][r] = sum;

}
int fq(int p, int q, int r){
 if(q ==0 or r==0) return 0;
 if(p == 0) return 1;
 if(dp[p][q][r] >=-0.9) return dp[p][q][r];
 ld total= p*q + q*r + r*p;
 ld pq = r*q;

 ld sum = 0;

 sum += fq(p-1,q,r)*(pq/total);
 sum += fq(p,q-1,r)*(pq/total);
 sum += fq(p,q,r-1)*(pq/total);

 return dp[p][q][r] = sum;

}
int main(){
 ll p,q,r;
 cout<<"Enter the value of p, q, r"<<endl;
 cin>>p>>q>>r;
 memset(dp, -1, sizeof dp);
 int ans_p = fp(p,q,r); 
 memset(dp, -1, sizeof dp);
 int ans_Q = fr(p,q,r); 
 memset(dp, -1, sizeof dp);
 int ans_R = fq(p,q,r);
 cout<<ans_p<<"   "<<ans_Q<<"  "<<ans_R<<endl; 
 return 0;


}