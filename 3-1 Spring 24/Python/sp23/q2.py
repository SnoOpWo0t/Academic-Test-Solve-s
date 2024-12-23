from abc import ABC, abstractmethod
class LibraryItem(ABC):
    def __init__(self, title, author, publication_date):
        self.title = title
        self.author = author
        self.publication_date = publication_date
    @abstractmethod
    def display_details(self):
       pass
        
class Book(LibraryItem):
        def __init__(self,title,author,publication_date,isbn):
            super().__init__(title,author,publication_date)
            self.isbn =isbn
        def display_details(self):
              print(f"tile : {self.title} \n author : {self.author} \n  date : {self.publication_date}  \n ISBN :{self.isbn}")

class Magazine(LibraryItem):
    def __init__(self,title,author,publication_date,issue_no):
        super().__init__(title,author,publication_date)
        self.issue_no = issue_no
    def display_details(self):       
            print(f"tile : {self.title} \n author : {self.author} \n  date : {self.publication_date}  \n ISBN :{self.isbn}")
            print(f"issue no : {self.issue_no}")
        
book =Book("faisal","loves",1)
mag = Magazine("ff","aa",89)
    
book.display_details()
mag.display_details()


