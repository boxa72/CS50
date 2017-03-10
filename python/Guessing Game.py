# This is a guessing game with numbers.
import random

print('Hello. What is your name?')
name = input()

print('Well, ' + name + ', i am thinking of a number between 1 and 20.')
secretNum = random.randint(1, 20)

for guessesTaken in range(1, 7):
    print('Take a guess.')
    guess = int(input())

    if guess < secretNum:
        print('Your guess is too low.')
    elif guess > secretNum:
        print('Your guess was too high.')
    else:
        break #This condition is for the correct guess!

if guess == secretNum:
    print('Great work ' + name + '! You guessed my number in ' + str(guessesTaken) + ' guesses')
else:
    print('Nope. The number I was thinking of was ' + str(secretNum))


