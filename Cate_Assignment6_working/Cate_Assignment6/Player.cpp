#include "Player.h"

Player::Player() {
    playerNumber = -1;
    sumOfDice = 0;
}

int Player::getPlayerNumber() {
    return playerNumber;
}

int Player::getNumberOfDice() {
    return sizeof(dice) / sizeof(dice[0]);
}

void Player::setPlayerNumber(int n) {
    playerNumber = n;
}

int Player::getSingleDieValue(Die d) {
    return d.getValue();
}

int Player::getSumOfDice() {
    return sumOfDice;
}


void Player::play() {
    sumOfDice = 0;
    for (Die d : dice) {
        d.roll();
        sumOfDice += d.getValue();
    }
}
