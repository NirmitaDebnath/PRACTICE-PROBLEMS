def average(a,b):
    avg=0
    avg=(a+b)/2
    print("AVERAGE IS : ",avg)
average(2,2)

# #using tuples to take many numbers as input
def avg(*numbers):
    sum=0
    for i in numbers:
        sum=sum+i
    print("AVERAGE IS : ",sum/len(numbers))
avg(1,2,3,4,5)

#list
list=[i*i for i in range(20) if i%2==0]
print(list)

list=[j for j in range(20)]
print(list)