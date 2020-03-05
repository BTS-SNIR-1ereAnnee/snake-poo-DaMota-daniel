/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include "snake.h"
#include <unistd.h>

using namespace std;

//https://github.com/ajpaulson/learning-ncurses/blob/master/kbhit.c

int kbhit(void)    /* comment */
{
    int ch, r;

    // turn off getch() blocking and echo
    nodelay(stdscr, TRUE);
    //noecho();

    // check for input
    ch = getch();
    if( ch == ERR)      // no input
            r = FALSE;
    else                // input
    {
            r = TRUE;
            ungetch(ch);
    }

    // restore block and echo
    echo();
    nodelay(stdscr, FALSE);
    return(r);
}

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    snake serpent(10,4);

	

	//serpent.mangerPomme();
	//keypad (stdscr,true);
	//noecho();
	/*while (true)
	{
			
		//if(kbhit()) {
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

			serpent.affichSerpent();*/
		
		//}else{ //move left
//			serpent.moveLeft();

		//}

	}
    //getchar();
    fenetre->kill();
    return 0;
};
