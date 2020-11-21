def add(a, b):
    print(f"Adding {a} + {b}")
    return a + b

def subtract(a, b):
    print(f"Subtracting {a} - {b}")
    return a - b

def multiply(a, b):
    print(f"Multiplying {a} * {b}")
    return a + b

def divide(a, b):
    print(f"Dividing {a} / {b}")
    return a / b

age = add(3, 5)
height = subtract(10, 7)
weight = multiply(3, 10)
iq = divide(300, 100)

print(f"{age},{height},{weight},{iq}")