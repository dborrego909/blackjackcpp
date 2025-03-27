#include "./include/Cards.h"


Cards::Cards() {
}
  
Cards::Cards(string s, string r, int v) {
  suit = s;
  rank = r;
  value = v;
}

void Cards::display_card() const {
  cout << rank << " of " << suit << " : The value of this card is " << value << endl;
}

void Cards::set_face_values() {
  if ((rank == "Jack") || (rank == "Queen") || (rank == "King")) {
    value = 10;
  }
}
