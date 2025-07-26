#program for calculator
num1=float(input("enter num1:"))
op=input("enter operator to operate +,-,*,/:")
num2=float(input("enter num2:"))
if op=='+':
    print(num1+num2)
elif op=='-':
     print(num1-num2)
elif op=='*':
    print(num1*num2)
elif op=='/':
    if num2!=0:
        print(num1/num2)
    else:
        print("zero division error")             
else:
    print("invalid operator")     