#include <bits/stdc++.h> 
using namespace std; 
  
void Result(){ 
long long n,abeSalle,b,fucked=0; 
cin>>n; 
string strInput1="",strinput2="",stAns=""; 
vector<vector<int>>vt(2,vector<int>(2,'*')); 
vector<vector<int>>ans; 
abeSalle=0; 
for(int i=0;i<n;i++){ 
    fucked=abeSalle; 
    for(int j=0;j<n;j++){ 
        for(int k=0;k<2;k++){ 
            for(int g=0;g<2;g++){ 
                if(fucked==0) 
                    vt[k][g]='#'; 
                else 
                    vt[k][g]='.'; 
            } 
             
        } 
        for(int k=0;k<2;k++){ 
            for(int g=0;g<2;g++){ 
                stAns+=vt[k][g]; 
            } 
            if(k==0) 
                strInput1+=stAns; 
            else 
                strinput2+=stAns; 
         stAns="";    
        } 
 
 
 
 
        fucked=!fucked; 
    } 
 
for(int i=0;i<strInput1.size();i++) 
        cout<<strInput1[i]; 
    cout<<endl; 
        for(int i=0;i<strInput1.size();i++) 
        cout<<strinput2[i]; 
cout<<endl; 
    strInput1=""; 
    strinput2="";abeSalle=!abeSalle; 
 
} 
 
 
} 
  
int main() { 
    int t; 
    cin>>t; 
    while(t>0){ 
        Result(); 
        t--; 
    } 
    return 0; 
}