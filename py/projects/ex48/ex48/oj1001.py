from sys import argv
def Plus(n):
    result = 0
    for i in range(1,n + 1):
       result = result + i
    return result

a = []
#try:
#    while True:
s = input()
a.append(s)
#except EOFError:
#    pass

for i in a:
    print(Plus(i))

