class A:
    # constructor
    def __init__(self) -> None:
        print("I am Constructor")
    
    # method
    def display(self):
        print("I am Display Method")

    # destructor
    def __del__(self):
        print("I am Destructor")

    def __str__(self) -> str:
        return "I am Class A"


obj = A()
obj.display()


