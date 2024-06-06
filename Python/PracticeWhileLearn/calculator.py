def add(n1,n2):
    return n1+n2
def sub(n1,n2):
    return n1-n2
def div(n1,n2):
    return n1/n2
def mul(n1,n2):
    return n1*n2
print("Welcome to the calculator")
operations = {
   # "keys" = single value OR ["+","-","*","/"],
    "+":add,
    "-":sub,
    "*":mul,
    "/":div
}
a,b = list(map(int,input("Enteter two number :").split()))
print(a,b)
for i in operations:
    print(i)
operation_symbol = input("Pick an operation from the line above: ")

calculator = operations[operation_symbol] 
""" here we are using the dictionary to call the function.
     example : operations[+] so it'll match with the key and call the function add()"""
answer = calculator(a,b) #here were calling the calculator variable which is holding the function from the dictionary
                         # and passing the two numbers to the function and operation symbol to the function
print(answer )