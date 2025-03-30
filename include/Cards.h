#ifndef CARDS_H
#define CARDS_H
#include <iostream>
using namespace std;

class Cards {
public:
  Cards();
  Cards(string s, string r, int v);
  // void display_card() const; // Not needed because of operator overload for cout <<
  void set_face_values();
  bool is_ace();
  friend ostream& operator<<(ostream &COUT, Cards &playing_card);

private:
  int value;
  string suit;
  string rank;

};

#endif
