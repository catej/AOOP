# Dice game - a C++ dice game

Documented and developed by: Jeff Cate

<hr />

## How to Play:   

<br />

### ~~ Setup ~~
* Number of players: 100
* How many dice: 20

### ~~ Gameplay ~~
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

- [ ] C:Player
    - [ ] Fields
        - [ ] dice
        - [ ] int playerNumber
        - [ ] int sumOfDice
    - [ ] Methods
        - [ ] int getNumberOfDice
        - [ ] int getPlayerNumber
        - [ ] int getSingleDieValue(Die)
        - [ ] int getSumOfDice
        - [ ] Player& getWinner(Players[])
        - [ ] void displayWinner(Player&)
        - [ ] Player(+1 overload)
        - [ ] void setPlayerNumber(Players[])
