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

   string SUITS[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

   string RANKS[] = {
    "Ace",
    "Two",
    "Three",
    "Four",
    "Five",
    "Six",
    "Seven",
    "Eight",
    "Nine",
    "Ten",
    "Jack",
    "Queen",
    "King"
  };
  int suit_size = sizeof(SUITS) / sizeof(SUITS[0]);
  int rank_size = sizeof(RANKS) / sizeof(RANKS[0]);
  // This is the suits
  Cards deck[52];
  int k = 0;
  for (int i = 0; i < suit_size; i++) {
    // This is the Ranks
    for (int j = 0; j < rank_size; j++) {
      Cards card(SUITS[i], RANKS[j], j + 1);
      deck[k] = card;
      k++;
    }
  }

  for (Cards& card : deck) {
    card.set_face_values();
  }


  for (Cards& card : deck) {
    card.display_card();
  }


  return 0;
}

