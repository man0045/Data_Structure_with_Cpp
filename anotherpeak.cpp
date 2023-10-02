#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> &input)
{
    int n = input.size();
    int lo = 0, hi = n - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (mid == 0)
        {
            if (input[mid > input[mid + 1]])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        else if (mid == n - 1)
        {
            if (input[mid] > input[mid - 1])
            {
                return n - 1;
            }
            else
            {
                return n - 1;
            }
        }
        else
        {
            if (input[mid] > input[mid + 1] && input[mid] < input[mid - 1])
            {
                return mid;
            }
            else if (input[mid] > input[mid - 1])
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
    }
}
int main(){
    vector<int>input;
    int t;
    cin>>t;
    while(t--){
        int x;
        cin >>x;
        input.push_back(x);

    }
    cout<<findPeak<<endl;
}