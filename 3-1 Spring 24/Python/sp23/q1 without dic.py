def pass_fail(marks, min_mark):
    for i, mark in enumerate(marks):
        if mark < min_mark:
            print(f"Student {i + 1} has failed.")
        elif mark > 80:
            print(f"Student {i + 1} has passed and got an A+.")
        else:
            print(f"Student {i + 1} has passed.")

min_mark = int(input("Enter the minimum mark: "))
listt = [33, 40, 80, 85]
pass_fail(listt, min_mark)
