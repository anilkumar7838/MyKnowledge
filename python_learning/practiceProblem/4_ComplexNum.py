# complex number using oops
class Complex:
    real,img=0,0
    def __init__(self,real,img):
        self.real=real
        self.img=img
        
    def printC(self):
        print("using normal print",self.real,"+ i(",self.img,")")
        print("using fstring",f"{self.real}+i({self.img})")
        
    @staticmethod
    def complete():
        print("THANK YOU")
        
cp=Complex(1,2)
cp.printC()    
cp.complete()