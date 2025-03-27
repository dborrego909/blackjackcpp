// #include "./include/Deck.h"
// #include "./include/Game.h"
// #include "./include/Player.h"
#include <algorithm>
#include "./include/Cards.h"

#include <iostream>
#include <string>
// #include <random>
using namespace std;


int main() {

  Cards deck[52];
  Cards::create_deck(deck);

  for (int i = 0; i < 52; i++) {
    deck[i].display_card();
  }

  return 0;
}

