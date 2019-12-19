#include<iostream>
#include "Dice.h"
#include<time.h>
#include "Space.h"
#include <array>
#include "Board.h"
#include "InfoSquare.h"
#include "GetInput.h"
#include "Card.h"
#include "CreateBoard.h"
#include "Player.h"
#include "TheGame.h"

using namespace std;

int main()
{
	Dice d6{};
	array<Player*, 6> p1;
	

	/*Space s1{"hubertsssssss sdfasdfsfsdfasdfsffsa", p1, 0};
	array<Space, 40> board;
	for (int x{ 0 }; x < 40;x++)
	{
		Space s2{ "space num" + to_string(x), p1, x };

		board[x] = s2;
	}
	board[0] = s1;*/
	array<Card, 20> cards;
	array<string, 40> pants{};
	Player banker{ "banker", "$",3,100, pants };
	array<Space*, 40> squares = CreateBoard::createBoard(p1, banker, cards, cards);
	
	array<array<InfoSquare, 3>, 3> infoSquares;
	Board b1{ squares, p1, infoSquares };
	int numPlayers = GetInput::getInt("How many players will play? (1-6) ", 1, 6);
	int startingCash = GetInput::getInt("How much should each have in starting cash? (0-5000): ", 0 , 5000);
	array<Player, 6> players;
	for (int i{ 0 }; i < numPlayers; i++)
	{
		string name = GetInput::getString("Player " + to_string(i) + "name: ");
		string icon = GetInput::getString("Player " + to_string(i) + "icon (@ # % ^ & * ? < > + =): ", { "@","#","%","^","&","*","?","<",">","+","=" });
		Player p {name, icon, 0, startingCash, b1.getNames()};
		players[i] = p;
	}
	for (int i{ 0 }; i < 6; i++)
	{
		p1[i] = &players[i];
	}

	b1.printBoard();
	
	string response;

	while (response != "q")
	{
		for (Player*& p : p1)
		{
			if (!p->isDefault())
			{
				(*p).takeTurn();
				squares[(*p).getPosition()]->action(*p);

				b1.printBoard();
			}
		}
	}

}