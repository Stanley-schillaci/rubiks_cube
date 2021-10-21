#include <stdio.h>
#include <stdlib.h>

const int CORNER = 0;
const int BORDER = 1;
const int CENTER = 2;

const int WHITE  = 0;
const int GREEN  = 1;
const int RED    = 2;
const int ORANGE = 3;
const int BLUE   = 4;
const int YELLOW = 5;




typedef struct pixel{
  int type;
  int cube; // 0-23
  int color; // 0-5
  int correct; // 0 - 53
} pixel ;

struct pixel* Rubik()
{

  pixel* rubik = malloc(sizeof(pixel) * 54);

  rubik[0].type = CORNER; rubik[0].cube = 0; rubik[0].color = WHITE; rubik[0].correct = 0;
  rubik[1].type = BORDER; rubik[1].cube = 1; rubik[1].color = WHITE; rubik[1].correct = 1;
  rubik[2].type = CORNER; rubik[2].cube = 2; rubik[2].color = WHITE; rubik[2].correct = 2;
  rubik[3].type = BORDER; rubik[3].cube = 3; rubik[3].color = WHITE; rubik[3].correct = 3;
  rubik[4].type = CENTER; rubik[4].cube = 4; rubik[4].color = WHITE; rubik[4].correct = 4;
  rubik[5].type = BORDER; rubik[5].cube = 5; rubik[5].color = WHITE; rubik[5].correct = 5;
  rubik[6].type = CORNER; rubik[6].cube = 6; rubik[6].color = WHITE; rubik[6].correct = 6;
  rubik[7].type = BORDER; rubik[7].cube = 7; rubik[7].color = WHITE; rubik[7].correct = 7;
  rubik[8].type = CORNER; rubik[8].cube = 8; rubik[8].color = WHITE; rubik[8].correct = 8;
  rubik[9].type = CORNER; rubik[9].cube = 0; rubik[9].color = ORANGE; rubik[9].correct = 9;

  rubik[10].type = BORDER; rubik[10].cube = 3; rubik[10].color = ORANGE; rubik[10].correct = 10;
  rubik[11].type = CORNER; rubik[11].cube = 6; rubik[11].color = ORANGE; rubik[11].correct = 11;
  rubik[12].type = CORNER; rubik[12].cube = 6; rubik[12].color = GREEN; rubik[12].correct = 12;
  rubik[13].type = BORDER; rubik[13].cube = 7; rubik[13].color = GREEN; rubik[13].correct = 13;
  rubik[14].type = CORNER; rubik[14].cube = 8; rubik[14].color = GREEN; rubik[14].correct = 14;
  rubik[15].type = CORNER; rubik[15].cube = 8; rubik[15].color = RED; rubik[15].correct = 15;
  rubik[16].type = BORDER; rubik[16].cube = 5; rubik[16].color = RED; rubik[16].correct = 16;
  rubik[17].type = CORNER; rubik[17].cube = 2; rubik[17].color = RED; rubik[17].correct = 17;
  rubik[18].type = CORNER; rubik[18].cube = 2; rubik[18].color = BLUE; rubik[18].correct = 18;
  rubik[19].type = BORDER; rubik[19].cube = 1; rubik[19].color = BLUE; rubik[19].correct = 19;
  rubik[20].type = CORNER; rubik[20].cube = 0; rubik[20].color = BLUE; rubik[20].correct = 20;

  rubik[21].type = BORDER; rubik[21].cube = 9; rubik[21].color = ORANGE; rubik[21].correct = 21;
  rubik[22].type = CENTER; rubik[22].cube = 10; rubik[22].color = ORANGE; rubik[22].correct = 22;
  rubik[23].type = CORNER; rubik[23].cube = 11; rubik[23].color = ORANGE; rubik[23].correct = 23;
  rubik[24].type = CORNER; rubik[24].cube = 11; rubik[24].color = GREEN; rubik[24].correct = 24;
  rubik[25].type = CENTER; rubik[25].cube = 12; rubik[25].color = GREEN; rubik[25].correct = 25;
  rubik[26].type = CORNER; rubik[26].cube = 13; rubik[26].color = GREEN; rubik[26].correct = 26;
  rubik[27].type = CORNER; rubik[27].cube = 13; rubik[27].color = RED; rubik[27].correct = 27;
  rubik[28].type = CENTER; rubik[28].cube = 14; rubik[28].color = RED; rubik[28].correct = 28;
  rubik[29].type = CORNER; rubik[29].cube = 15; rubik[29].color = RED; rubik[29].correct = 29;
  rubik[30].type = CORNER; rubik[30].cube = 15; rubik[30].color = BLUE; rubik[30].correct = 30;
  rubik[31].type = CENTER; rubik[31].cube = 16; rubik[31].color = BLUE; rubik[31].correct = 31;
  rubik[32].type = BORDER; rubik[32].cube = 9; rubik[32].color = BLUE; rubik[32].correct = 32;

  rubik[33].type = CORNER; rubik[33].cube = 17; rubik[33].color = ORANGE; rubik[33].correct = 33;
  rubik[34].type = BORDER; rubik[34].cube = 18; rubik[34].color = ORANGE; rubik[34].correct = 34;
  rubik[35].type = CORNER; rubik[35].cube = 19; rubik[35].color = ORANGE; rubik[35].correct = 35;
  rubik[36].type = CORNER; rubik[36].cube = 19; rubik[36].color = GREEN; rubik[36].correct = 36;
  rubik[37].type = BORDER; rubik[37].cube = 20; rubik[37].color = GREEN; rubik[37].correct = 37;
  rubik[38].type = CORNER; rubik[38].cube = 21; rubik[38].color = GREEN; rubik[38].correct = 38;
  rubik[39].type = CORNER; rubik[39].cube = 21; rubik[39].color = RED; rubik[39].correct = 39;
  rubik[40].type = BORDER; rubik[40].cube = 22; rubik[40].color = RED; rubik[40].correct = 40;
  rubik[41].type = CORNER; rubik[41].cube = 23; rubik[41].color = RED; rubik[41].correct = 41;
  rubik[42].type = CORNER; rubik[42].cube = 23; rubik[42].color = BLUE; rubik[42].correct = 42;
  rubik[43].type = BORDER; rubik[43].cube = 24; rubik[43].color = BLUE; rubik[43].correct = 43;
  rubik[44].type = CORNER; rubik[44].cube = 17; rubik[44].color = BLUE; rubik[44].correct = 44;

  rubik[45].type = CORNER; rubik[45].cube = 19; rubik[45].color = YELLOW; rubik[45].correct = 45;
  rubik[46].type = BORDER; rubik[46].cube = 20; rubik[46].color = YELLOW; rubik[46].correct = 46;
  rubik[47].type = CORNER; rubik[47].cube = 21; rubik[47].color = YELLOW; rubik[47].correct = 47;
  rubik[48].type = BORDER; rubik[48].cube = 18; rubik[48].color = YELLOW; rubik[48].correct = 48;
  rubik[49].type = CENTER; rubik[49].cube = 25; rubik[49].color = YELLOW; rubik[49].correct = 49;
  rubik[50].type = BORDER; rubik[50].cube = 22; rubik[50].color = YELLOW; rubik[50].correct = 50;
  rubik[51].type = CORNER; rubik[51].cube = 17; rubik[51].color = YELLOW; rubik[51].correct = 51;
  rubik[52].type = BORDER; rubik[52].cube = 24; rubik[52].color = YELLOW; rubik[52].correct = 52;
  rubik[53].type = CORNER; rubik[53].cube = 23; rubik[53].color = YELLOW; rubik[53].correct = 53;
  return rubik;
}
