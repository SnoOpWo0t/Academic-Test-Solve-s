import random
user = int(input("Enter your choice 1. rock \n 2. paper\n 3. scissors: "))
com = random.randint(0,2)
if user == com:
    print("It's a tie")
if user ==1 and com ==2 or user ==2 and com ==0 or user ==2 and com ==2:
    print("You win")
else:
    print("You lose")
    