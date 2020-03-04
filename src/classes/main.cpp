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

    Point p(10,4);
    Point p2(10,5);
    snake serpent(10,4);
    //cout << "press any key to quit" << endl;
    p.moveUp(); 
    p.moveRight();
    p.drawPoint();
    p2.moveLeft();
    p2.moveDown();


    //cout << p2.getY();
    //p2.setY(10);
    p2.drawPoint();	
    p.erasePoint();

    getchar();
    fenetre->kill();
    return 0;
}
