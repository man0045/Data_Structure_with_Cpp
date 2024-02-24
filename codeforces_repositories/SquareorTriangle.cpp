#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        set<int> s;
        for(int i = 0; i < n; i++){
            string ss;
            cin >> ss;
            if (ss.find('1') != string::npos) {
                s.insert(count(ss.begin(), ss.end(), '1'));
            }
        }

        if(s.size() == 1){
            cout << "SQUARE" << endl;
        } else {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}
