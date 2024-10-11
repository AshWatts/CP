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