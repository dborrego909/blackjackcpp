#ifndef DEALER_H
#define DEALER_H
#include "Cards.h"
#include "Deck.h"
#include <vector>

class Dealer {
public:
  Dealer();
  void deal_players(vector<Cards> player_hand);

private:
  Deck deck;

};

#endif
