import random 
withcomName = input()
name = withcomName.split(", ")
print(len(name))
print(name[random.randint(0, len(name)-1)]) 
  # random.randint(0, len(name)-1) will generate a random number between 0 and len(name)-1
