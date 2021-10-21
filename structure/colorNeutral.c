#include "rubik.h"
#include "solution.h"
#include "switchRotation.h"
#include "rubikTools.h"
#include <stdio.h>
#include <stdlib.h>
#include <err.h>

void tradSolution(struct res* solution,int color){

  int* colorMat = malloc(sizeof(int) * 6);


  if(color == 1){
    int colorG[6] = {1,0,3,2,5,4};
    for (int i = 0; i < 6; i++) colorMat[i] = colorG[i];
    for (int j = 0; j < solution -> lenResProgram; j++) {
      solution -> resProgram[j] = translateRotation(solution -> resProgram[j],1,0);
    }
  }
  else if(color == 2){
    int colorR[6] = {2,4,0,5,1,3};
    for (int i = 0; i < 6; i++) colorMat[i] = colorR[i];
    for (int j = 0; j < solution -> lenResProgram; j++) {
      solution -> resProgram[j] = translateRotation(solution -> resProgram[j],2,4);
    }
  }
  else if(color == 3){
    int colorO[6] = {3,4,5,0,1,2};
    for (int i = 0; i < 6; i++) colorMat[i] = colorO[i];
    for (int j = 0; j < solution -> lenResProgram; j++) {
      solution -> resProgram[j] = translateRotation(solution -> resProgram[j],3,4);
    }
  }
  else if(color == 4){
    int colorB[6] = {4,5,3,2,0,1};
    for (int i = 0; i < 6; i++) colorMat[i] = colorB[i];
    for (int j = 0; j < solution -> lenResProgram; j++) {
      solution -> resProgram[j] = translateRotation(solution -> resProgram[j],4,5);
    }
  }
  else if(color == 5){
    int colorY[6] = {5,4,2,3,1,0};
    for (int i = 0; i < 6; i++) colorMat[i] = colorY[i];
    for (int j = 0; j < solution -> lenResProgram; j++) {
      solution -> resProgram[j] = translateRotation(solution -> resProgram[j],5,4);
    }
  }
  else{
    errx(1,"[tradSolution] Wrong color");
  }

  int color1;
  int color2;
  for (int i = 0; i < solution -> lenFace; i++) {
    color1 = solution -> face[i]/10;
    color2 = solution -> face[i]%10;

    color1 = colorMat[color1];
    color2 = colorMat[color2];

    solution -> face[i] = color1*10 + color2;


  }
}

void changeMainColorCube(struct pixel* original,struct pixel* rubik,int color){

    struct pixel* r = Rubik();
    struct pixel* solve = Rubik();

    int* mat = malloc(sizeof(int)*54);


    if(color == 1){
        int matG[54] = { 38,37,36, 26,25,24, 14,13,12,
                         39,27,15,  8, 7, 6, 11,23,35, 45,46,47,
                         40,28,16,  5, 4, 3, 10,22,34, 48,49,50,
                         41,29,17,  2, 1, 0,  9,21,33, 51,52,53,
                         18,19,20, 30,31,32 ,42,43,44};

        for (int i = 0; i < 54; i++) mat[i] = matG[i];
    }
    else if(color == 2){
      int matR[54] = { 39,27,15, 40,28,16, 41,29,17,
                       47,50,53, 42,30,18,  2, 5, 8, 14,26,38,
                       46,49,52, 43,31,19,  1, 4, 7, 13,25,37,
                       45,48,51, 44,32,20,  0, 3, 6, 12,24,36,
                       33,21, 9, 34,22,10, 35,23,11
                        };

      for (int i = 0; i < 54; i++) mat[i] = matR[i];

    }else if(color == 3){
      int matO[54] = { 11,23,35, 10,22,34,  9,21,33,
                        6, 3, 0, 20,32,44, 51,48,45, 36,24,12,
                        7, 4, 1, 19,31,43, 52,49,46, 37,25,13,
                        8, 5, 2, 18,30,42, 53,50,47, 38,26,14,
                       17,29,41, 16,28,40, 15,27,39
                      };

      for (int i = 0; i < 54; i++) mat[i] = matO[i];

    }else if(color == 4){
      int matB[54] = { 18,19,20, 30,31,32, 42,43,44,
                       17,29,41, 53,52,51, 33,21, 9,  0, 1, 2,
                       16,28,40, 50,49,48, 34,22,10,  3, 4, 5,
                       15,27,39, 47,46,45, 35,23,11,  6, 7, 8,
                       38,37,36, 26,25,24, 14,13,12};

      for (int i = 0; i < 54; i++) mat[i] = matB[i];

    }else if(color == 5){
      int matY[54] = { 45,46,47, 48,49,50, 51,52,53,
                       35,34,33, 44,43,42, 41,40,39, 38,37,36,
                       23,22,21, 32,31,30, 29,28,27, 26,25,24,
                       11,10, 9, 20,19,18, 17,16,15, 14,13,12,
                        0, 1, 2,  3, 4, 5,  6, 7, 8
                      };

      for (int i = 0; i < 54; i++) mat[i] = matY[i];

    }else{
      errx(1,"[ChangeMainColorCube] Wrong color");
    }

    for (int i = 0; i < 54; i++) {
      rubik[i] = original[mat[i]];
      solve[i] = r[mat[i]];
    }


    for (int i = 0; i < 54; i++) {
      rubik[i] = solve[rubik[i].correct];
    }


}

int translateInfo(int color,int infoNB){
  int* colorMat = malloc(sizeof(int) * 6);

  if(color == 1){
    int colorG[6] = {1,0,3,2,5,4};
    for (int i = 0; i < 6; i++) colorMat[i] = colorG[i];

  }
  else if(color == 2){
    int colorR[6] = {2,4,0,5,1,3};
    for (int i = 0; i < 6; i++) colorMat[i] = colorR[i];

  }
  else if(color == 3){
    int colorO[6] = {3,4,5,0,1,2};
    for (int i = 0; i < 6; i++) colorMat[i] = colorO[i];

  }
  else if(color == 4){
    int colorB[6] = {4,5,3,2,0,1};
    for (int i = 0; i < 6; i++) colorMat[i] = colorB[i];

  }
  else if(color == 5){
    int colorY[6] = {5,4,2,3,1,0};
    for (int i = 0; i < 6; i++) colorMat[i] = colorY[i];

  }

  return colorMat[infoNB/10] * 10 + colorMat[infoNB%10];
}
