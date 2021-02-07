# Coin game - a C++ coin game

Documented and developed by: Jeff Cate

<hr />

## How to Play:   

<br />

### ~~ Setup ~~

    1) A player has 3 coins
        1 quarter
        1 dime 
        1 nickel

### ~~ Round ~~

    1) Each round the player flips each coin once.
    2) If the coin lands heads up add the value to the player's balance.

### ~~ End of Game ~~

    1) The game is over when the player's balance is >= $1. 
    2) If the player's score = $1 exactly the player wins.
    3) If the player's score > $1 the player loses.


### To Do:

* [ ] Class: program
    * [ ] Fields
        * [ ] Game game
        * [ ] static? const string heads
        * [ ] static? const string tails

* [ ] Class: Game
    * [ ] Fields
        * [ ] Coin coin
            * [ ] Quarter
            * [ ] Dime
            * [ ] Nickel
        * [ ] double playerBalance
        * [ ] bool gameOver
    * [ ] Methods
        * [ ] Game
            * [ ] initialize player's balance
            * [ ] make each coin
        * [ ] void playGame
            * [ ] bool playRound
            * [ ] void displayResults
        * [ ] bool playRound
            * [ ] void flipEachCoin
            * [ ] void evaluateCoinFlips
            * [ ] bool checkGameOver
        * [ ] void displayResults

* [x] Class: Coin
    * [x] Fields
        * [x] bool heads
        * [x] string sideUp
        * [x] double value
    * [x] Methods
        * [x] Coin(double v) - randomly chose side up.
        * [x] bool getHeads()
        * [x] string getSideUp()
        * [x] double getValue()
        * [x] void toss - decides heads up
            * [x] set sideUp
            * [x] set heads
