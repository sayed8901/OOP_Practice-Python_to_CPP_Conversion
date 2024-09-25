class A:
    pass

def display():
    print("I am Methods to Display")

obj = A()
obj.value = display

# print(obj.value)
# print(obj)

obj.value()
