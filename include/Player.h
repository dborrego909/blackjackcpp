#ifndef PLAYER_H
#define PLAYER_H
#include "Dealer.h"
#include "Cards.h"
// #include "Deck.h"
#include <vector>

class Player {
public:
  Player();
  bool is_bust();
  // Cards get_card; // this is to return private data member
  void hit(Cards dealt_card);
  void get_cards () const ; 
  void show_hand();
  // void add_card(Cards card);
  vector<Cards> player_hand;

private:
  int hand_value;

};

#endif
