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

void snake::moveDown()
{
	
	
 	for(int d = 0; d < longeur-1; d++)
	{
	    serpent[d].erasePoint();
		serpent[d]= serpent[d+1];
		
	} 
    serpent[longeur-1].moveDown();
}

void snake::moveUp()
{
	
    
	
 	for(int d = 0; d < longeur-1; d++)
	{
	    serpent[d].erasePoint();
		serpent[d]= serpent[d+1];
		
	}
	serpent[longeur-1].moveUp();
}

void snake::moveRight()
{
   
	
 	for(int d = 0; d < longeur-1; d++)
	{
	    serpent[d].erasePoint();
		serpent[d]= serpent[d+1];
		
	} 
	serpent[longeur-1].moveRight();
}
void snake::moveLeft()
{
    
	
 	for(int d = 0; d < longeur-1; d++)
	{
	    serpent[d].erasePoint();
		serpent[d]= serpent[d+1];
		
	}
	serpent[longeur-1].moveLeft(); 
}

void snake::mangerPomme()
{
	longeur = longeur + 1;
}

void snake::drawPoint(){


	for(int d = 0; d < longeur; d++)
	{
		serpent[d].drawPoint();
		
	}

}


