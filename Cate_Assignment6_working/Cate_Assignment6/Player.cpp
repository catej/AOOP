#include "Player.h"

Player::Player() {
    playerNumber = 1;
    sumOfDice = 0;
    Die dice[20];
    /*for (int i = 0; i < 20; i++) {
        dice[i] = Die();
    }*/
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