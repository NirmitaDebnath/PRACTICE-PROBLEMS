if __name__ == '__main__':
    n = int(input())
arr = []
l1=0
# for i in range(0, n):
#     arr= int(input())
#     # arr.append(ele)
# a=int(input("Number of elements in the array:-"))
arr=list(map(int, input().strip().split()))
# print(n)
for j in range(0, n):
    l=arr[j]
    if l>l1:
        l=l1
        l1=arr[j]
    else:
        pass
print(l)