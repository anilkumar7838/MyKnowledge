l1=["Numbers",1,2,3,4,5]
l2=["Alphabets",'a','b','c','d','e']

for i in range(len(l1)):
    print(l1[i],end=" ")
    print(l2[-(i+1)],end=" ")
    