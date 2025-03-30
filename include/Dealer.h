#ifndef DEALER_H
#define DEALER_H
#include "Cards.h"
#include "Deck.h"
#include <vector>
#include <random>
#include <algorithm>


class Dealer {
public:
  Dealer();
  void deal_players(vector<Cards> player_hand);
  Cards player_hit(); // Returns top card of dealer deck and pops top card
  void dealer_shuffle(); // Shuffles the deck
  Cards& operator[](int index);
  const Cards& operator[](int index) const; 
  vector<Cards> deck; // Dealer owns the deck

private:
  vector<Cards> dealer_hand; // Dealer interacts with its deck to give to players
};

#endif
