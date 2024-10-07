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