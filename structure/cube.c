#include "rubik.h"
#include <stdio.h>
#include <stdlib.h>
#include <err.h>

int* BorderCube(int a, int b)
{
  int WHITE  = 0;
  int GREEN  = 1;
  int RED    = 2;
  int ORANGE = 3;
  int BLUE   = 4;
  int YELLOW = 5;
  int *res = malloc(sizeof(int) * 4);
  if (a == WHITE && b == BLUE) {
    res[0] = 1; res[1] = 1; res[2] = 19;
  }else if (a == BLUE && b == WHITE) {
    res[0] = 1; res[1] = 19; res[2] = 1;

  }else if (a == WHITE && b == ORANGE) {
    res[0] = 3; res[1] = 3; res[2] = 10;
  }else if (a == ORANGE && b == WHITE) {
    res[0] = 3; res[1] = 10; res[2] = 3;

  }else if (a == WHITE && b == RED) {
    res[0] = 5; res[1] = 5; res[2] = 16;
  }else if (a == RED && b == WHITE) {
    res[0] = 5; res[1] = 16; res[2] = 5;

  }else if (a == WHITE && b == GREEN) {
    res[0] = 7; res[1] = 7; res[2] = 13;
  }else if (b == WHITE && a == GREEN) {
    res[0] = 7; res[1] = 13; res[2] = 7;

  }else if (a == BLUE && b == ORANGE) {
    res[0] = 9; res[1] = 32; res[2] = 21;
  }else if (b == BLUE && a == ORANGE) {
    res[0] = 9; res[1] = 21; res[2] = 32;

  }else if (a == ORANGE && b == GREEN) {
    res[0] = 11; res[1] = 23; res[2] = 24;
  }else if (b == ORANGE && a == GREEN) {
    res[0] = 11; res[1] = 24; res[2] = 23;

  }else if (a == RED && b == GREEN) {
    res[0] = 13; res[1] = 27; res[2] = 26;
  }else if (a == GREEN && b == RED) {
    res[0] = 13; res[1] = 26; res[2] = 27;

  }else if (a == RED && b == BLUE) {
    res[0] = 15; res[1] = 29; res[2] = 30;
  }else if (b == RED && a == BLUE) {
    res[0] = 15; res[1] = 30; res[2] = 29;

  }else if (b == YELLOW && a == ORANGE) {
    res[0] = 18; res[1] = 34; res[2] = 48;
  }else if (a == YELLOW && b == ORANGE) {
    res[0] = 18; res[1] = 48; res[2] = 34;

  }else if (b == YELLOW && a == GREEN) {
    res[0] = 20; res[1] = 37; res[2] = 46;
  }else if (a == YELLOW && b == GREEN) {
    res[0] = 20; res[1] = 46; res[2] = 37;

  }else if (b == YELLOW && a == RED) {
    res[0] = 22; res[1] = 40; res[2] = 50;
  }else if (a == YELLOW && b == RED) {
    res[0] = 22; res[1] = 50; res[2] = 40;

  }else if (a == BLUE && b == YELLOW) {
    res[0] = 24; res[1] = 43; res[2] = 52;
  }else if (a == YELLOW && b == BLUE) {
    res[0] = 24; res[1] = 52; res[2] = 43;
  }else{
    res[0] = 24; res[1] = 0; res[2] = 0;
  }
  printf("good %i %i  --> %i\n",a,b,res[0] );
  return res;
}

int* CornerCube(int a, int b, int c)
{
  int WHITE  = 0;
  int GREEN  = 1;
  int RED    = 2;
  int ORANGE = 3;
  int BLUE   = 4;
  int YELLOW = 5;
  int* res = malloc(sizeof(int) * 4);

  if (a == WHITE && b == ORANGE && c == BLUE) {
    res[0] = 0; res[1] = 0; res[2] = 9; res[3] = 20;
  }else if (a == ORANGE && b == BLUE && c == WHITE) {
    res[0] = 0; res[1] = 9; res[2] = 20; res[3] = 0;
  }else if (a == BLUE && b == WHITE && c == ORANGE) {
    res[0] = 0; res[1] = 20; res[2] = 0; res[3] = 9;

  }else if (a == WHITE && b == BLUE && c == ORANGE) {
    res[0] = 0; res[1] = 0; res[2] = 20; res[3] = 9;
  }else if (a == ORANGE && b == WHITE && c == BLUE) {
    res[0] = 0; res[1] = 9; res[2] = 0; res[3] = 20;
  }else if (a == BLUE && b == ORANGE && c == WHITE) {
      res[0] = 0; res[1] = 20; res[2] = 9; res[3] = 0;


  }else if (a == WHITE && b == RED && c == BLUE) {
    res[0] = 2; res[1] = 2; res[2] = 17; res[3] = 18;
  }else if (a == BLUE && b == WHITE && c == RED) {
    res[0] = 2; res[1] = 18; res[2] = 2; res[3] = 17;
  }else if (a == RED && b == BLUE && c == WHITE) {
    res[0] = 2; res[1] = 17; res[2] = 18; res[3] = 2;

  }else if (a == WHITE && b == BLUE && c == RED) {
    res[0] = 2; res[1] = 2; res[2] = 18; res[3] = 17;
  }else if (a == BLUE && b == RED && c == WHITE) {
    res[0] = 2; res[1] = 18; res[2] = 17; res[3] = 2;
  }else if (a == RED && b == WHITE && c == BLUE) {
    res[0] = 2; res[1] = 17; res[2] = 2; res[3] = 18;


  }else if (a == WHITE && b == ORANGE && c == GREEN) {
    res[0] = 6; res[1] = 6; res[2] = 11; res[3] = 12;
  }else if (a == GREEN && b == WHITE && c == ORANGE) {
    res[0] = 6; res[1] = 12; res[2] = 6; res[3] = 11;
  }else if (a == ORANGE && b == GREEN && c == WHITE) {
    res[0] = 6; res[1] = 11; res[2] = 12; res[3] = 6;

  }else if (a == WHITE && b == GREEN && c == ORANGE) {
    res[0] = 6; res[1] = 6; res[2] = 12; res[3] = 11;
  }else if (a == GREEN && b == ORANGE && c == WHITE) {
    res[0] = 6; res[1] = 12; res[2] = 11; res[3] = 6;
  }else if (a == ORANGE && b == WHITE && c == GREEN) {
    res[0] = 6; res[1] = 11; res[2] = 6; res[3] = 12;


  }else if (a == WHITE && b == GREEN && c == RED) {
    res[0] = 8; res[1] = 8; res[2] = 14; res[3] = 15;
  }else if (a == RED && b == WHITE && c == GREEN) {
    res[0] = 8; res[1] = 15; res[2] = 8; res[3] = 14;
  }else if (a == GREEN && b == RED && c == WHITE) {
    res[0] = 8; res[1] = 14; res[2] = 15; res[3] = 8;

  }else if (a == WHITE && b == RED && c == GREEN) {
    res[0] = 8; res[1] = 8; res[2] = 15; res[3] = 14;
  }else if (a == RED && b == GREEN && c == WHITE) {
    res[0] = 8; res[1] = 15; res[2] = 14; res[3] = 8;
  }else if (a == GREEN && b == WHITE && c == RED) {
    res[0] = 8; res[1] = 14; res[2] = 8; res[3] = 15;




  }else if (a == ORANGE && b == BLUE && c == YELLOW) {
    res[0] = 17; res[1] = 33; res[2] = 44; res[3] = 51;
  }else if (a == BLUE && b == YELLOW && c == ORANGE) {
    res[0] = 17; res[1] = 44; res[2] = 51; res[3] = 33;
  }else if (a == YELLOW && b == ORANGE && c == BLUE) {
    res[0] = 17; res[1] = 51; res[2] = 33; res[3] = 44;

  }else if (a == ORANGE && b == YELLOW && c == BLUE) {
    res[0] = 17; res[1] = 33; res[2] = 51; res[3] = 44;
  }else if (a == BLUE && b == ORANGE && c == YELLOW) {
    res[0] = 17; res[1] = 44; res[2] = 33; res[3] = 51;
  }else if (a == YELLOW && b == BLUE && c == ORANGE) {
    res[0] = 17; res[1] = 51; res[2] = 44; res[3] = 33;

  }else if (a == ORANGE && b == GREEN && c == YELLOW) {
    res[0] = 19; res[1] = 35; res[2] = 36; res[3] = 45;
  }else if (a == YELLOW && b == ORANGE && c == GREEN) {
    res[0] = 19; res[1] = 45; res[2] = 35; res[3] = 36;
  }else if (a == GREEN && b == YELLOW && c == ORANGE) {
    res[0] = 19; res[1] = 36; res[2] = 45; res[3] = 35;

  }else if (a == ORANGE && b == YELLOW && c == GREEN) {
    res[0] = 19; res[1] = 35; res[2] = 45; res[3] = 36;
  }else if (a == YELLOW && b == GREEN && c == ORANGE) {
    res[0] = 19; res[1] = 45; res[2] = 36; res[3] = 35;
  }else if (a == GREEN && b == ORANGE && c == YELLOW) {
    res[0] = 19; res[1] = 36; res[2] = 35; res[3] = 45;


  }else if (a == GREEN && b == RED && c == YELLOW) {
    res[0] = 21; res[1] = 38; res[2] = 39; res[3] = 47;
  }else if (a == YELLOW && b == GREEN && c == RED) {
    res[0] = 21; res[1] = 47; res[2] = 38; res[3] = 39;
  }else if (a == RED && b == YELLOW && c == GREEN) {
    res[0] = 21; res[1] = 39; res[2] = 47; res[3] = 38;

  }else if (a == GREEN && b == YELLOW && c == RED) {
    res[0] = 21; res[1] = 38; res[2] = 47; res[3] = 39;
  }else if (a == YELLOW && b == RED && c == GREEN) {
    res[0] = 21; res[1] = 47; res[2] = 39; res[3] = 38;
  }else if (a == RED && b == GREEN && c == YELLOW) {
    res[0] = 21; res[1] = 39; res[2] = 38; res[3] = 47;


  }else if (a == RED && b == BLUE && c == YELLOW) {
    res[0] = 23; res[1] = 41; res[2] = 42; res[3] = 53;
  }else if (a == YELLOW && b == RED && c == BLUE) {
    res[0] = 23; res[1] = 53; res[2] = 41; res[3] = 42;
  }else if (a == BLUE && b == YELLOW && c == RED) {
    res[0] = 23; res[1] = 42; res[2] = 53; res[3] = 41;

  }else if (a == RED && b == YELLOW && c == BLUE) {
    res[0] = 23; res[1] = 41; res[2] = 53; res[3] = 42;
  }else if (a == YELLOW && b == BLUE && c == RED) {
    res[0] = 23; res[1] = 53; res[2] = 42; res[3] = 41;
  }else if (a == BLUE && b == RED && c == YELLOW) {
    res[0] = 23; res[1] = 42; res[2] = 41; res[3] = 53;
}
  else{
    printf("case error %i %i %i\n",a,b,c );
    res[0] = 0; res[1] = 0; res[2] = 0; res[3] = 0;
  }

  if(res[1] == 33){
    printf("problème res[1] %i %i %i --> %i\n",a,b,c,res[0] );
  }
  if(res[2] == 33){
    printf("problème res[2] %i %i %i --> %i\n",a,b,c,res[0] );
  }
  if(res[3] == 33){
    printf("problème res[3] %i %i %i --> %i\n",a,b,c,res[0] );
  }

  printf("good %i %i %i --> %i\n",a,b,c,res[0] );
  return res;
}
