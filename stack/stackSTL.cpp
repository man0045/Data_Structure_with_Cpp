#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;
    // while(st.size() > 0){
    //     cout<<st.top()<<endl;
    //     int x = s
    //     st.pop();
    // }

    stack<int>temp;
    while(st.size() > 0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
        

    }
    cout<<endl<<st.top()<<endl;
}