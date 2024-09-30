class CustomStack:

    def __init__(self, n: int):
        self.n, self.stack, self.inc = n, [], []

    def push(self, x: int) -> None:
        if len(self.stack) < self.n: self.stack.append(x), self.inc.append(0)

    def pop(self) -> int:
        if not self.stack: return -1
        if len(self.inc) > 1: self.inc[-2] += self.inc[-1]
        return self.stack.pop() + self.inc.pop()

    def increment(self, k: int, val: int) -> None:
        if self.inc: self.inc[min(k, len(self.inc)) - 1] += val
        
def main():
    customStack = CustomStack(3)  # Stack is Empty []
    customStack.push(1)           # stack becomes [1]
    customStack.push(2)           # stack becomes [1, 2]
    print(customStack.pop())      # return 2 --> Return top of the stack 2, stack becomes [1]
    customStack.push(2)           # stack becomes [1, 2]
    customStack.push(3)           # stack becomes [1, 2, 3]
    customStack.push(4)           # stack still [1, 2, 3], Don't add another elements as size is 4
    customStack.increment(5, 100) # stack becomes [101, 102, 103]
    customStack.increment(2, 100) # stack becomes [201, 202, 103]
    print(customStack.pop())      # return 103 --> Return top of the stack 103, stack becomes [201, 202]
    print(customStack.pop())      # return 202 --> Return top of the stack 202, stack becomes [201]
    print(customStack.pop())      # return 201 --> Return top of the stack 201, stack becomes []
    print(customStack.pop())      # return -1 --> Stack is empty return -1

if __name__ == "__main__":
    main()