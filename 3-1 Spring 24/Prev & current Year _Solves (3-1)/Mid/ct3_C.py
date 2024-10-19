class Person:
    def __init__(self, nid,email):
        self.nid = nid
        self.email = email
    def display_fName(self,fullname = "afrin sultana akhi"):
        print(f"{self.fullname}")

class Course :
    def __init__(self, course_name):
        self.course_name = course_name

class OnlineCourse(Course) :
    def __init__(self,course_name,platform):
        super().__init__(course_name)
        self.platform = platform
    def display_course_info(self):
        print(f"course name : {self.course_name} and platform : {self.platform}")
    