#ifndef STRUCTURES_H
#define STRUCTURES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

char dictionary[386264][15];

const int nbWords = 386264;
int sizeWords[400000];

int numberDraw = 0;

struct player
{
  int score;
  char player_letters [7];
  int ia;
}; 


struct token /* structure representant la piece jouée */
{
  char letter; /*lettre contenue dans la piece */
  int value;  /* valeur de la lettre*/
}; 

struct wordScrabble
{
	char letters[15];
	int x;
	int y;
	int l;
	int position; // 0 = Vertical, 1 = Horizontale
};

struct letterValue
{
	char * letters;
	int value;
};

struct box
{
  int bonus;
  struct token tok; /* nous informe si la case est remplie ou non, si oui elle contient le caractere present dans la case */
};

struct letterValue valuesLetter[7];
int nbValueLetter=7;

char letters[102];
int letterUsed=0;


//Cyan boxes
int cynBoxes[24][2]=
{
	{0,3},{0,11},{2,6},{2,8},{3,0},{3,7},
	{3,14},{11,0},{11,7},{11,14},{12,6},{12,8},
	{14,3},{14,11},{6,2},{6,6},{6,8},{6,12},
	{7,3},{7,11},{8,2},{8,6},{8,8},{8,12}
};
int nbCyans = 24;

int blueBoxes[12][2]=
{
	{1,5},{1,9},{5,1},{5,5},{5,9},{5,13},
	{9,1},{9,5},{9,9},{9,13},{13,5},{13,9}
};
int nbBlues=12;

#endif
