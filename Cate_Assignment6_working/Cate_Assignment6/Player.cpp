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
