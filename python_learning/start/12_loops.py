fruits=["Banana","Orange","Grapes","Mango"]
# while loop
i=0
while i<len(fruits):
    print(fruits[i])
    i=i+1
print("") 
   
# for each
for x in fruits:
    print(x)        

# start end gap
for x in range(1,8,2):
    print(x)
    
# for else
# here else only execute only on successfully termination 
for item in fruits:
    print(item)
    # if item=="Grapes":
    #     break
else:
    print("for loop end\n")

# continue statement
for x in range(5):
    if x==2:
        continue
    print(x)
    
# pass statement
i = 4

def run(player):
    pass

def ouch(player):
    pass

if i>0:
    pass

while i>6:
  pass

print("Anil is a good boy")