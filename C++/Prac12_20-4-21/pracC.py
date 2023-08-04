# Implement the concept of inheritance using python.
class base1:
    def printBase1(self):
        print("This is base1 class print statement.")

class base2:
    def printBase2(self):
        print("This is base2 class print statement.")

class childOne(base1):
    def printChildOne(self):
        super().printBase1()
        print("This is child one class print statement.")

class childTwo(base1, base2):
    def printChildTwo(self):
        super().printBase1()
        super().printBase2()
        print("This is child two class print statement.")
    
C1 = childOne()
C2 = childTwo()

C1.printChildOne()
print()
C2.printChildTwo()