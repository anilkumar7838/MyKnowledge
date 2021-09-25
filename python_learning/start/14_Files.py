#  this file only work when you open current folder in vscode


# f=open("test.txt","r")
# f=open("test.bin","rb") # for binary file
f=open("Sample.txt")    # by default read
data=f.read()
print(data)
f.close()

f1=open("Sample.txt")
text=f1.readline()
print(text,end="")
text=f1.readline()
print(text,end="")
text=f1.readline()
print(text,end="")
text=f1.readline()
print(text)
f.close()

f3=open("myfile.txt","w")
f3.write("hello friends!")
f3.write("hello friends!")   # this will append the text
f3.write("hello friends!")   # this will append the text
f3.close()
# f3=open("myfile.txt","w")
# f3.write("hello")   # overwrite Everything

with open("Sample.txt","r") as f:
    a=f.read()
with open("another.txt","w") as f4:
    a=f4.write("Hello")
print(a)
