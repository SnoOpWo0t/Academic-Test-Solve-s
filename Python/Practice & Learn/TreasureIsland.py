print("welcome to Treasure Isaland")
lr = input("You're at a crossroad, where do you want to go? Type 'left' or 'right': ")
if lr.lower() =="left" :
    sw = input("swim or wait?")
    if sw.lower() == "wait":
        col = input ("red,blue,yellow?")
        if col.lower() == "yellow":
            print("You Win!")
        else:
            print("Game Over")
    else:
        print("Game Over")
else:
 print("Game Over")