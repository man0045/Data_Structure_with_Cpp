#include<iostream>
#include<vector>
using namespace std;
class solution{
public:
    int minMeetRooms(vector<vector<int>>& intervals){
        vector<int> start,ending;
        for(auto el:intervals){
            start.push_back(el[0]);
            ending.push_back(el[1]);
        }
        sort(start.begin(),start.end());
        sort(ending.begin(),ending.end());
        int ans = 0;
        int rooms = 0;
        int i = 0, j=0;
        while(i<start.size() and j<ending.size()){
            if(start[i] <ending[j]){
                room++;
                ans = max(ans, rooms);
                i++;
            }else if(start[i] > ending[j]){
                room--;
                j++;
            }else{
                i++;
                j++;
            }
        } 
        return ans;
    }

}
int main(){
    tell = [[0,30],[5,10],[15,20]];
    minMeetRooms(tell);

}