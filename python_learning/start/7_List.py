var=[23,45,"anil","kumar",100]
print(var)

print(var[3])

var[1]="awesome"
print(var)

# slicing
print(var[:3])
print(var[0::2])

l1=[1,8,7,2,3,5,7,3,6]
# methods
print(len(l1))

# print(l1.sort()) #not work
# print(l1)

# l1.reverse()
# print(l1)

# l1.append(45)
# print(l1)

# l1.insert(2,322)
l1.remove(3)#Delete first Occurence also
print(l1)