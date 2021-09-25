ch=None
while ch!=4:
    try:
        num1 = float(input("Enter number1:"))
        num2 = float(input("Enter number2:"))
        print("Calculator: \n1 for subtraction\n2 for modulus\n3 for power")
        ch = int(input("Operator:"))
        if(ch==1):
            print("Answer is:",num1-num2)
        elif(ch==2):
            print("Answer is:",num1%num2)
        elif(ch==3):
            print("Answer is:",num1**num2)
        elif(ch==4):
            print("Thank you for using this calculator")
        else:
            print("Invalid operator")
    except Exception:
        print("Invalid Input")