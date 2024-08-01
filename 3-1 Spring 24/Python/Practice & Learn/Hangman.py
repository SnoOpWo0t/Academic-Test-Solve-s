import random
words = ["hand","band","mouse","cat","dog","housekeeper"]
chosen_word = random.choice(words)
clength = len(chosen_word)
print(f"the chosen Word is {chosen_word}")
endofGame = False 

display =[]
for sp in range(clength):
    display += "_"
print( display )

guess = input("Enter a letter: ").lower()
print(guess)


for i in range(clength):
    letter = chosen_word[i]
    if letter == guess:
        print("Right")
        display[i] = letter
        print("Wrong")
print(display)
if "_" not in display:
    endofGame = True
    print("You Win")
