def gcd_recursive(a,b):
    if a%b==0 :
        return b;
    if b%a==0 :
        return a;
    if a>b :
        return gcd_recursive(a%b,b)
    if a<b :
        return gcd_recursive(a,b%a)
    if a==b:
        return a

a=int(input("Enter the First number: "))
b=int(input("Enter the Second number: "))

print("Gcd is: ",gcd_recursive(a,b))        
