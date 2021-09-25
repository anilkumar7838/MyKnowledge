class Employee:
    company = "Google"
    def getSalary(self):
        print(f"Salary for this employee working in {self.company} is {self.salary}")

ak = Employee()
ak.salary = 100000
ak.getSalary() # Employee.getSalary(harry)