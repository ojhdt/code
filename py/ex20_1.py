filename = "text.txt"
file = open(filename)
print("1",file.readline(),end="")
print("2",file.readline())
print("3",file.readline())

file.seek(1)

print("4",file.readline())
print("5",file.readline())