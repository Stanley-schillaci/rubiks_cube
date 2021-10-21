#include "../structure/rubik.h"
#include "../structure/solution.h"
#include "../structure/rotation.h"
#include "../structure/rubikTools.h"
#include "../structure/switchRotation.h"
#include <stdio.h>
#include <stdlib.h>

void middleLeft(struct pixel* rubik,struct res* solution, char* border) {
  switch (*border) {
    case 'G':
      executeAlgo(rubik,solution,switchRotation("ulULUFuf",51,solution, 221,8),8);
      break;
    case 'O':
      executeAlgo(rubik,solution,switchRotation("ulULUFuf",53,solution, 221,8),8);
      break;
    case 'B':
      executeAlgo(rubik,solution,switchRotation("ulULUFuf",54,solution, 221,8),8);
      break;
    case 'R':
      executeAlgo(rubik,solution,switchRotation("ulULUFuf",52,solution, 221,8),8);
      break;
    default:
      break;
  }
}

void middleRight(struct pixel* rubik,struct res* solution, char* border) {
  switch (*border) {
    case 'G':
      executeAlgo(rubik,solution,switchRotation("URurufUF",51,solution, 222,8),8);
      break;
    case 'O':
      executeAlgo(rubik,solution,switchRotation("URurufUF",53,solution, 222,8),8);
      break;
    case 'B':
      executeAlgo(rubik,solution,switchRotation("URurufUF",54,solution, 222,8),8);
      break;
    case 'R':
      executeAlgo(rubik,solution,switchRotation("URurufUF",52,solution, 222,8),8);
      break;
  }
}

void checkLayer2(struct pixel* rubik,struct res* solution) {
  while ( !( (rubik[46].color == 5 || rubik[37].color == 5)
          && (rubik[48].color == 5 || rubik[34].color == 5)
          && (rubik[50].color == 5 || rubik[40].color == 5)
          && (rubik[52].color == 5 || rubik[43].color == 5) ))
  {

    switch (rubik[46].cube) { // YELLOW-GREEN BORDER
      case 11:
        if (rubik[46].color == 3) {
          middleRight(rubik,solution,"G");
        }
        else
        {
          executeAlgo(rubik,solution,switchRotation("u",51,solution, 212, 1), 1);
          middleLeft(rubik,solution,"O");
        }

        break;
      case 13:
        if (rubik[46].color == 2) {
          middleLeft(rubik,solution,"G");
        }
        else
        {
          executeAlgo(rubik,solution,switchRotation("U",51,solution, 212, 1), 1);
          middleRight(rubik,solution,"R");
        }

        break;
    }

    switch (rubik[48].cube) { // YELLOW-ORANGE BORDER
      case 9:
        if (rubik[48].color == 4) {
          middleRight(rubik,solution,"O");
        }
        else
        {
          executeAlgo(rubik,solution,switchRotation("u",53,solution, 212, 1), 1);
          middleLeft(rubik,solution,"B");
        }

        break;

      case 11:
        if (rubik[48].color == 1) {
          middleLeft(rubik,solution,"O");
        }
        else
        {
          executeAlgo(rubik,solution,switchRotation("U",51,solution, 212, 1), 1);
          middleRight(rubik,solution,"G");
        }

        break;
      }

    switch (rubik[50].cube)
    { // YELLOW-red BORDER
      case 15:
        if (rubik[50].color == 2) {
          executeAlgo(rubik,solution,switchRotation("U",52,solution, 212, 1), 1);
          middleRight(rubik,solution,"B");
        }
        else
        {
          middleLeft(rubik,solution,"R");
        }

        break;

      case 13:
        if (rubik[50].color == 1) {
          middleRight(rubik,solution,"R");
        }
        else
        {
          executeAlgo(rubik,solution,switchRotation("u",52,solution, 212, 1), 1);
          middleLeft(rubik,solution,"G");
        }

        break;
    }

    switch (rubik[52].cube) { // YELLOW-BLUE BORDER
      case 9:
        if (rubik[52].color == 4) {
          executeAlgo(rubik,solution,switchRotation("U",54,solution, 212, 1), 1);
          middleRight(rubik,solution,"O");
        }
        else
        {
          middleLeft(rubik,solution,"B");
        }

        break;

      case 15:
        if (rubik[52].color == 4) {
          executeAlgo(rubik,solution,switchRotation("u",54,solution, 212, 1), 1);
          middleLeft(rubik,solution,"R");
        }
        else
        {
          middleRight(rubik,solution,"B");
        }

        break;
      }
    executeAlgo(rubik,solution,switchRotation("u",51,solution, 211, 1), 1);

  }
}

void swapLayer2 (struct pixel* rubik,struct res* solution){
  // ====================2 LAYER BORDER=========================
  int i = 0;
  while (i < 2){ // WAIT FOR 4 BORDER


    switch (rubik[24].cube) {
        case 11: // GREEN-ORANGE BORDER
          if (rubik[24].color == 3) {
            middleRight(rubik,solution,"G");
            executeAlgo(rubik,solution,switchRotation("UU",51,solution, 212, 2), 2);
            middleRight(rubik,solution,"G");
            i = 0;
          }
          else{
            i++;
          }
          break;

        case 9: // ORANGE-BLUE BORDER
          if(rubik[24].color == 3) {
            middleRight(rubik,solution,"G");
            middleLeft(rubik,solution,"B");
            i++;
          }
          else
          {
            middleRight(rubik,solution,"G");
            executeAlgo(rubik,solution,switchRotation("U",53,solution, 212, 1), 1);
            middleRight(rubik,solution,"O"); // CHANGE
            i = 0;
          }
          break;

        case 15: // BLUE-RED BORDER
          if(rubik[24].color == 2) {
            middleRight(rubik,solution,"G");
            middleRight(rubik,solution,"B");
            i = 0;
          }
          else
          {
            middleRight(rubik,solution,"G");
            executeAlgo(rubik,solution,switchRotation("U",54,solution, 212, 1), 1);
            middleLeft(rubik,solution,"R");
            i = 0;
          }
          break;

        case 13: // RED-GREEN BORDER
          if (rubik[24].color == 1) {
            middleRight(rubik,solution,"G");
            executeAlgo(rubik,solution,switchRotation("u",52,solution, 212, 1), 1);
            middleRight(rubik,solution,"R");
            i = 0;
          }
          else
          {
            middleRight(rubik,solution,"G");
            executeAlgo(rubik,solution,switchRotation("UU",52,solution, 212, 2), 2);
            middleLeft(rubik,solution,"R");
            i = 0;
          }
          break;
    }

    switch (rubik[21].cube) { // ORANGE-BLUE BORDER POSITION
      case 9: // ORANGE-BLUE BORDER
        if (rubik[21].color == 4) {
          middleRight(rubik,solution,"O");
          executeAlgo(rubik,solution,switchRotation("UU",53,solution, 212, 2), 2);
          middleRight(rubik,solution,"O");
          i = 0;
        }
        else{
          i++;
        }
        break;


      case 15:
        if (rubik[21].color == 4) {
          middleRight(rubik,solution,"O");
          middleLeft(rubik,solution,"R");
        }
        else
        {
          middleRight(rubik,solution,"O");
          executeAlgo(rubik,solution,switchRotation("U",53,solution, 212, 1), 1);
          middleRight(rubik,solution,"B");
          i = 0;
        }
        break;

      case 13:
        if (rubik[21].color == 2) {
          middleRight(rubik,solution,"O");
          executeAlgo(rubik,solution,switchRotation("u",53,solution, 212, 1), 1);
          middleLeft(rubik,solution,"G");
          i = 0;
        }
        else
        {
          middleRight(rubik,solution,"O");
          middleRight(rubik,solution,"R");
          i = 0;
        }
        break;

      case 11:
        if (rubik[21].color == 1) {
          middleRight(rubik,solution,"O");
          executeAlgo(rubik,solution,switchRotation("UU",53,solution, 212, 2), 2);
          middleLeft(rubik,solution,"O");
          i = 0;
        }
        else
        {
          middleRight(rubik,solution,"O");
          executeAlgo(rubik,solution,switchRotation("u",53,solution, 212, 1), 1);
          middleRight(rubik,solution,"G");
          i = 0;
        }
        break;
    }

    switch (rubik[30].cube) { // BLUE-RED BORDER POSITION
      case 15:
        if (rubik[30].color == 2) {
          middleRight(rubik,solution,"B");
          executeAlgo(rubik,solution,switchRotation("UU",54,solution, 212, 2), 2);
          middleRight(rubik,solution,"B");
          i = 0;
        }
        else{
          i++;
        }
        break;

      case 13:
        if (rubik[30].color == 2) {
          middleRight(rubik,solution,"B");
          middleLeft(rubik,solution,"G");
          i = 0;
        }
        else
        {
          middleRight(rubik,solution,"B");
          executeAlgo(rubik,solution,switchRotation("U",54,solution, 212, 1), 1);
          middleRight(rubik,solution,"R");
          i = 0;
        }
        break;

      case 11:
        if (rubik[30].color == 3) {
          middleRight(rubik,solution,"B");
          middleRight(rubik,solution,"G");
          i = 0;
        }
        else
        {
          middleRight(rubik,solution,"B");
          executeAlgo(rubik,solution,switchRotation("u",54,solution, 212, 1), 1);
          middleLeft(rubik,solution,"O");
          i = 0;
        }
        break;

      case 9:
        if (rubik[30].color == 4) {
          middleRight(rubik,solution,"B");
          executeAlgo(rubik,solution,switchRotation("u",54,solution, 212, 1), 1);
          middleRight(rubik,solution,"O");
          i = 0;
        }
        else
        {
          middleRight(rubik,solution,"B");
          executeAlgo(rubik,solution,switchRotation("UU",54,solution, 212, 2), 2);
          middleLeft(rubik,solution,"B");
          i = 0;
        }
        break;
    }

    switch (rubik[27].cube) { // RED-GREEN BORDER POSITION
      case 13:
        if (rubik[27].color == 1) {
          middleRight(rubik,solution,"R");
          executeAlgo(rubik,solution,switchRotation("UU",52,solution, 212, 2), 2);
          middleRight(rubik,solution,"R");
          i = 0;
        }
        else{
          i++;
        }
        break;

      case 11:
        if (rubik[27].color == 1) {
          middleRight(rubik,solution,"R");
          middleLeft(rubik,solution,"O");
          i = 0;
        }
        else
        {
          middleRight(rubik,solution,"R");
          executeAlgo(rubik,solution,switchRotation("U",52,solution, 212, 1), 1);
          middleRight(rubik,solution,"G");
          i = 0;
        }
        break;

      case 9:
        if (rubik[27].color == 4) {
          middleRight(rubik,solution,"R");
          middleRight(rubik,solution,"O");
        }
        else
        {
          middleRight(rubik,solution,"R");
          executeAlgo(rubik,solution,switchRotation("u",52,solution, 212, 1), 1);
          middleLeft(rubik,solution,"B");
          i = 0;
        }
        break;

      case 15:
        if (rubik[27].color == 4) {
          middleRight(rubik,solution,"R");
          executeAlgo(rubik,solution,switchRotation("UU",52,solution, 212, 2), 2);
          middleLeft(rubik,solution,"R");
          i = 0;
        }
        else
        {
          middleRight(rubik,solution,"R");
          executeAlgo(rubik,solution,switchRotation("u",52,solution, 212, 1), 1);
          middleRight(rubik,solution,"B");
          i = 0;
        }
        break;
      }
    i++;
    }
  }

  void mainLayer2(struct pixel* rubik,struct res* solution){ // TESTING 2LAYER
    while (!((rubik[24].cube == 11 && rubik[24].color == 1)
            && (rubik[21].cube == 9 && rubik[21].color == 3)
            && (rubik[30].cube == 15 && rubik[30].color == 4)
            && (rubik[27].cube == 13 && rubik[27].color == 2) ))
        {
          checkLayer2(rubik, solution);
          swapLayer2 (rubik, solution);

        }
  }
