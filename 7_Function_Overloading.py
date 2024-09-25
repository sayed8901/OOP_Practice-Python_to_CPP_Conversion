class Calculator:
    def sum(self, num1, num2, num3 = None):
       if num3 is None:
           # to sum two numbers
           return num1+num2  
       # method overloading to sum three numbers   
       return num1+num2+num3    
    
    
cal = Calculator()

print(cal.sum(1,2,3))
print(cal.sum(1,2))

