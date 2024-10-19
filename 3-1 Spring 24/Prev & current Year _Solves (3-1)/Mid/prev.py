class Myclass:
    def __init__(self,list):
        self.list = list
    def Maxlist(self):
        return max(self.list)
    def divisiblefive (self):
        for i in self.list:
            divisible = []
            if i%5==0:
                divisible.append(i)
                return divisible
        