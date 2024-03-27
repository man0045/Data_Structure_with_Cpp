for _ in range(int(input())):
    name=int(input())
    sameless=input()
    samefull1="map"
    samefull2="pie"
    cnt=0
    i=0
    while i<len(sameless):
        if(sameless[i]=='m' and sameless[i:i+3]==samefull1):
            cnt=cnt+1
            i=i+3
        elif(sameless[i]=='p' and sameless[i:i+3]==samefull2):
            cnt=cnt+1
            i=i+3
        else:
            i=i+1
    print(cnt)

