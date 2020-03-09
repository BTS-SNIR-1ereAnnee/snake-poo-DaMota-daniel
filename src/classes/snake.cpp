#include "Point.h"
#include "snake.h"
#include "Board.h"
#include <iostream>


using namespace std ;

snake::snake()
{

	for(int x = 0; x < longeur; x++)
	{
		serpent[x].setPoint(0,x);
	
	}

}


snake::snake(int x,int y)
{
	for(int d = 0; d < longeur; d++)
	{
		serpent[d].setPoint(x,d+y);
		
	}

}


void snake::mangerPomme()
{
	longeur = longeur + 1;
}

void snake::affichSerpent(){


	for(int d = 0; d < longeur; d++)
	{
		serpent[d].drawPoint();
		
	}

}

void snake::move(int direction)
{
    for(int d = 0; d < longeur-1; d++)
	{
	    serpent[d].erasePoint();
		serpent[d]= serpent[d+1];
		
	} 
    if(direction == 1)
    {
        serpent[longeur-1].moveUp();
    }
    
    else if(direction == 2)
    {
        serpent[longeur-1].moveDown();
    }
    else if(direction == 3)
    {
        serpent[longeur-1].moveLeft();
    }
     else if(direction == 4)
    {
        serpent[longeur-1].moveRight();
    }

}

