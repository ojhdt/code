a = input('>')
words = a.split()
number = 1

for i in words:
    print(f"The {number} word is:", i)
    number += 1

sentence = []
 
def add_words(word):
    try:
        sentence.append(word)
    except ValueError:
        pass

