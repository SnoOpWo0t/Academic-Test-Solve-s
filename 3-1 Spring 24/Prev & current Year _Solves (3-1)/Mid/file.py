file_path = "file-test.txt"
with open (file_path,"w") as file :
    content =file.write("most outer text with W write  Text1")
with open(file_path,"w") as file :
    content =file.write("2. second text Text2 \n") #overritten text1
with open(file_path, "a") as file :
    content = file.write("3. Third text3 \n")  # doesnt remove the previous text

with open(file_path,"r") as file : # Read shows the written data on CONSOLE
    content_read = file.read()
    print(content_read)
with open(file_path,"r") as file :
    for line in file :
        print(line.strip()) #strip removes the (\n)newline  & shows data in next line

'''
try:
    with open("example.txt", "r") as file:
        content = file.read()
        print(content)
except FileNotFoundError:
    print("The file does not exist.")
except PermissionError:
    print("Permission error. Unable to read the file.")
except Exception as e:
    print(f"An error occurred: {e}")
'''