def longest_good_subarray(nums, k):
    frequency = {}
    left = 0
    max_length = 0

    for right in range(len(nums)):
        # Update the frequency of the current element
        frequency[nums[right]] = frequency.get(nums[right], 0) + 1

        # Shrink the window from the left until the array becomes good
        while max(frequency.values()) > k:
            frequency[nums[left]] -= 1
            if frequency[nums[left]] == 0:
                del frequency[nums[left]]
            left += 1

        # Update the maximum length of good subarray
        max_length = max(max_length, right - left + 1)

    return max_length

# Example 1
nums1 = [1, 2, 3, 1, 2, 3, 1, 2]
k1 = 2
print(longest_good_subarray(nums1, k1))  # Output: 6

# Example 2
nums2 = [5, 5, 5, 5, 5, 5, 5]
k2 = 4
print(longest_good_subarray(nums2, k2))  # Output: 2
