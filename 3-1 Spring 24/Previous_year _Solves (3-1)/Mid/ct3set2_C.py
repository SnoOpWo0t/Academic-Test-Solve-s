class Student:
    def __init__(self, student_id , major):
        self.student_id = student_id
        self.major = major
    def display_student_info(self):
        print(f"{self.student_id} and {self.major}")
class Employee :
    def __init__(self,employee_name):
        self.employee_name = employee_name
class Manager(Employee) :
    def __init__(self, employee_name,department):
        super().__init__(employee_name)
        self.department = department
    def show_manager_details(self):
        prints(f"{self.employee_name} , {self.department}")
    