class Vehicle :
    def __init__(self,speed,No_of_Wheel):
        self.speed = speed
        self.No_of_Wheel = No_of_Wheel
    def Information(self):
        print(f"speed :{self.speed} & wheel : {self.No_of_Wheel}" )

class Rickshaw(Vehicle):
    def __init__(self,speed,No_of_Wheel):
        super().__init__(speed,No_of_Wheel)
    def Information(self):
        speed_in_ms = self.speed * 1000 / 3600
        print(f"riickshaw speed in ms/h {speed_in_ms} and the wheels = {self.No_of_Wheel}")

class Car(Vehicle):
    def __init__(self, speed, No_of_Wheel,fuel_type ="gas"):
        super().__init__(speed, No_of_Wheel)
        self.fuel_type = fuel_type
    def Information(self):
    
        print(f"speed = {self.speed} wheel {self.No_of_Wheel} fulel {self.fuel_type}")

class Truck(Vehicle):
    def __init__(self,speed,No_of_Wheel,fuel_type ="disel"):
        super().__init__(speed,No_of_Wheel)
        self.fuel_type = fuel_type
        
rickshaw = Rickshaw(30, 3)  # Speed in Km/h and 3 wheels
rickshaw.Information()

# Creating a Car object
car = Car(120, 4)  # Speed in Km/h and 4 wheels, fuel is gas
car.Information()

# Creating a Truck object
truck = Truck(80, 6)  # Speed in Km/h and 6 wheels, fuel is diesel
truck.Information()