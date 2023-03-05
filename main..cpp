#include <iostream>
#include "Human.cpp"
#include "Computer.cpp"
#include "Referee.cpp"

using namespace std;

int main(){
    Human player;
    player.setHumanMove();
    player.getHumanMove();

    player.setNumGames();
    player.getNumGames();

    int games;
    games = player.getNumGames();

    Computer comp(games);
    comp.getComputerMove();

    Referee ref(games);
    ref.play();
    ref.results();

    return 0;
}