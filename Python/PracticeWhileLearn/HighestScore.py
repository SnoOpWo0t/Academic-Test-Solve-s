scores = [10, 20, 30, 40, 50]
highest = scores[0]
#highest = 0
length = len(scores)
for i in range(1,length):
    if scores[i] > highest:
        highest = scores[i]
print(f"the highest score is {highest}")



#Setting the initial value of highest to 0 can cause a problem because the logic only updates highest 
# if it encounters a score greater than the initial value. Here’s why it can be problematic: