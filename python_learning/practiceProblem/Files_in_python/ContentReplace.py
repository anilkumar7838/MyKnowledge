li=["Donkey","donkey","Kaddu","mote"]
with open("Sample.txt") as f:
    content=f.read()
for word in li:
    content=content.replace(word,"#$%^&&%&*")
    with open("Sample.txt","w") as f:
        f.write(content)
        
# Donkey  hello friend  donkey 
#  kaise hu donkey  Kaddu  khaya
#  mote chal ja