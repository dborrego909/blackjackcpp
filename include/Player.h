#ifndef PLAYER_H
#define PLAYER_H
#include "Dealer.h"
#include "Cards.h"
#include "Deck.h"

#include <vector>
class Players {
public:
  Players();
  void hit(vector<Cards> deck);
  bool is_bust();

private:
  vector<Cards> player_hand;
  int hand_value;

};

#endif
