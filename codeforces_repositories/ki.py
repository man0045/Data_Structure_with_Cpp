def largest_cost(arr):
    n = len(arr)
    max_cost = float('-inf')
    
    for i in range(n):
        current_sum = 0
        for j in range(i, n):
            current_sum += arr[j]
            current_cost = current_sum ** 2
            max_cost = max(max_cost, current_cost)
    
    return max_cost

# Example usage
arr1 = [1, -1, 1, -1, 1]
arr2 = [1, 2, 3]
print(largest_cost(arr1))  # Output: 1
print(largest_cost(arr2))  # Output: 36
