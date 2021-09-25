name="Anil"
sirname="kumar"
print(name+sirname)

# slicing
text='''hello Everyone how are you '''
print(text[0])
print(text[7])
print(text[:])
print(text[-12:])
print(text[:9])
print(text[3:9])
print(text[-9:-1])
print(text[1::2])  # It skip the value 
# text[6]="d"  this does not work

# methods
print(len(text))
print(text.endswith("you "))
print(text.count("a"))
print(text.capitalize())    # first word is capitalise
print(text.find("how"))     # It only give first index of occured string
print(text.replace("hello","Good morning"))

# escape Sequence character
str="adnalnab\n jkdasnk\tshbdbdvjd\\jdvhjhv\'kdsjkd"
print(str)
