# Base class
class Person:
    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age

    def personalInfo(self):
        print(self.name, "-", self.age)


# Derived class inheriting from Person
class Employee(Person):
    def __init__(self, name, age, employee_id) -> None:
        # Initialize the base class (Person)
        Person.__init__(self, name, age)
        self.employee_id = employee_id

    def employeeInfo(self):
        print("Employee ID:", self.employee_id)


# Another derived class inheriting from Employee
class Manager(Employee):
    def __init__(self, name, age, employee_id, department) -> None:
        # Initialize the base class (Employee)
        Employee.__init__(self, name, age, employee_id)
        self.department = department

    def managerInfo(self):
        print("Manager of:", self.department)



# Creating an object of Manager class
obj = Manager("Sayed", 35, "E12345", "IT Department")


# output
obj.personalInfo()   # From Person class
obj.employeeInfo()   # From Employee class
obj.managerInfo()    # From Manager class



