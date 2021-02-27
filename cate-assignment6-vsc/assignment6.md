# Dice game - a C++ dice game

Documented and developed by: Jeff Cate

<hr />

## How to Play:   

<br />

### ~~ Setup ~~
* Number of players: 100
* How many dice: 20

### ~~ Game play ~~
* Each player rolls each die one time.

### ~~ The Winner ~~
* The winner is the player with the highest score after every payer has rolled every die.

### To Do:
- [x] C:Die
    - [x] Fields
        - [x] dieValue
    - [x] Methods
        - [x] Die
        - [x] getValue
        - [x] roll

- [x] C:Player
    - [x] Fields
        - [x] dice
        - [x] int playerNumber
        - [x] int sumOfDice
    - [ ] Methods
        - [x] int getNumberOfDice
        - [x] int getPlayerNumber
        - [x] int getSingleDieValue(Die)
        - [x] int getSumOfDice
        <!-- - [ ] Player(+1 overload) -->
        - [x] play

- [x] Cate_Assignment6.cpp
    - [x] Methods
        - [x] int main()
            - setPlayerNumber
            - displayWinner
        - [x] void setPlayerNumber(Players[])
        - [x] void displayWinner(Player&)
        - [ ] Player& getWinner(Players[])
