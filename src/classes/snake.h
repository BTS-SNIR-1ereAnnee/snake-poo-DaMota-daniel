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
/**
        Move point up
    */
    void moveUp();
    /**
        Move point down
    */
    void moveDown();
    /**
        Move point left
    */
    void moveLeft();
    /**
        Move point up
    */
    void moveRight();
	
	void mangerPomme();
	/**
    *   dessine le point
    */
	void drawPoint();
   
	
private: 
	
	Point serpent[50];

	int longeur = 3;

};
