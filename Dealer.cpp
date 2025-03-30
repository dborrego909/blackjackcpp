#include "include/Deck.h"
#include "include/Cards.h"
#include <random>
#include <vector>
#include "include/Dealer.h"

Dealer::Dealer() {
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

Cards Dealer::player_hit() {
  Cards top_card = deck.back();
  deck.pop_back();
  return top_card;
}

void Dealer::deal_players(vector<Cards> player_hand) {
  
}

void Dealer::dealer_shuffle() {
  random_device rd;
  mt19937 g(rd());
  shuffle(deck.begin(), deck.end(), g);
}

Cards& Deck::operator[](int index) {
  return deck[index];
}

const Cards& Deck::operator[](int index) const {
  return deck[index];
}
