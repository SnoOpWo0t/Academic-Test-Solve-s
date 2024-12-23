class Employee:
    def __init__(self, name, age, salary):
        self.name = name
        self.age = age
        self.salary = salary

    def display_details(self):
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")
        print(f"Salary: {self.salary}")


class Fulltime(Employee):
    def __init__(self, name, age, salary, bonus):
        super().__init__(name, age, salary)
        self.bonus = bonus

    def cal_sal(self):
        tot_sal = self.salary + self.bonus
        print(f"Total Salary (with bonus): {tot_sal}")


class Part_time(Employee):
    def __init__(self, name, age, salary, hours_worked):
        super().__init__(name, age, salary)
        self.hours_worked = hours_worked

    def cal_payment(self, hour_rate):
        payment = self.hours_worked * hour_rate
        print(f"Total Payment: {payment}")


# Create objects for testing
fulltime_employee = Fulltime("John Doe", 30, 50000, 10000)
part_time_employee = Part_time("Jane Smith", 25, 0, 20)

part_time_employee.cal_payment(hour_rate=50)
