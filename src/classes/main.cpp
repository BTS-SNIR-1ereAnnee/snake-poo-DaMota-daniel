/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include "snake.h"


using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    snake serpent(10,4);

	

	serpent.mangerPomme();
	keypad (stdscr,true);
	noecho();
	while (getch() != 27)
	{

		switch (getch()){
			case 259:
				
				serpent.moveUp();
				break;	
			case 260:
				serpent.moveLeft();
				break;	
			case 258:
				serpent.moveDown();
				break;

			case 261:
				serpent.moveRight();
				break;		
		}

		serpent.drawPoint();
	
	}
    getchar();
    fenetre->kill();
    return 0;
};
