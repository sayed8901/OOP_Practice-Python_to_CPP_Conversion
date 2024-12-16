class Bank:
    def __init__(self, holder_name, initial_deposit) -> None:
        self.holder_name = holder_name # public attribute
        self._branch = 'panthapath' # protected attribute
        self.__balance = initial_deposit # private attribute
   
    # encapsulation: hiding details operation
    def deposit(self, deposit_amount):
        self.__balance += deposit_amount
   
    def withdraw(self, withdraw_amount):
        if withdraw_amount < self.__balance:
            self.__balance = self.__balance - withdraw_amount
            return withdraw_amount
        else:
            return f'Not enough balance: {withdraw_amount}'
   
    def get_balance(self):
        return self.__balance


sayed = Bank('Sayed', 10000)
sayed.deposit(5000)


print(sayed.holder_name)    # accessing public attributes


print(sayed.get_balance())  # accessing protected attributes
