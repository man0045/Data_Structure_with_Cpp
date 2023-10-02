#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(23);
    st.push(43);
    st.push(12);
    st.push(66);
    st.push(45);
    st.push(90);
    st.push(23);
    int n = st.size();
    // while (!st.empty()) {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    int k = 2;
    while(k--){
        st.pop();
    }
    while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
    }
}