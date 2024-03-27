# def main():
#     t = int(input())
    
#     for _ in range(t):
#         nam = int(input())
#         val = list(map(int, input().split()))
        
#         for i in range(1, nam - 1):
#             if val[i - 1] <= val[i + 1] and val[i] >= 2 * val[i - 1]:
#                 val[i + 1] -= val[i - 1]
#                 val[i] -= 2 * val[i - 1]
#                 val[i - 1] = 0
        
#         if val.count(0) != nam:
#             print("NO")
#         else:
#             print("YES")

# if __name__ == "main":
#     main()
def main():
    t = int(input())
    
    for _ in range(t):
        nam = int(input())
        val = list(map(int, input().split()))
        
        for i in range(1, nam - 1):
            if val[i - 1] <= val[i + 1] and val[i] >= 2 * val[i - 1]:
                val[i + 1] -= val[i - 1]
                val[i] -= 2 * val[i - 1]
                val[i - 1] = 0
        
        if val.count(0) != nam:
            print("NO")
        else:
            print("YES")

if __name__ == "__main__":
    main()
