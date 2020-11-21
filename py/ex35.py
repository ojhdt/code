def gold_room():
    choice = input(">")
    if "0" in choice or "1" in choice:
        how_much = int(choice)
    else:
        print("dead")
    
    if how_much < 50:
        print("win")
    else:
        print("dead")

gold_room()

