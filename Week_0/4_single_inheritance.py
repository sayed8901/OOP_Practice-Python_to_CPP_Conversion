# base class
class A:
    def __init__(self,name) -> None:
        self.name = name

    def display(self):
        print(self.name)


# derived class
class B(A):
    def __init__(self, name) -> None:
        super().__init__(name)



obj = B("Sayed")
obj.display()

