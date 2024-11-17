def rem_dup( a):
    word = a.split(" ")
    unique = set(word)
    return unique
b = " akgi is akgi"
print(rem_dup(b))