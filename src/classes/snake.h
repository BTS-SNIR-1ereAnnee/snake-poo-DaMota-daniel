#include <iostream>
#include "Point.h"
#include "Board.h"

using namespace std;


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


private: 
	
	Point Points[50];

	int longeur = 3;

};
