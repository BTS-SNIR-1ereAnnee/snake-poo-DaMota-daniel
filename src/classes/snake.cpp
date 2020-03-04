#include "Point.h"
#include "snake.h"
#include "Board.h"
#include <iostream>


using namespace std ;

snake::snake()
{

	for(int x = 0; x < longeur; x++)
	{
		Points[x].setPoint(0,x);
	
	}

}


snake::snake(int x,int y)
{
	for(int d = 0; d < longeur; d++)
	{
		Points[d].setPoint(x,d+y);
		
	}

}

void snake::moveDown()
{
	Points[0].moveDown();
	
 	for(int d = 1; d < longeur; d++)
	{
		Points[d]= Points[d-1];
		
	} 
}

void snake::moveUp()
{
	
    Points[0].moveUp();
	
 	for(int d = 1; d < longeur; d++)
	{
		Points[d]= Points[d-1];
		
	} 
}

void snake::moveRight()
{
   Points[0].moveRight();
	
 	for(int d = 1; d < longeur; d++)
	{
		Points[d]= Points[d-1];
		
	} 
}
void snake::moveLeft()
{
    Points[0].moveLeft();
	
 	for(int d = 1; d < longeur; d++)
	{
		Points[d]= Points[d-1];
		
	} 
}

void snake::mangerPomme()
{
	longeur = longeur + 1;
}

