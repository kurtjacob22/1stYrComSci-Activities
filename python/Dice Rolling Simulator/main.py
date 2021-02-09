import random
import time

def main():
    
    __diceAssets__ = [
    '''
       .-------.
      /       /|
     /_______/ |
     |       | |
     |   o   | /
     |       |/
     '-------'
    ''',
    '''
       .-------.
      /       /|
     /_______/ |
     | o     | |
     |       | /
     |     o |/
     '-------'
    ''',
    '''
       .-------.
      /       /|
     /_______/ |
     | o     | |
     |   o   | /
     |     o |/
     '-------'
    ''',
    '''
       .-------.
      /       /|
     /_______/ |
     | o   o | |
     |       | /
     | o   o |/
     '-------'
    ''',
    '''
       .-------.
      /       /|
     /_______/ |
     | o   o | |
     |   o   | /
     | o   o |/
     '-------'
    ''',
    '''
       .-------.
      /       /|
     /_______/ |
     | o   o | |
     | o   o | /
     | o   o |/
     '-------'
    '''
    ]
    
    
    repeat = input('do you want to roll the dice ? input y to repeat, n to quit ')
        
    while True:
        print(f"\nThe result is: \n{__diceAssets__[random.randrange(1,7)-1]}")
        repeat = input('do you want to roll the dice again? input y to repeat, n to quit ')
        if repeat == 'n':
            break
        
    
    print('\nThankyou for using the dice')
    time.sleep(3)

if __name__ == '__main__':
    main()
    