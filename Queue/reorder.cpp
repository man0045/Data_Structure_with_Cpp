#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int> &q){
    int n = q.size();
    for(int i=1; i<=n; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}


void reorder(queue<int>& q){
    stack<int>st;
    int n = q.size();
    for(int i = 1; i<=n/2; i++){
        st.push(q.front());
        q.pop();
    }
    //empty the stack st into q;
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    //pop 2nd half
    for(int i = 1; i<=n/2; i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    while(q.size() > 0){
        st.push(q.front());
        q.pop();
    }
    while(st.size() > 0){
        q.push(st.top());
        st.pop();
    }


}
int main(){
    queue<int>q;

    //push
    //pop
    //front->top
    //size,empty
    //back

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    display(q);
    reorder(q);
    display(q);

}