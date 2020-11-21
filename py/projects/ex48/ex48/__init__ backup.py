direction = ["north", "south", "east", "west", "down", "up", "left", "right", "back"]
verb = ["go", "stop", "kill", "eat"]
stop = ["the", "in", "of", "from", "at", "in"]
noun = ["door", "bear", "princess", "cabinet"]

class lexicon():
    def scan(self, item):
        words = item.split
        sentence = []
        for i in words:
            if i in direction:
                words_after = ('direction', i)
            elif i in verb:
                words_after = ('verb', i)
            elif i in stop:
                words_after = ('stop', i)
            elif i in noun:
                words_after = ('noun', i)
            else:
                words_after = "ERROR"

        sentence.append(words_after)    
        print(''.join(sentence))



b = lexicon()

a = input(">")
b.scan(a)
