#include "./include/Cards.h"
#include <iomanip>

Cards::Cards() {
}
  
Cards::Cards(string s, string r, int v) {
  suit = s;
  rank = r;
  value = v;
}

void Cards::display_card() const {
  string formatted_text = rank + " of " + suit;
  cout << setw(20) << left << formatted_text << " : Value " << value << endl;
}

void Cards::set_face_values() {
  if ((rank == "Jack") || (rank == "Queen") || (rank == "King")) {
    value = 10;
  }
}

//This is going to create the deck. From what i understand arrays get passed in by refrences so it should change it on its own. 
void Cards::create_deck(Cards array_deck[52]) {
  string SUITS[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
  string RANKS[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
  "Nine", "Ten", "Jack", "Queen", "King"};

  //This nested for loop iterates through each array creating the cards with suits and ranks. We need an array of type Cards as an argument.
  int k = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 13; j++) {
      Cards card(SUITS[i], RANKS[j], j + 1);
      array_deck[k] = card;
      k++;
    }
  }
  for (int i = 0; i < 52; i++) {
    array_deck[i].set_face_values();
  }
}
