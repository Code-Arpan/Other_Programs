first = input("Enter 1st Number: ")            
operator = input("Enter operator(+,-,*,%,/) ")
second = input("Enter 2nd Number: ")

first = int(first)
second = int(second)

if operator == "+":          #Addition
    print(first + second)

elif operator == "-":        #Subtraction
     print(first - second)

elif operator == "*":         #Multiplication
     print(first * second)

elif operator == "%":         #Remainder
     print(first % second)

elif operator == "/":         #Division
     print(first / second)

else: 
    print("Invalid operator")