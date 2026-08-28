size = int(input("Enter the size of the stack: "))
stack = []
top = -1

def push():
    global top
    if top == size - 1:
        print("Stack Overflow")
    else:
        val = int(input("Enter element: "))
        stack.append(val)
        top+=1
        print(val, "pushed into stack.")

def pop():
    global top

    if top == -1:
        print("Stack Underflow")
    else:
        print(stack[top], "popped from stack.")
        stack.pop()
        top -= 1

def peek():
    if top == -1:
        print("Stack is empty.")
    else:
        print("Top element =", stack[top])

def display():
    if top == -1:
        print("Stack is empty.")
    else:
        print("Stack elements:")
        for i in range(top, -1, -1):
            print(stack[i])

while True:
    print("\n1. Push")
    print("2. Pop")
    print("3. Peek")
    print("4. Display")
    print("5. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        push()
    elif choice == 2:
        pop()
    elif choice == 3:
        peek()
    elif choice == 4:
        display()
    elif choice == 5:
        break
    else:
        print("Wrong input.")