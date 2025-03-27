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

private:
  int value;
  string suit;
  string rank;

};

#endif
