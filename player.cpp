#include "include/Deck.h"
#include "./include/Cards.h"
#include "include/Dealer.h"
#include <vector>
#include "include/Player.h"


Player::Player() {
}

void Player::hit(Cards dealt_card) {
  player_hand.push_back(dealt_card);
}

bool Player::is_bust() {

}
