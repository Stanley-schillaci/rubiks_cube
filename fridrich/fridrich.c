#include "../structure/rubik.h"
#include "../structure/solution.h"
#include "../structure/rotation.h"
#include "../structure/rubikTools.h"
#include "../structure/switchRotation.h"
#include "../structure/colorNeutral.h"
#include "whiteCross.h"
#include "firstTwoLayer.h"
#include "orientationLastLayer.h"
#include "permutationLastLayer.h"
#include <stdio.h>
#include <stdlib.h>
#include <err.h>


#define PRED  "\x1B[31m"
#define PGREEN  "\x1B[32m"

#define PBLUE  "\x1B[34m"
#define PRESET "\x1B[0m"


/*
  easyFridrich:
    args : --> structure rubik
           --> structure solution

    goal : take any rubik, solve it with the "easy" fridrich method and write in the solution structure the solution

    return : none
*/
void easyFridrich(struct pixel* rubik,struct res* solution,int color){

    struct pixel* rubikOriginalCopy = Rubik();
    struct pixel* rubikWhiteCross = Rubik();

    struct res* solutionOriginal = Solution();
    struct res* solutionWhite = Solution();


    if(color > 0 && color < 6){

      struct pixel* rubikColor= Rubik();
      copyRubik(rubik,rubikColor);
      //printf("Changement en couleur : %i\n",color );
      changeMainColorCube(rubikColor,rubik,color);
    }
    else if(color == 0){
      //printf("On reste sur du white\n" );
    }

    int bestW = 0;
    int bestF2L = 0;
    int bestSolution = 20000;


    int order[24] = {  1234,
                       1243,
                       1324,
                       1342,
                       1423,
                       1432,

                       2134,
                       2143,
                       2314,
                       2341,
                       2413,
                       2431,

                       3124,
                       3142,
                       3214,
                       3241,
                       3412,
                       3421,

                       4123,
                       4132,
                       4213,
                       4231,
                       4312,
                       4321,

                     };

    for (int i = 0; i < 24; i++) {
      copyRubik(rubik,rubikOriginalCopy);
      clearSolution(solutionOriginal);
      createWhiteCrossFridrich(rubikOriginalCopy,solutionOriginal,order[i]);
      for(int j = 0; j < 24; j++){
        copySolution(solutionOriginal,solutionWhite);
        copyRubik(rubikOriginalCopy,rubikWhiteCross);

        createF2L(rubikWhiteCross,solutionWhite,order[j]);
        createOLL(rubikWhiteCross,solutionWhite);
        createPLL(rubikWhiteCross,solutionWhite);


        //printf("Verif Rubik %i\n",verifRubik(rubikWhiteCross));

        //printCube(rubikWhiteCross);
        if(verifRubik(rubikWhiteCross) && solutionWhite -> lenResUser < bestSolution){
          bestW = i;
          bestF2L = j;
          bestSolution = solutionWhite -> lenResUser;
          //printf(PGREEN "%02d - %02d : lenSolution : %i  --> newBest\n",i,j,solutionWhite -> lenResUser );
        }else{

          //printf(PBLUE "%02d - %02d : lenSolution : %i\n",i,j,solutionWhite -> lenResUser );
        }

      }

    }
    //printf(PRESET "\nThe best solution is %i - %i with %i\n",bestW,bestF2L,bestSolution );





      //Execute on the true rubik

      createWhiteCrossFridrich(rubik,solution,order[bestW]);
      createF2L(rubik,solution,order[bestF2L]);
      createOLL(rubik,solution);
      createPLL(rubik,solution);

      if(color > 0 && color < 6){
        tradSolution(solution,color);
      }

      free(rubikOriginalCopy);
      free(rubikWhiteCross);
      free(solutionOriginal);
      free(solutionWhite);


}

int bestColorFridrich(struct pixel* rubik,struct res* solution){
    struct pixel* rubikCopy = Rubik();
    struct res* solutionTemp = Solution();
    int* colorScore = malloc(sizeof(int) * 6);

    int bestColor = 0;
    int bestNB = 10000;

    for (int i = 0; i < 6; i++) {

      copyRubik(rubik,rubikCopy);
      clearSolution(solutionTemp);

      easyFridrich(rubikCopy,solutionTemp,i);
      colorScore[i] = solutionTemp -> lenResUser;

      if(colorScore[i] < bestNB){
        bestNB = colorScore[i];
        bestColor = i;
      }


    }

    easyFridrich(rubik,solution,bestColor);


    printf("\n\n============================================\n");
    printf("              Color Neutral  \n");
    printf("============================================\n\n");

    printf("Color White  : %i\n",colorScore[0] );
    printf("Color Green  : %i\n",colorScore[1] );
    printf("Color Red    : %i\n",colorScore[2] );
    printf("Color Orange : %i\n",colorScore[3] );
    printf("Color Blue   : %i\n",colorScore[4] );
    printf("Color Yellow : %i\n",colorScore[5] );

    printf("\n\n============================================\n\nThe best color is : %i\n",bestColor);

    return bestColor;

}
