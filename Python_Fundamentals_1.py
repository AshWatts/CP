def func1(*p):
    print("Pointer Argument:",p[0],p[1],p[2])
func1(22,23,444)

def func2(**p):
    print("Keyword Argument:",p['name'],p['age'],p['city'])
func2(name='John',age=22,city='New York')

def fact(n):
    if n==1:
        return 1
    return n*fact(n-1)
print(fact(5))

def fib(n):
    if n==0 or n==1:
        return n
    return fib(n-1)+fib(n-2)
print(fib(6))

try:
    print(10/0)
except ZeroDivisionError:
    print("Division by Zero is not allowed")
finally:
    print("This block will always execute")
    
class CustomException(Exception):
    "Raised when the input is less than 35"
    pass

threshold = 35

try:
    marks = int(input("Enter your marks: "))
    if marks < threshold:
        raise CustomException("Marks are below the passing threshold.")
    else:
        print("You have passed the exam")
        
except CustomException as e:
    print("You have failed the exam:", e)
except ValueError:
    print("Please enter a valid integer for marks.")
