def is_leap(year):
    if year%100==0 and year%400==0 :
        print("leap")
    elif year%4==0 :
        print("leap")
    else:
        print("not leap")

year = int(input())
print(is_leap(year))