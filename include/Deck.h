#ifndef DECK_H
#define DECK_H
#include <vector>
using namespace std;
#include <iostream>
#include "Cards.h"

class Deck {
  public:
  Deck();
  Cards& operator[](int index);
  const Cards& operator[](int index) const; 
  void deal(vector<Cards> &player_hand);

  private:
  vector<Cards> deck;
};
#endif 
