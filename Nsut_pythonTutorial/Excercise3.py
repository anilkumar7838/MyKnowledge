def countChar(str):
    number,lowercase,uppercase,specialChar=0,0,0,0
    for i in range(len(str)):
        if str[i].isupper():
            uppercase+=1
        elif str[i].islower():
            lowercase+=1
        elif str[i].isdigit():
            number+=1
        else:
            specialChar+=1
            
    print("NUMBERS: ",number)
    print("UPPERCASE CHARACTER: ",uppercase)
    print("LOWERCASE CHARACTER: ",lowercase)
    print("SPECIAL CHARACTER: ",specialChar)
    
str=input("Enter your String: ")
countChar(str)
        