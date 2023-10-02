#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class MaxHeap{
    vector<int>hp;
    void upheapify(int ci){
        while(ci > 0){
            int pi = (ci-1)/2;
            if(hp[pi] < hp[ci]){
                swap(hp[pi], hp[ci]);
                ci = pi;
            }
            else{
                break;
            }
        }
    }
    void downheapify(int idx){
        while(idx < hp.size()){
            int lc = 2*idx + 1;
            int rc = 2*idx + 2;
            if(lc >= hp.size()) break;
            int maxEl = idx;
            if(hp[lc] > hp[maxEl]){
                maxEl = lc;
            }
            if(rc < hp.size() and hp[rc] > hp[maxEl]){
                maxEl = rc;

            }
            if(maxEl != idx){
                swap(hp[idx], hp[maxEl]);
                idx = maxEl;
            } 
            else{
                break;
            }
        }
    }
public:
    void push(int element){
        hp.push_back(element);
        upheapify(hp.size() - 1);
    }
    void pop(){
        if(empty()) return;
        swap(hp[0], hp[hp.size() - 1]);
        hp.pop_back();
        if(!empty()) downheapify(0);
    }
    int peak(){
        if(empty()) return INT_MIN;
        return hp[0];
    }
    bool empty(){
        return hp.size() ==0;
    }
    void display(){
        cout<<"[";
        for(int i = 0; i<hp.size(); i++){
            cout<<hp[i]<<" ";
        }
        cout<<"]\n";
    }

};

int main(){
    MaxHeap hp;
    hp.push(3);
    hp.push(23);
    hp.push(35);
    hp.push(37);
    hp.push(31);
    hp.push(30);
    hp.push(34);
    hp.push(33);
    hp.push(93);
    hp.push(54);
    hp.push(63);
    hp.push(13);
    hp.push(45);
    hp.push(67);
    hp.push(73);
    hp.display();
    hp.pop();
    hp.display();

}