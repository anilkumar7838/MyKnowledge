f=open("poems.txt")
a=f.read()
a=f.read()
if "Twinkle" in a.lower():
    print("twinkle is present")
else:
    print("twinkle is not present")
    
f.close()