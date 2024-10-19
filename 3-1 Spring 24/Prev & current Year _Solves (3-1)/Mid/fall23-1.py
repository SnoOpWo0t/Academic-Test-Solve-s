def fun(*a):
    su = sum(a)
    avg = su / len(a)
    return su , avg
print(fun(1,2))
adition =0
my_list = [1,2,3,4,5,6,7,8,9,10] 
out = my_list[-2:-9:-2]#9,8,7,3,2
for i in out :
    if(i/2==0):
        adition +=1
print(adition)
    