// #include "include/Deck.h"
#include "./include/Cards.h"
#include "include/Dealer.h"
#include <vector>
#include "include/Player.h"


Player::Player() {
}

void Player::hit(Cards dealt_card) { // This is a request from the player to get an additional card. The argument would be the dealer method "player_hit()"
  player_hand.push_back(dealt_card);
}

// bool Player::is_bust() {
//
// }

void Player::show_hand() { // Show the players hand
  for (auto& card : this->player_hand) {
    cout << card;
  }
}

// void Player::add_card(Cards card) {
//   player_hand.push_back(card);
// }
void Player::get_cards() const {
  for (Cards card : player_hand) {
    cout << card;
  }
}
