#include <iostream>
#include "Point.h"
#include "Board.h"




class snake 
{
public:

// constructeur par défautl

	snake();
// constucteur 

	snake (int x, int y);

    void changerDirection(int direction);
 
	
	void mangerPomme();
	/**
    *   dessine le point
    */
	void affichSerpent();
   
	
private: 
	
	Point serpent[50];

	int longeur = 3;

};
