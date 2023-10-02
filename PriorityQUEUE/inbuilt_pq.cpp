#include<iostream>
#include<queue>
using namespace std;

int main(){
    vector<int> v = {9,6,7,8,17,4,11,6,11};
    int arr[] = {9,6,7,8,17,4,11,6,11};
    priority_queue<int> maxhp;
    priority_queue<int,vector<int>, greater<int>>  hp;
    priority_queue<int, vector<int>, greater<int> > minhpvector(v.begin(), v.end());
    priority_queue<int> maxhparray(arr, arr+9);

    hp.push(3);
    hp.push(33);
    hp.push(35);
    hp.push(32);
    hp.push(63);
    hp.push(43);
    hp.push(53);
    hp.push(83);
    hp.push(39);
    hp.push(31);
    hp.push(30);
    hp.push(34);
    cout<<hp.top()<<endl;
    cout<<minhpvector.top()<<endl;
    cout<<maxhparray.top()<<endl;
    return 0;

}