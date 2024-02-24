def InputTerms():
    return list(map(int, input().strip().split()))

TakingMax = 200010
ListMaking = [0]*(TakingMax)


def dp(n):
    ans = 0
    for i in str(n):
        ans += int(i)
    return ans

for i in range(TakingMax-1):
    ListMaking[i+1] = dp(i+1) + ListMaking[i]


for _ in range(InputTerms()[0]):
    M = []  
    n = InputTerms()[0]

    print(ListMaking[n])
