#Nesting List in a Dictionary
capitals = {
    'India': ['New Delhi', 'Mumbai', 'Bangalore'],
    'Australia': ['Canberra', 'Sydney', 'Melbourne'],
#    A dictionary in a dictionary
    'france' : {"cites_visited":["Paris", "Lyon", "Nice"]},
}
print(capitals['france']['cites_visited'][0])
print(capitals['france']['cites_visited'])
print(capitals['India'])



