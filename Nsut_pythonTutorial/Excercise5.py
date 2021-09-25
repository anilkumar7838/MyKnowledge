l1=[1,2,3,4,5,6]
l2=["Apple","mango","Banana","Grapes","Cherry"]

mydict={}
print(type(mydict))
for key in l1:
    if len(l2)==0:
        mydict[key]=None
        
    for value in l2:
        mydict[key]=value
        l2.remove(value)  
        break      
        
print("Dictionary is: ",mydict)