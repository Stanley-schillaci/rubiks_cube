
#include "../structure/rubik.h"
#include "../structure/solution.h"
#include "../structure/rotation.h"
#include "../structure/rubikTools.h"
#include "../structure/switchRotation.h"
#include <stdio.h>
#include <stdlib.h>

void Xrotation(struct pixel* rubik,struct res* solution, int face, int info)
{
  executeAlgo(rubik,solution,switchRotation("FRUruf",face,solution, info,6),6);
}

void Xyellow(struct pixel* rubik,struct res* solution) {
  int i = 0;
  while ( i < 20 && (      (rubik[46].color != 5 )
                        || (rubik[48].color != 5 )
                        || (rubik[50].color != 5 )
                        || (rubik[52].color != 5 ) ))
       {
            if ((rubik[46].color == 5) && (rubik[52].color == 5)){
              if (rubik[48].color == 5) {
                Xrotation(rubik, solution, 54, 313);
                i += 21;
                continue;
              }
              if (rubik[50].color == 5) {
                Xrotation(rubik, solution, 53, 313);
                i += 21;
                continue;
              }
              Xrotation(rubik, solution, 53, 313);
              i += 21;
              continue;
            }
            if ((rubik[48].color == 5) && (rubik[50].color == 5)){
              if (rubik[46].color == 5) {
                Xrotation(rubik, solution, 54, 313);
                i += 21;
                continue;
              }
              if (rubik[52].color == 5) {
                Xrotation(rubik, solution, 51, 313);
                i += 21;
                continue;
              }
              Xrotation(rubik, solution, 54, 313);
              i += 21;
              continue;
            }


            if ((rubik[46].color == 5) && (rubik[50].color == 5)){
              Xrotation(rubik, solution, 53, 312);
              Xrotation(rubik, solution, 53, 312);
              i += 21;
              continue;
            }
            if ((rubik[50].color == 5) && (rubik[52].color == 5)){
              Xrotation(rubik, solution, 51, 312);
              Xrotation(rubik, solution, 51, 312);
              i += 21;
              continue;
            }
            if ((rubik[52].color == 5) && (rubik[48].color == 5)){
              Xrotation(rubik, solution, 52, 312);
              Xrotation(rubik, solution, 52, 312);
              i += 21;
              continue;
            }
            if ((rubik[48].color == 5) && (rubik[46].color == 5)){
              Xrotation(rubik, solution, 54, 312);
              Xrotation(rubik, solution, 54, 312);
              i += 21;
              continue;
            }
            else{
              Xrotation(rubik, solution, 53, 311);

              executeAlgo(rubik,solution,switchRotation("uu",53,solution, 315, 2), 2);

              Xrotation(rubik, solution, 53, 312);

              Xrotation(rubik, solution, 53, 314);

              i += 21;
              if (i > 20) {
                break;
              }
            }
            i++;
            if (i > 20) {
              break;
            }
      }
}

void __centerLayer3(struct pixel* rubik,struct res* solution, int face)
{
  executeAlgo(rubik,solution,switchRotation("RUrURUUrU",face,solution, 321, 9), 9);
}

void centerLayer3(struct pixel* rubik,struct res* solution) {

  int i = 0;
  while ( !(( (rubik[34].color == 3 )
            && (rubik[37].color == 1 )
            && (rubik[40].color == 2 )
            && (rubik[43].color == 4 ) ))
      ){

        if (i>20) {
          break;
        }
         if(rubik[34].color == 1){ // TESTING ORANGE CENTER
           __centerLayer3(rubik, solution, 53);
           i++;
           continue;
         }
         if(rubik[34].color == 4){ // OTHER SENS
           __centerLayer3(rubik, solution, 54);
           i++;
           continue;
         }

         if(rubik[37].color == 2){
           __centerLayer3(rubik, solution, 51); // TESTING GREEN CENTER
           i++;
           continue;
         }
         if(rubik[37].color == 3){
           __centerLayer3(rubik, solution, 53);
           i++;
           continue;
         }

         if(rubik[40].color == 4){
           __centerLayer3(rubik, solution, 52); // TESTING RED CENTER
           i++;
           continue;
         }
         if(rubik[40].color == 1){
           __centerLayer3(rubik, solution, 51);
           i++;
           continue;
         }

         if(rubik[43].color == 3){

           __centerLayer3(rubik, solution, 54); // TESTING BLUE CENTER
           i++;
           continue;
         }if(rubik[43].color == 2){

           __centerLayer3(rubik, solution, 52);
           i++;
           continue;
         }

         if (((rubik[34].color == 3) && (rubik[40].color == 2)) && ((rubik[37].color == 4) && (rubik[43].color == 1))) { // OPPOSITE RED/ORANGE

           __centerLayer3(rubik, solution, 51);
           __centerLayer3(rubik, solution, 52);
           __centerLayer3(rubik, solution, 51);

           break;
         }
         if (((rubik[37].color == 1) && (rubik[43].color == 4)) && ((rubik[34].color == 2) && (rubik[40].color == 3))) { // OPPOSITE GREEN/BLUE

           __centerLayer3(rubik, solution, 54);
           __centerLayer3(rubik, solution, 52);
           __centerLayer3(rubik, solution, 54);

           break;
         }
         executeAlgo(rubik,solution,switchRotation("uu",52,solution, 322, 2), 2);
         i++;
         continue;
       }
}

void rotationCorner(struct pixel* rubik,struct res* solution, int face) {

  executeAlgo(rubik,solution,switchRotation("URulUruL",face,solution, 331, 8), 8);

}

int startCorner(struct pixel* rubik,struct res* solution) {
  int res = 0; // FACE
  int bool = 1;
  int i = 0;

  while (bool) {
    if (rubik[45].cube == 19) {
      res = 51;
      bool = 0;
      continue;
    }
    if (rubik[47].cube == 21) {
      res = 52;
      bool = 0;
      continue;
    }
    if (rubik[53].cube == 23) {
      res = 54;
      bool = 0;
      continue;
    }
    if (rubik[51].cube == 17) {
      res = 53;
      bool = 0;
      continue;
    }
    if (i == 0)
    {
      i = 1;
    }
    rotationCorner(rubik,solution, i + 50);
    i = ((i+1)%4);
  }

  return res;
}



void cornerLayer3(struct pixel* rubik,struct res* solution) {
  int start = startCorner(rubik,solution);
  while ( !(( (rubik[36].cube == 19 )
            && (rubik[39].cube == 21 )
            && (rubik[42].cube == 23 )
            && (rubik[33].cube == 17 ) ))
      ){
        rotationCorner(rubik,solution, start);
      }
}

void endLayer3(struct pixel* rubik,struct res* solution) { // TESTING END YELLOW [cube]

while ( !(( (rubik[45].color == 5 )
          && (rubik[47].color == 5 )
          && (rubik[51].color == 5 )
          && (rubik[53].color == 5 )
          && (rubik[45].cube == 19 )
          && (rubik[47].cube == 21 )
          && (rubik[53].cube == 23 )
          && (rubik[51].cube == 17 ) ))
    ){
      executeAlgo(rubik,solution,switchRotation("u",51,solution, 342, 1), 1);
      while (rubik[45].color != 5) {
        executeAlgo(rubik,solution,switchRotation("rdRD",51,solution, 341, 4), 4);
      }
}

























}
