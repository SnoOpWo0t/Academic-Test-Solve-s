student_scores = {
    "Harry": 91,
    "Ron": 78,
    "Hermione": 99,
    "Draco": 74,
    "Neville": 62,
}
student_grade = {} #another dictionary for grade
score = 0
for i in student_scores:
    score = student_scores[i] #student_score["harry"] which is 91

    if score > 90:
        student_grade[i] = "Outstanding"
       
    elif score > 80:
        student_grade[i] = "Exceeds Expectations"
    elif score > 70:
        student_grade[i] = "Acceptable"
    else:
        student_grade[i] = "Fail"

print(student_grade)
