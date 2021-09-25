# num = int(input("Enter the number: "))
# for i in range(1,11):
#     # print(str(num) + " X " + str(i) + "=" + str(i*num))
#     print(f"{num}X{i}={num*i}") # fstring
# print("/n")
num = int(input("Enter the number: "))
# using reversed function
for i in reversed(range(1,11)):
# for i in range(10,0,-1):
    # print(str(num) + " X " + str(i) + "=" + str(i*num))
    print(f"{num}X{i}={num*i}") # fstring
    
# l1 = ["Anil", "Sohan", "Sachin", "Rahul"]

# for name in l1:
#     if name.startswith("S"):
#         print("Hello " + name)
        
# n = 4

# for i in range(4):
#     print("*" * (i+1))
    
# n = 3
# for i in range(3): 
#     print(" " * (n-i-1), end="")
#     print("*" * (2*i+1), end="")
#     print(" " * (n-i-1))