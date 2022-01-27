arr=[]
n=int(input("enter the number of elements u want:"))
for i in range(0,n):
    j=int(input())
    arr.append(j)
print("before sorting")
for i in range(0,n):
    print(arr[i])
arr.sort()
print("array after sorting the in ascending order:")
for i in range(0,n):
    print(arr[i])