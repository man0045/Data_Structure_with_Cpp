#include <bits/stdc++.h>
using namespace std;
void solve(){
    int m,l;
    cin>>m>>l;
        
    vector<int> arr;
    arr.push_back(m);
        
    int count=0;
    while(arr.size() < m)
    {
        int n=arr.back();
        arr.erase(arr.begin()+arr.size()-1);
        for(int i=0;i<min(l-1,m-1);i++)
        {
            arr.push_back(1);
        }
        arr.push_back(m-l+1);
        count++;
    }
        
    cout<<count<<endl;
}

int main() {

    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}