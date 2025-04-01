// #include "include/Deck.h"
#include "include/Cards.h"
#include <random>
#include <vector>
#include "include/Dealer.h"
#include "include/Player.h"

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


// void open_deal(Player player) {
//   player
// }

void Dealer::deal_players(vector<Player*>& all_players) { // Deals two cards to all players and the dealer. 
  for (Player* player : all_players) {
    player->hit(this->player_hit());
    player->hit(this->player_hit());
  }
}

void Dealer::dealer_shuffle() {
  random_device rd; //This generates a simple seed for randomizer called rd
  mt19937 g(rd()); // This creates a more random seed called g from rd
  shuffle(deck.begin(), deck.end(), g); // This actually shuffles using the seed for randomness
}

Cards& Dealer::operator[](int index) {
  return deck[index];
}

const Cards& Dealer::operator[](int index) const {
  return deck[index];
} 
