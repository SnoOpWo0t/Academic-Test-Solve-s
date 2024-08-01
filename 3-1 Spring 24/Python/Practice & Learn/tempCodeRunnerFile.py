dictionary ={
    "name": "Aung Aung",
    "age": 25,
    "address": "Yangon",
}
print(dictionary)
print(dictionary["name"])

#add new key and value
dictionary["names"] = "Mg Mg"
print(dictionary) # Output: {'name': 'Aung Aung', 'age': 25, 'address': 'Yangon', 'names': 'Mg Mg'}

#loop through dictionary
for key in dictionary:
    print(key, dictionary[key])


dictionary ={} # Empty  now dictionary is empty
print(dictionary) # Output: {}


