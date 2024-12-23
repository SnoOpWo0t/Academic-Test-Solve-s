from abc import ABC,abstractmethod
class LibraryItem(ABC):
    def __init__(self,title,author,public_date):
        self.title = title
        self.author = author
        self.public_date = public_date
    @abstractmethod
    def display_detail(self):
        pass
    def borrow(self):
        print(f"{self.title} borrowed")
    def returnn(self):
        print(f"{self.title} return")
        
class Book(LibraryItem):
    def __init__(self,title,author,public_date,isbn):
        super().__init__(title,author,public_date)
        self.isbn = isbn
    def display_detail(self):
        print(f"{self.title}")
        print(f"{self.isbn}")
class Magazine(LibraryItem):
     def __init__(self,title,author,public_date,issue_no):
        super().__init__(title,author,public_date)
        self.issue_no = issue_no
     def display_detail(self):
        print(f"{self.title}")
        print(f"{self.issue_no}")

book =Book("faisal",7,1,9)
mag = Magazine("ff","aa",89,8)
    
book.display_detail()
mag.display_detail()
