class student:
    """Design a class that store the information of student and display the same"""
    @classmethod
    def __init__(self, name):
        self.name = name
    @classmethod
    def disp(self):
        print("The student name is: ", self.name)

class Numbers:
    """Class called Numbers, which has a single class attribute called m, 
        and a constructor which takes the parameters x and y
        (these should all be numbers)"""
    m = 50
    @classmethod
    def __init__(self, x, y):
        """ Constructor for initializing the x and y members"""
        self.x = x
        self.y = y
    @classmethod
    def add(self):
        """Write a method called add which returns 
            the sum of the attributes x and y."""
        return self.x+self.y
    @classmethod
    def multipy(self, num):
        """Write a class method called multiply, which takes a single number
            parameter a and returns the product of a and m."""
        return self.m * num

    @staticmethod
    def sub(x, y):
        """ Write a static method called subtract, 
            which takes two number parameters, b 
            and c, and returns b -c. """
        return x - y

    @classmethod
    def value(self):
        """Write a method called value which returns a 
           tuple containing the values of x and y and write a
           deleter for manipulating the values of x and y."""
        x = (1,2,3,4)
        y = (1,3,5,7)
        z = x+y
        print(z)
        del z
        # print(z)

stud1 = student("OM")
stud1.disp()

num1 = Numbers(10, 20)
print(num1.add())
print(num1.multipy(5))
print(Numbers.sub(10,4))
num1.value()
print(Numbers.__doc__)