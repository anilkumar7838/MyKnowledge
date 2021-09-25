a={1,3,2,5,3,4}
print(a) # it remove the repeated element arrange in sorted form
# print(a[2])  #indexing is invalid 
print(type(a))

# important
# a={}
# print(type(a)) #print Dict so it is not a empty set

b=set()
print(type(b))
print(b)

# Methods
# we cannot add muttable object because set is immutable
b.add(4)
b.add(5)
# b.add(a) throw error
b.add((4,4,6))# Add tuple in front
print(b)

# b.add({4:5}) # Cannot add list or dictionary to sets
# print(b)

## Length of the Set
# print(len(b)) # Prints the length of this set

#Removal of an Item
# b.remove(5) # Removes 5 fromt set b
# b.remove(15) # throws an error while trying to remove 15 (which is not present in the set)
# b.discard(15) #It does not throw error
# print(b)

# print(b.pop()) ##remove arbitary ele 
# print()
# print(b)

# b.clear() #empty the set
# print(b)

# print(a|b)  #union
# print()
# print(a&b)  #intersection
# print()
# print(a-b)  #Difference
# print()
# print(a^b)  #symmetric Difference
# print()
# print()
# print(a.union(b))
# print(a.intersection(b))
# print(a.difference(b))
# print(a.symmetric_difference(b))

s = {18, "18", 18.1}
# print(type(s))
print(s)

c={20,20.0,"20"}
print(len(c)) #  2 ans because 20 and 20.0 are equal


li=frozenset([1,2,3])
d={1,2,4,5,3,li}
print(d)
