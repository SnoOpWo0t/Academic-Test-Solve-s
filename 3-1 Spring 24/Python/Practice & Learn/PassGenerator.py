import random
alpha = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
numbers = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0']
symbols = ['!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '+', '=', '[', ']', '{', '}', '|', ';', ':', ',', '.', '/', '<', '>', '?']
print("Welcome to the PyPassword Generator!")
nmbr_Let = int(input("How many letters would you like in your password?"))
nmbr_nmbr = int(input("How many numbers would you like?"))
nmbr_sym =  int(input("How many symbols would you like?"))
#easy way
password = ""
for i in range(1, nmbr_Let+1):
    ranchar = random.choice(alpha)
    password += ranchar
for j in range(1, nmbr_nmbr+1):
    rannmb = random.choice(numbers)
    password += rannmb
for k in range(1, nmbr_sym+1):
    ransym = random.choice(symbols)
    password += ransym
print(password)