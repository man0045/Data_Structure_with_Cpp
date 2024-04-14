#include <bits/stdc++.h>
    using namespace std;
     
    bool isbinary(int input) {
        while (input > 0) {
            if (input % 10 != 0 && input % 10 != 1)
                return false;
            input /= 10;
        }
        return true;
    }
     
    void resulytans() {
        int input;
        cin >> input;
        int original_ans = input; 
        int res = 0;
        int poer = 0;
        int ans=0;
        while (input > 0) {
            poer = input % 10;
            input /= 10;
            res = res * 10 + poer;
            ans++;
        }
        if (isbinary(original_ans) ) 
        { 
            cout << "YES" << endl;
        } 
        else if(res==original_ans && original_ans%11==0 && ans>2)
        {
            cout<<"YES"<<endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
     
        int t;
        cin >> t;
        while (t--) {
            resulytans();
        }
     
        return 0;
    }