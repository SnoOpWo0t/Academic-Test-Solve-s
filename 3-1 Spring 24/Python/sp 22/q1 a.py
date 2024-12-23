def ab(list) :
    odd =[]

    for i in range(len(list)):
        if i %2 !=0:
            odd.append(list[i])
    maxx = max(odd)
    print(maxx)
            
             
    
listt = [1,2,3,-466,44,7]
ab(listt)