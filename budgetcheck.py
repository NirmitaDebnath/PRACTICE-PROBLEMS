print("Hi! Looking towards planning a vacation?")
print("Want to travel by- Plane / Train / Bus / PrivateServices ?")
s=input()
s=s.upper()
if(s=="BUS"):
    travelcost=5000
    days=3
elif(s=="PLANE"):
    travelcost=15000
    days=1
elif(s=="TRAIN"):
    travelcost=8000
    days=2
elif(s=="PRIVATESERVICES"):
    travelcost=18000
    days=3
else:
    print("WRONG CHOICE")
print("Number of days ?")
day=int(input())
days=(days*2)+day
food=1000
print("Number of people")
n=int(input())
foodcost=food*n*days
tottra=n*travelcost*2
tot=foodcost+tottra
print("Enter your Budget : ")
budget=int(input())
if (budget-tot)>=5000:
    print("You are ready to go for the Journey!!")
elif (budget-tot)<5000 and (budget-tot)>=0:
    print("!!Having a tight budget,Kindly re think")
else:
    print("Sorry you cannot go for this trip.")
print("Here is the approx details of the selected trip")
print("*********************************************************************************************")
print()
print("Total number of days including travelling days are : ",days)
print("Approximate costing of food services for",n," people during the whole trip will be : ",foodcost)
print("Travelling cost of ",n," people : ",tottra)
print()
print("**********************************************************************************************")
print("TOTAL COST : ",tot)