#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <limits>

class Player
{
   public:

      Player(std::string const& name) : name(name), hands_won(0) {}

      virtual ~Player() {}

      virtual void play() = 0;

      virtual void printWinningMessage() = 0;

      std::string hand;
      std::string name;
      int hands_won;
};

class HumanPlayer : public Player
{
   public:

      HumanPlayer(std::string const& name) : Player(name) {}

      virtual void play()
      {
         std::cout << "\nWhat will you chose? rock, paper, or scissors? ";
         std::cin >> hand;//player makes choice
      }

      virtual void printWinningMessage()
      {
         std::cout << "You win!" << std::endl;
      }
};

class ComputerPlayer : public Player
{
   public:

      ComputerPlayer(std::string const& name) : Player(name) {}

      void play()
      {
         std::string choices[3]{"rock", "paper", "scissors"};
         hand = choices[std::rand()%3]; //select rock, paper, or scissors at random
      }

      virtual void printWinningMessage()
      {
         std::cout << name << " wins!" << std::endl;
      }
};

enum TopLevelChoice { PLAY_GAME, EXIT_GAME };
enum PlayMode { HUMAN_VS_COMPUTER, COMPUTER_VS_COMPUTER };

TopLevelChoice get_toplevel_choice();
PlayMode get_play_mode();
void play_game();
void play_game(Player& player1, Player& player2);
void play_human_vs_computer();
void play_computer_vs_computer();
void pick_round_winner(Player& player1, Player& player2);
void print_winner(Player& player1, Player& player2);
bool is_game_over(Player& player1, Player& player2);

int main()
{   
   std::srand(time(NULL));
   while ( get_toplevel_choice() != EXIT_GAME )
   {
      play_game();
   }
   return 0;
}

TopLevelChoice get_toplevel_choice()
{
   std::cout << "---------------------------------------------------\n";
   std::cout << "Welcome to Rock, Paper, Scissors.\nTo play, type '1'. \nTo exit, type '2'.\n";
   std::cout << "---------------------------------------------------\n";
   int choice;
   std::cin >> choice;
   if ( std::cin ) // Reading was successful.
   {
      switch (choice)
      {
         case 1:
            return PLAY_GAME;
         case 2:
            return EXIT_GAME;
         default:
            std::cout << "You made an invalid choice. Try again...\n";
      }
      return get_toplevel_choice();
   }
   else
   {
      std::cout << "You made an invalid choice. Try again...\n";

      // Clear the stream
      std::cin.clear();

      // Skip bad input
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

      // Try again.
      return get_toplevel_choice();
   }
}

PlayMode get_play_mode()
{
   std::cout << "-------------------------------------------\n";
   std::cout << "Select a mode: \n";
   std::cout << "1. human vs computer\n2. computer vs computer\n";
   std::cout << "-------------------------------------------\n";
   int mode;
   std::cin >> mode;
   if ( std::cin ) // Reading was successful.
   {
      switch (mode)
      {
         case 1:
            return HUMAN_VS_COMPUTER;
         case 2:
            return COMPUTER_VS_COMPUTER;
         default:
            std::cout << "You made an invalid choice. Try again...\n";
      }
      return get_play_mode();
   }
   else
   {
      std::cout << "You made an invalid choice. Try again...\n";

      // Clear the stream
      std::cin.clear();

      // Skip bad input
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

      // Try again.
      return get_play_mode();
   }
}

void play_game()
{
   PlayMode choice = get_play_mode();
   if ( choice == HUMAN_VS_COMPUTER )
   {
      play_human_vs_computer();
   }
   else
   {
      play_computer_vs_computer();
   }
}

void play_game(Player& player1, Player& player2)
{
   do
   {
      player1.play();
      player2.play();

      //display each player's choice for the round
      std::cout << std::endl;
      std::cout << player1.name << " chose : " << player1.hand << std::endl;
      std::cout << player2.name << " chose : " << player2.hand << std::endl;

      if  (player1.hand == player2.hand) 
      {
         // The round was a draw 
         // Play next round
         std::cout << "        It's a draw!";
         continue;
      }

      // Pick the winner of this round
      pick_round_winner(player1, player2);

   } while ( !is_game_over(player1, player2));

   print_winner(player1, player2);
}


void play_human_vs_computer()
{
   std::string name;
   std::cout << "Enter your name: ";
   std::cin >> name;

   HumanPlayer humanPlayer(name);
   ComputerPlayer computerPlayer("Computer");
   play_game(humanPlayer, computerPlayer);
}

void play_computer_vs_computer()
{
   ComputerPlayer computerPlayer1("Computer 1");
   ComputerPlayer computerPlayer2("Computer 2");
   play_game(computerPlayer1, computerPlayer2);
}

void pick_round_winner(Player& player1, Player& player2)
{
   // We have already taken care of the draw.
   if  ( (player1.hand == "rock" && player2.hand == "scissors") ||
         (player1.hand == "scissors" && player2.hand == "paper") ||
         (player1.hand == "paper" && player2.hand == "rock") )
   {
      player1.printWinningMessage();
      player1.hands_won += 1;
   }
   else
   {
      player2.printWinningMessage();
      player2.hands_won += 1;
   }
}

void print_winner(Player& player1, Player& player2)
{
   Player& winner = (player1.hands_won == 2) ? player1 : player2;
   std::cout << "Congratulations, " << winner.name << ". You win the game!\n";
}

bool is_game_over(Player& player1, Player& player2)
{
   return (player1.hands_won == 2 || player2.hands_won == 2);
}