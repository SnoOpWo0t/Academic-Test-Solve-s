import random
words = ["hand","band","mouse","cat","dog","housekeeper"]
chosen_word = random.choice(words)
clength = len(chosen_word)
print(f"the chosen Word is {chosen_word}")

j=0
while j <=clength:
    for sp in range(clength):
        display =[]
        display += "_"
    print( display )
    
    guess = input("Enter a letter: ").lower()
    print(f"guessd leter is {guess}")
    for i in range(clength):
     letter = chosen_word[i]
    if letter == guess:
        print("Right")
        display[i] = letter
       
    print(display)
    j+=1


