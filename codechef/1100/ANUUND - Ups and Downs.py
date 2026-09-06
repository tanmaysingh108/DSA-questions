t=int(input())
for i in range(t):
    n=int(input())
    arr=[]
    a=input().split()
    for i in a:
        arr.append(int(i))
    arr.sort()
    for i in range(1,n-1,2):
        arr[i],arr[i+1]=arr[i+1],arr[i]
    for i in arr:
        print(i,end=" ")
