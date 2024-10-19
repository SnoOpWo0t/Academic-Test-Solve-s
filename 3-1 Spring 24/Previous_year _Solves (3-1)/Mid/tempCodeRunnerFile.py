class dog(Animal):
    def __init__(self,name,breed,color="red"):
        super().__init__(name,color="red")
        self.breed= breed
    def sound(self):
        super.sound()
        print("bark")
german = Animal(name="robin",color ="blue")
german.sound()