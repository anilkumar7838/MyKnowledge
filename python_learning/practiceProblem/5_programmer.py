class Programmer:
    company="Microsoft"
    def __init__(self,name,product):
        self.name=name
        self.product=product
        
    def getInfo(self):
        print("{} is working on a project: {}".format(self.name,self.product))
        
ob=Programmer("Anil","FaceBook")
ob1=Programmer("Ajay","ExcelProjects")
ob2=Programmer("sonu","Web-App")
ob.getInfo()
ob1.getInfo()
ob2.getInfo()

        