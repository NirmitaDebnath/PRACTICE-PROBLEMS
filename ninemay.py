'''
def average(b,a=9):
    print("average is ",(a+b)/2)
average(a=3,b=1)
'''
def average(*numbers):
    sum=0
    for i in numbers:
        sum=sum+i
    print("Average is : ",sum/len(numbers))
average(45,6,7,8,9,23)