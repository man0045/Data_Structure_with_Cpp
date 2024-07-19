#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod1 1000000007
#define mod2 998244353

void solve()
{
    ll num, k_val;
    cin >> num >> k_val;
    vector<int> arr(2 * num);
    map<int, int> freq1;
    map<int, int> freq2;

    for (int i = 0; i < 2 * num; i++)
    {
        cin >> arr[i];
        if (i < num)
        {
            freq1[arr[i]]++;
        }
        else
        {
            freq2[arr[i]]++;
        }
    }

    vector<int> left;
    vector<int> right;

    for (auto x : freq1)
    {
        if (freq2.find(x.first) != freq2.end() && left.size() < 2 * k_val)
        {
            left.push_back(x.first);
            right.push_back(x.first);
        }
    }

    for (auto x : freq1)
    {
        if (left.size() < 2 * k_val && x.second == 2)
        {
            left.push_back(x.first);
            left.push_back(x.first);
        }
    }

    for (auto x : freq2)
    {
        if (right.size() < 2 * k_val && x.second == 2)
        {
            right.push_back(x.first);
            right.push_back(x.first);
        }
    }

    for (int i = 0; i < left.size(); i++)
    {
        cout << left[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < right.size(); i++)
    {
        cout << right[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    ll test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        solve();
    }
    return 0;
}
riy