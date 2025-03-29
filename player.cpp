#include "include/Deck.h"
#include "./include/Cards.h"
#include "include/Dealer.h"
#include <vector>
#include "include/Player.h"


Players::Players() {
}

void Players::hit(vector<Cards> deck) {
  Cards top_card = deck.back();
  player_hand.push_back(top_card);
  deck.pop_back();
}

bool Players::is_bust() {

}
