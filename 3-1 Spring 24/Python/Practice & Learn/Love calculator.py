name1 = input("Enter your name: ")
name2 = input("Enter your partner's name: ")
comb = name1+name2
lower_comb = comb.lower()
t = lower_comb.count("t")
r = lower_comb.count("r")
u = lower_comb.count("u")
e = lower_comb.count("e")
l = lower_comb.count("l")
o = lower_comb.count("o")
v = lower_comb.count("v")
e = lower_comb.count("e")
total1 = t+r+u+e # in int form
total2 = l+o+v+e # in int form
total = int(str(total1)+str(total2)) #coverting int to string and then adding them
print(f"Your score is {total}")
intotal = int(total)
if intotal < 10 :
    print(f"Your score is {intotal}, you go together like coke and mentos.")
else :
    print("good to go")