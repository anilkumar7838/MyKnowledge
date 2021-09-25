class Calculator:
    
    def __init__(self,num):
        self.number=num
    
    def square(self):
        print(f"The value of {self.number} square is {self.number**2}")
    
    def squareRoot(self):
        print(f"The value of {self.number} square is {self.number**(1/2)}")
    
    def cube(self):
        print(f"The value of {self.number} square is {self.number**3}")
    
a=Calculator(23)
a.square()
a.cube()
a.squareRoot()