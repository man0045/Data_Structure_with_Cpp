def check_seating_recommendations(n, a):
    max_seat = max(a)  # Determine the maximum seat number in the list
    occupied = [False] * (max_seat + 1)  # Create a list with size based on the max seat number

    # The first seat can always be occupied freely
    occupied[a[0]] = True

    for i in range(1, n):
        seat = a[i]
        # Check if the seat is adjacent to any occupied seat
        if (seat > 1 and not occupied[seat - 1]) and (seat < max_seat and not occupied[seat + 1]):
            return "NO"
        occupied[seat] = True
    
    return "YES"

# Read number of test cases
t = int(input())

# Process each test case
results = []
for _ in range(t):
    input_data = list(map(int, input().split()))
    n = input_data[0]
    a = input_data[1:]
    results.append(check_seating_recommendations(n, a))

# Print all results
print("\n".join(results))
