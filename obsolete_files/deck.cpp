#include "./include/Deck.h"
#include "./include/Cards.h"
#include <vector>
#include <random>
#include <algorithm>


Deck::Deck () {

   
  string SUITS[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
  string RANKS[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
  "Nine", "Ten", "Jack", "Queen", "King"};


  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 13; j++) {
      Cards card(SUITS[i], RANKS[j], j + 1);
      card.set_face_values();
      deck.push_back(card);
    }
  }
}

Cards& Deck::operator[](int index) {
  return deck[index];
}

const Cards& Deck::operator[](int index) const {
  return deck[index];
}

void Deck::deal(vector<Cards> &player_hand) {
  Cards top_card = deck.back();
  player_hand.push_back(top_card);
  deck.pop_back();
}

void Deck::shuffle_deck() {
  random_device rd;
  mt19937 g(rd());
  shuffle(deck.begin(), deck.end(), g);
}
