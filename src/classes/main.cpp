/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include "snake.h"
#include <unistd.h>

int usleep(useconds_t usec);

using namespace std;

//https://github.com/ajpaulson/learning-ncurses/blob/master/kbhit.c

#define  TOUCHE_KEY_UP 1
#define  TOUCHE_KEY_DOWN 2
#define  TOUCHE_KEY_LEFT 3
#define  TOUCHE_KEY_RIGHT 4

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
    int derniereDir=TOUCHE_KEY_DOWN;
    
    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    snake serpent(10,4);

	

	serpent.mangerPomme();
	keypad (stdscr,true);
	noecho();
	while (true)
	{
			
		if(kbhit()) {
			switch (getch()){
				case 259:
					derniereDir = TOUCHE_KEY_UP;
					serpent.move(TOUCHE_KEY_UP);
					break;	
				case 260:
					derniereDir = TOUCHE_KEY_LEFT;
					serpent.move(TOUCHE_KEY_LEFT);
					break;	
				case 258:
				    derniereDir = TOUCHE_KEY_DOWN;
					serpent.move(TOUCHE_KEY_DOWN);
					break;
				case 261:
				    derniereDir = TOUCHE_KEY_RIGHT;
					serpent.move(TOUCHE_KEY_RIGHT);
					break;		
			}

			
		    
		}else{ //move left
		    serpent.move (derniereDir);	

		}
		serpent.affichSerpent();
        usleep (150000);
        
	}
    //getchar();
    fenetre->kill();
    return 0;
};
