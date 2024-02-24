#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin>>n>>k;
    int ans = 0;
    if(((4*n)-2)==k)
    {
        ans = ceil(k/2.0)+1;
    }
    else
    {
        ans = ceil(k/2.0);
    }
    cout<<ans<<endl;
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

//For B Sasha and Drawing