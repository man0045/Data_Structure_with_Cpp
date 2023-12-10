#include <iostream>
#include <vector>
#include <set>

using namespace std;

int longest_good_subarray(const vector<int>& nums, int k) {
    multiset<int> frequency;
    int left = 0;
    int max_length = 0;

    for (int right = 0; right < nums.size(); ++right) {
        // Update the frequency of the current element
        frequency.insert(nums[right]);

        // Shrink the window from the left until the array becomes good
        while (*frequency.rbegin() - *frequency.begin() > k) {
            frequency.erase(frequency.find(nums[left]));
            left++;
        }

        // Update the maximum length of good subarray
        max_length = max(max_length, right - left + 1);
    }

    return max_length;
}

int main() {
    // Example 1
    vector<int> nums1 = {1, 2, 3, 1, 2, 3, 1, 2};
    int k1 = 2;
    cout << longest_good_subarray(nums1, k1) << endl;  // Output: 6

    // Example 2
    vector<int> nums2 = {1, 2, 1, 2, 1, 2, 1, 2};
    int k2 = 1;
    cout << longest_good_subarray(nums2, k2) << endl;  // Output: 2
    
    return 0;
}
