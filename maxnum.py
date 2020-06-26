def countSetBits( n): 
    # base case 
    if (n == 0): 
        return 0
    else: 
        # if last bit set add 1 else 
        # add 0 
        return (n & 1) + countSetBits(n >> 1) 

def oring(piece):
    if len(piece)==0:
        return 0
    else:
        return piece[0]|oring(piece[1:])
def adding(arr, n):
    if len(arr)==0:
        return 0
    else:
        sum=(arr[0]&n)+adding(arr[1:],n)
        # print(sum)
        return sum
n=int(input())
while(n):
    a,l=input().split()
    l=int(l)
    arr=list(map(int, input().split()))
    ornum=oring(arr)
    # print("ornum",ornum)
    maxsum=0
    count=0
    for i in range(1,ornum):
        # print("set bits",countSetBits(i))
        if(countSetBits(i)==l):
            num=i
            res=adding(arr, num)
            # print(sum(res))
            if(res>maxsum):
                maxsum=res
                count=0
                # print(sum(res)," ", i)
                # count+=1
            if(res==maxsum):
                count+=1
                # print(sum(res)," ", i)
    if(count==0):
        print("-1")
    else:
        print(count)
    n-=1
# print(countSetBits(5))