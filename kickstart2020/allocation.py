test = int(input())
n=1
while n<=test:
    a,b = input().split()
    a=int(a)
    budget=int(b)
    arr = list(map(int, input().split()))
    arr.sort()
    sum=0
    num=0
    for i in arr:
        currsum=sum+i
        if currsum<=budget:
            sum+=i
            num+=1
        else:
            break
    res="Case #" + str(n) + ": "
    print(res+str(num))
    n+=1
