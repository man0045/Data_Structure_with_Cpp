#include<iostream>

#include<vector>
using namespace std;
int peakelementinArray(vector<int> &input){
    int lo =1, hi = input.size()-1;

    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(input[mid] > input[mid-1]){
            ans = mid;
            lo = mid + 1;

        }
        else{
            hi = mid -1;
        }
    }
    return ans;


}

int main(){
    vector<int> input;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        input.push_back(x);

    }
    cout<<peakelementinArray(input)<<"\n";

    return 0;


}