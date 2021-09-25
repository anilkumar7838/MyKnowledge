class Vector:
    def __init__(self,vec):
        self.vec=vec
        
    def __str__(self):
        str1=""
        index=0
        for i in self.vec:
            str1 += f" {i}a{index} +"
            index+=1
        return str1[:-1]

    def __add__(self,vec2):
        newList=[]
        idx=0
        for i in self.vec:
            newList.append(i+vec2.vec[idx])
            idx+=1
        return Vector(newList)

    def __mul__(self, vec2):
        sum = 0
        for i in range(len(self.vec)):
            sum += self.vec[i] * vec2.vec[i]
        return sum        
    
    def __len__(self):
        return len(self.vec)                    
# vector should be equal 
v1= Vector([1,4,9])
print(v1)
v2= Vector([1,2,3])

print(v1+v2)

print(v1*v2)

print(len(v1))
print(len(v2))