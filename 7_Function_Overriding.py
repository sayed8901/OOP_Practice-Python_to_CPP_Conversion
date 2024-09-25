class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def eat(self):
        print('mache vate bangali')


class Cricketer(Person):
    def __init__(self, name, age, height, weight, team):
        self.team = team
        super().__init__(name, age, height, weight)
   
    # overriding the eat method of Person class
    def eat(self):
        print('eating vegetables')


sakib = Cricketer('Sakib Al Hasan', 36, 5.7, 62, 'Bangladesh')

sakib.eat()
