class Vehicle:
    def __init__(self,brand,model, year):
        self.brand = brand
        self.model = model
        self.year = year
    def describe(self):
        print(f"brand is {self.brand} \n model : {self.model} \n manufacture year is : {self.year}")

class Car(Vehicle):
    def __init__(self,brand , model, year ,mileage =50):
        super().__init__(brand,model,year)
        self.mileage = mileage
    
    def calculate_milage(self):
        return print(f"{self.brand} mileage is {self.mileage}") 
honda = Car(brand ="HYUNDAI",model ="civic",year =2020)
honda.brand
honda.describe()
honda.calculate_milage()