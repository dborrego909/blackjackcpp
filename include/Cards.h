#ifndef CARDS_H
#define CARDS_H
#include <iostream>
using namespace std;

class Cards {
public:
  Cards();
  Cards(string s, string r, int v);
  void display_card() const;
  void set_face_values();
  bool is_ace();
  // static void create_deck(Cards array_deck[52]);  //This is going to be moved to the deck class.

private:
  int value;
  string suit;
  string rank;

};

#endif
