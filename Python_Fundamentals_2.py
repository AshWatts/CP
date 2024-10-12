#Class and Object
class class1:
    d1 = "Ayush"
    d2 = 2
obj1 = class1()
print(obj1.d1,obj1.d2)


#Function inside a class
class class2:
    name = "Ayush"
    
    def abc(self):
        print("Name: ",self.name)
        
obj2 = class2()
obj2.abc()


#Constructor
class class3:
    def __init__(self,name):
        self.name = name
obj3 = class3("Ayush")
print(obj3.name)    


#Inheritance
class Parent:
    name = ""
    
    def m1(self):
        print("Parent Class")
        
class Child(Parent):
    def m2(self):
        print("Child Class ->",self.name)

obj4 = Child()
obj4.name = "Ayush"
obj4.m1()
obj4.m2()


#Lambda Function
f = lambda x:x*x
print(f(5))


#Iterators
list1 = [1,2,3,4,5]
iter1 = iter(list1)
print(next(iter1))
print(next(iter1))


#Nested Function
def abc(x):
    def xyz():
        print(x*x)
    xyz()
abc(5)


#Generator
def abc():
    for i in range(5):
        yield i
for i in abc():
    print(i+1, end="")

