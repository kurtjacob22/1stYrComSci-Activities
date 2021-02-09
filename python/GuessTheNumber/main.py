from os import error
import requests
import random

class points:
    def __init__(self, limitPoints, deduct):
        self.limitPoints = limitPoints
        self.deduct = deduct
            
    def decreasePoint(self):
        self.limitPoints = self.limitPoints - self.deduct
        return self.limitPoints
    
    def returnScore(self):
        return self.limitPoints

class clue:
    def generateClue(random, scoreDB): #! requires integer and points object
        link = requests.get(f'http://numbersapi.com/{random}/trivia?fragment') 
        scoreDB.decreasePoint()
        return link.text
  

def main():
    score = points(20, 1)
    randomNumber = random.randrange(1,10)
    print(randomNumber)
    inputNumber = int(input("Enter a Number : "))
    
    while inputNumber != randomNumber:
        if inputNumber < randomNumber:
            print(f"HIGHER! HINT: {clue.generateClue(randomNumber, score)}")
            inputNumber = int(input("Enter a Number : "))        
        else:
            print(f"HIGHER! HINT: {clue.generateClue(randomNumber, score)}")
            inputNumber = int(input("Enter a Number : "))
            
    print(f"CORRECT!")
    print(score.returnScore())

if __name__ == '__main__':
    main()
    