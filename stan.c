#include "structure/rubik.h"
#include "structure/solution.h"
#include "structure/rotation.h"
#include "structure/rubikTools.h"
#include "structure/switchRotation.h"
#include "structure/colorNeutral.h"
#include "classique/whiteFace.h"
#include "classique/secondLayer.h"
#include "fridrich/whiteCross.h"
#include "fridrich/firstTwoLayer.h"
#include "fridrich/orientationLastLayer.h"
#include "fridrich/permutationLastLayer.h"
#include "fridrich/fridrich.h"
#include <err.h>
#include <stdio.h>
#include <stdlib.h>

void testAccurency(int nb){

  struct pixel* rubik = Rubik();
  struct pixel* rubikC = Rubik();
  struct pixel* rubikSolve = Rubik();

  struct res* scramble = Solution();
  struct res* solution = Solution();


  int color = 0;

  int colorMat[6] = {0,0,0,0,0,0};
  int total = 0;
  int best = 10000;
  int worst = 0;

  for (int i = 0; i < nb; i++) {

    if(i % 100 == 0){
      printf("%i\n",i );
    }
    copyRubik(rubikSolve,rubik);
    clearSolution(solution);
    clearSolution(scramble);
    executeAlgo(rubik,scramble,rubikScramble(25),25);

    copyRubik(rubik,rubikC);

    color = bestColorFridrich(rubik,solution);

    printf("color : %i\n",color );

    clearSolution(solution);

    colorMat[color] += 1;

    copyRubik(rubikC,rubik);

    easyFridrich(rubik,solution,color);



    if(!verifRubik(rubik)){
      errx(1,"Rubik non résolu à i = %i",i);
    }

    total += solution -> lenResUser;
    if(solution -> lenResUser < best){
      best = solution -> lenResUser;
    }

    if(solution -> lenResUser > worst){
      worst = solution -> lenResUser;
    }



  }

  printf("\n\n=================================\n" );
  printf("                Result" );
  printf("\n\n=================================\n" );

  printf("Rubiks cube résolu : %i\n",nb );
  printf("Moyenne de coût : %i\n",total/nb );
  printf("Meilleur résolution : %i\n",best );
  printf("Plus mauvaise résolution : %i\n",worst );





}

void test(){
  struct pixel* rubik = Rubik();
  struct res* scramble = Solution();
  struct res* solution = Solution();

  int nb = 1;

  for (int i = 0; i < nb; i++) {

    clearSolution(scramble);
    clearSolution(solution);
    executeAlgo(rubik,scramble,rubikScramble(25),25);

    printRubik(rubik);

    createWhiteCrossFridrich(rubik,solution,1234);
    printRubik(rubik);
    createF2L(rubik,solution,1234);
    printRubik(rubik);
    createOLL(rubik,solution);
    printRubik(rubik);
    printRubik(rubik);
    createPLL(rubik,solution);
    printRubik(rubik);

    if(!verifRubik(rubik)){
      errx(1,"error after %i attempts",i);
    }

  }

  printf("Succes %i\n",nb);



  printf("\nChaine de mélange :\n");
  printSolutionProgamme(scramble);

  printf("\nChaine de résolution :\n");
  printSolutionProgamme(solution);

  printSolutionUser2(solution);

  for (int i = 0; i < solution -> lenFace; i++) {
    printf("%i : %i --> %s\n",i,solution-> info[i],infoEdu_ToString(solution -> info[i]));
  }
}

void bestExecute(int argc, char *argv[]){
  struct pixel* rubik = Rubik();

  struct pixel* rubikCopy = Rubik();

  struct pixel* rubikDemo = Rubik();

  struct res* scramble = Solution();
  struct res* solution = Solution();


  int color = 0;


  executeAlgo(rubik,scramble,rubikScramble(25),25);
  //executeAlgo(rubik,scramble,"BUBudRDubF",10);
  //executeAlgo(rubik,scramble,"BBULLURRDDBBLLRRfuLLRfUlBDFFL");

  copyRubik(rubik,rubikDemo);

  if(argc != 1){
    if(atoi(argv[1]) == 6){
      color = bestColorFridrich(rubik,solution);
      clearSolution(solution);
    }
    else{
      color = atoi(argv[1]);
    }
  }

  copyRubik(rubik,rubikCopy);

  easyFridrich(rubik,solution,color);

  //printf("\nChaine de mélange :\n");
  //printSolutionProgamme(scramble);

  printf("\nChaine de résolution :\n");
  printSolutionProgamme(solution);

  printSolutionUser2(solution);

}

int main(int argc, char *argv[]){

  //test();

  bestExecute(argc, argv);

  //testAccurency(1000);

}
