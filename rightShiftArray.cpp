#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int  n = nums.size(),ind = -1,cnt{};
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                if(cnt==0){
                ind = i+1;
                cnt++;
                }else return -1;
            }
        }
        if(ind==-1) return 0;
        if(nums[n-1]>nums[0]) return -1;
        return n-ind;
    }
};