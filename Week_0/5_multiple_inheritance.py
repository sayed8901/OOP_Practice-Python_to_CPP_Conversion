# base class 1
class Person:
    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age

    def personalInfo(self):
        print(self.name," - ",self.age)


# base class 2
class Company:
    def __init__(self, company_name, company_location) -> None:
        self.company_location = company_location
        self.company_name = company_name

    def companyInfo(self):
        print(self.company_name," - ",self.company_location)


# derived class inherits base1 & base2 class
class Employee(Person,Company):
    def __init__(self, name, age,company_name, company_location) -> None:
        Person.__init__(self, name, age)
        Company.__init__(self, company_name, company_location)



obj = Employee("Sayed", 24, "Google", "USA")

obj.companyInfo()
obj.personalInfo()


# method resolution order
# to check the priority among the parent classes
print(Employee.mro())


