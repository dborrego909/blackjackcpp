#ifndef PLAYER_H
#define PLAYER_H
#include "Dealer.h"
#include "Cards.h"
#include "Deck.h"
#include <vector>

class Player {
public:
  Player();
  void hit(vector<Cards> deck);
  bool is_bust();
  void hit(Cards dealt_card);

private:
  vector<Cards> player_hand;
  int hand_value;

};

#endif
