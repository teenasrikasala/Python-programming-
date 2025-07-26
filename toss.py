def toss():
    print("press 1 to select head")
    print("press 2 to select tail")
    choice=int(input("enter u r number:"))
    return choice
mychoice=toss()
if mychoice==1:
    print("head")
else:
    print("tail")    
def add(x,y):
    c=a+b
    return c
a=int(input("enter a value:"))    
b=int(input("enter b value:"))
print(add(a,b))