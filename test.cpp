#include <iostream>
#include "./include/Cards.h"
#include "./include/Dealer.h"
// #include "include/Deck.h"
#include "include/Player.h"
using namespace std;



int main() {

  Dealer dealer;
  Player player1, player2, player3;

  vector<Player*> all_players = {&player1, &player2, &player3};

  dealer.deal_players(all_players);

  int count = 1;
  for (Player* player : all_players) {
    cout << "This is the hand of player : " << count << endl;
    player->show_hand();
    count += 1;
    cout << endl;
  }

  return 0;
}
