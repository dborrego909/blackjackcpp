#include <iostream>
#include "./include/Cards.h"
#include "./include/Dealer.h"
#include "include/Deck.h"
#include "include/Player.h"
using namespace std;

void display_deck_test(vector<Cards> deal_deck) {
  for (int i = 0; i < 52; i++) {
    cout << deal_deck[i];
  }
}

int main() {

  Dealer dealer;

  dealer.dealer_shuffle();

  Cards card1 = dealer.player_hit();
  Cards card2 = dealer.player_hit();

  cout << card1 << card2;

  return 0;
}
