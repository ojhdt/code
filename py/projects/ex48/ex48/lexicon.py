direction = ["north", "south", "east", "west", "down", "up", "left", "right", "back"]
verb = ["go", "stop", "kill", "eat"]
stop = ["the", "in", "of", "from", "at", "in"]
noun = ["door", "bear", "princess", "cabinet"]

sentence_result = []

def scan(sentence):
    words = sentence.split()
    for i in words:
        if i in direction:
            words_after = ('direction', i)
        elif i in verb:
            words_after = ('verb', i)
        elif i in stop:
            words_after = ('stop', i)
        elif i in noun:
            words_after = ('noun', i)
            sentence_result.append(words_after)
        else:
            words_after = ('error', i)

        return(sentence_result)








