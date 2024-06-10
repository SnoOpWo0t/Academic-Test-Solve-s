alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n',
            'o','p','q','r','s','t','u','v','w','x','y','z']

text = input("Etnter the text:")
direction = input("Enter the direction (encode/decode):")
text_shift = int(input("Enter the shift:"))


def caeser(text,shift,direction):
    new_text = ""
    if direction == "decode":   #TODO encode = positive shift(shift+ pos), decode = negative shift(shift- pos)
        shift *= -1
    for char in text:
        pos = alphabet.index(char) #alphabet.index(i)
        new_postion = pos + shift
  
    
caeser(text,text_shift,direction)