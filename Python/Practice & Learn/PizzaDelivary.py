print("welcome to the shop")
sp =15
mp = 20
lp = 25
pepSp = 2
pepMpLp = 3
extraCheese = 1
bill =0
size =int(input("Enter the size of pizza you want to buy\n1. Small\n2. Medium\n3. Large\n"))
add_pep = input("Do you want to add pepperoni? Y or N\n")
extraC = input("Do you want extra cheese? Y or N\n")
if size == 1:
    if add_pep == "Y" and extraC == "Y":
        bill = sp + pepSp + extraCheese
    elif add_pep == "Y" and extraC == "N":
        bill = sp + pepSp
    elif add_pep == "N" and extraC == "Y":
        bill = sp + extraCheese
    else:
        bill = sp
elif size == 2:
    if add_pep == "Y" and extraC == "Y":
        bill = mp + pepMpLp + extraCheese
    elif add_pep == "Y" and extraC == "N":
        bill = mp + pepMpLp
    elif add_pep == "N" and extraC == "Y":
        bill = mp + extraCheese
    else:
        bill = mp
else :
    if add_pep == "Y" and extraC == "Y":
        bill = lp + pepMpLp + extraCheese
    elif add_pep == "Y" and extraC == "N":
        bill = lp + pepMpLp
    elif add_pep == "N" and extraC == "Y":
        bill = lp + extraCheese
    else:
        bill = lp
print(f"Your total bill is {bill}")