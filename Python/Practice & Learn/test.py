stud = {
    "akhi" :0,
    "sai" : 80,
    "faial" :90,
    "fahad" : 900
}
def fun(stud):
    highest_scores = 0
    scores = 0
    for i in stud:
        if stud[i] > scores :
            scores = stud[i]
            
    highest_scores = scores
    print(f"highest_scores is {highest_scores} and student name is {i}")
fun(stud)