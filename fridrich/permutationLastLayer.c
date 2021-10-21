#include "../structure/rubik.h"
#include "../structure/solution.h"
#include "../structure/rotation.h"
#include "../structure/rubikTools.h"
#include "../structure/switchRotation.h"
#include <stdio.h>
#include <stdlib.h>

/*
  PLL_X:
    args : --> structure rubik
           --> structure solution
           --> int face

    goal : execute one of the fridrich's PLL algorythm on the good face
            and write in the solution

    return : none

*/
void PLL_1(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_1  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("rUrururURURR",face,solution,1201,12),12);
}

void PLL_2(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_2  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RRuruRURURuR",face,solution,1202,12),12);
}

void PLL_3(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_3  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotationPLL3(face,solution,1203));
    //executeAlgo(rubik,solution,switchRotationPLL32(face));
    executeAlgo(rubik,solution,switchRotationMultiple("uLLRRdLLRRuLrFFLLRRBBLru","uMMuMMuMUUMMUUMu",face,solution,1203,24,16),24);
}

void PLL_4(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_4  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotationMultiple("LRLRdLRLRUULRLRdLRLR","MMuMMUUMMuMM",face,solution,1204,20,12),20);
}

void PLL_5(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_5  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RRDDRUrDDRuR",face,solution,1205,12),12);
}

void PLL_6(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_6  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RRDDruRDDrUr",face,solution,1206,12),12);
}

void PLL_7(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_7  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UDRdLDrudRUlur",face,solution,1207,14),14);
}

void PLL_8(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_8  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RUrurFRRuruRUrf",face,solution,1208,15),15);
}

void PLL_9(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_9  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("rufRUrurFRRuruRUrUR",face,solution,1209,19),19);
}

void PLL_10(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_10  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("rUURUUrFRUrurfRRu",face,solution,1210,17),17);
}

void PLL_11(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_11  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotationMultiple("RUUrUURbruRURBRRU","RUUrUURbruRUKURRF",face,solution,1211,17,17),17);
}

void PLL_12(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_12  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RUrfRUrurFRRuru",face,solution,1212,15),15);
}

void PLL_13(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_13  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotationMultiple("rUURUrUULuRUl","rUURUrCCRuLUr",face,solution,1213,13,13),13);
}

void PLL_14(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_14  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("FRuruRUrfRUrurFRf",face,solution,1214,17),17);
}

void PLL_15(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_15  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("URRUUFFuRRUURRFFuFFUUFFRR",face,solution,1215,25),25);
}

void PLL_16(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_16  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("uRRUUBBURRUURRBBUBBUUBBRR",face,solution,1216,25),25);
}

void PLL_17(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_17  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("rUrubrBBubUbRBR",face,solution,1217,15),15);
}

void PLL_18(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_18  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotationMultiple("RRdFuFUfDRRBub","RRtRuRUrTRRBub",face,solution,1218,14,14),14);
}

void PLL_19(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_19  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotationMultiple("ruRBBDlULuLdBB","ruRYRRTrURuRtRR",face,solution,1219,14,15),14);
}

void PLL_20(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_20  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotationMultiple("RRDbUbuBdRRfUF","RRTrUruRtRRfUF",face,solution,1220,14,14),14);
}

void PLL_21(struct pixel* rubik,struct res* solution,int face){
    //printf("Fn : PLL_21  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotationMultiple("RUrFFdLulUlDFF","RUryRRtRurUrTRR",face,solution,1221,14,15),14);
}

void executePLL(struct pixel* rubik,struct res* solution,int face,int nb){
  switch (nb) {
    case 0:
      break;
    case 1:
      PLL_1(rubik,solution,face);
      break;
    case 2:
      PLL_2(rubik,solution,face);
      break;
    case 3:
      PLL_3(rubik,solution,face);
      break;
    case 4:
      PLL_4(rubik,solution,face);
      break;
    case 5:
      PLL_5(rubik,solution,face);
      break;
    case 6:
      PLL_6(rubik,solution,face);
      break;
    case 7:
      PLL_7(rubik,solution,face);
      break;
    case 8:
      PLL_8(rubik,solution,face);
      break;
    case 9:
      PLL_9(rubik,solution,face);
      break;
    case 10:
      PLL_10(rubik,solution,face);
      break;
    case 11:
      PLL_11(rubik,solution,face);
      break;
    case 12:
      PLL_12(rubik,solution,face);
      break;
    case 13:
      PLL_13(rubik,solution,face);
      break;
    case 14:
      PLL_14(rubik,solution,face);
      break;
    case 15:
      PLL_15(rubik,solution,face);
      break;
    case 16:
      PLL_16(rubik,solution,face);
      break;
    case 17:
      PLL_17(rubik,solution,face);
      break;
    case 18:
      PLL_18(rubik,solution,face);
      break;
    case 19:
      PLL_19(rubik,solution,face);
      break;
    case 20:
      PLL_20(rubik,solution,face);
      break;
    case 21:
      PLL_21(rubik,solution,face);
      break;
    default:
      //printf("On a un souci\n");
      break;
  }
}

/*
  lastFaceMatYG:
    args : --> structure rubik
           --> int* mat

    goal : create a matrix with the numer of the cube
              to know the position of the yellow piece
            on the yellow face.
            This matrix is oriented we start with the yellow face on top and
              the green face on front

    return : int* mat -> the matrix

f*/
int* lastFaceMatYG(struct pixel* rubik,int *matYG){

  matYG[0] = rubik[53].correct;
  matYG[1] = rubik[52].correct;
  matYG[2] = rubik[51].correct;

  matYG[3] = rubik[50].correct;
  matYG[4] = 49;
  matYG[5] = rubik[48].correct;

  matYG[6] = rubik[47].correct;
  matYG[7] = rubik[46].correct;
  matYG[8] = rubik[45].correct;

  return matYG;
}

/*
  translateLastFaceMat:
    args : --> int* matYG
           --> int* mat
           --> int face

    goal : transpose a YG mat in an other face mat (YR,YB or YO)

    return : int* mat -> the transpose matrix

*/
int* translateLastFaceMat(int *matYG,int *mat, int face){

    if(face == 53){

        mat[0] = matYG[6];
        mat[1] = matYG[3];
        mat[2] = matYG[0];

        mat[3] = matYG[7];
        mat[4] = 49; //center yellow
        mat[5] = matYG[1];

        mat[6] = matYG[8];
        mat[7] = matYG[5];
        mat[8] = matYG[2];

    }
    else if(face == 54){

      mat[0] = matYG[8];
      mat[1] = matYG[7];
      mat[2] = matYG[6];

      mat[3] = matYG[5];
      mat[4] = 49; //center yellow
      mat[5] = matYG[3];

      mat[6] = matYG[2];
      mat[7] = matYG[1];
      mat[8] = matYG[0];

    }
    else if(face == 52){

      mat[0] = matYG[2];
      mat[1] = matYG[5];
      mat[2] = matYG[8];

      mat[3] = matYG[1];
      mat[4] = 49; //center yellow
      mat[5] = matYG[7];

      mat[6] = matYG[0];
      mat[7] = matYG[3];
      mat[8] = matYG[6];

    }

    return mat;



}

/*
  compareMatLast:
    args : --> int* mat
           --> int* pll

    goal : compare a rubik matrix with a pll matrix

    return : int (boolean) ->  (1 or 0)

*/
int compareMatLast(int *mat, int *pll){
  for (int i = 0; i < 9; i++) {
    if(mat[i] != pll[i]){
      return 0;
    }
  }
  return 1;
}

/*
  compareMatLastBorder:
    args : --> int* mat
           --> int* pll

    goal : compare a rubik matrix border with a pll matrix

    return : int (boolean) ->  (1 or 0)

*/
int compareMatLastBorder(int *mat, int *pll){
  for (int i = 1; i < 8; i+=2) {
    if(mat[i] != pll[i]){
      return 0;
    }
  }
  return 1;
}

/*
  compareMatLastCorner:
    args : --> int* mat
           --> int* pll

    goal : compare a rubik matrix corner with a pll matrix

    return : int (boolean) ->  (1 or 0)

*/
int compareMatLastCorner(int *mat, int *pll){
  for (int i = 0; i < 8; i+=2) {
    if(mat[i] != pll[i]){
      return 0;
    }
  }
  return 1;
}


/*
  createPLL:
    args : --> struct rubik
           --> struct solution

    goal : finish the cube by permutate the last cube on the yellow face

    return : int -> true of false

*/

int compareMatMultiple(struct pixel* rubik, struct res* solution,int *matYG,
  int *matYO,int *matYB,int *matYR, int *pllYG,int *pllYO,int *pllYB,int *pllYR,
  int nb, int *face, int *face2){

  if(compareMatLast(matYG,pllYG)){
    //printf("PLL_%i : 51 --> %i\n",nb,face[0]);
    executePLL(rubik,solution,face2[0],nb);
    return 1;
  }
  else if(compareMatLast(matYO,pllYG)){
    //printf("PLL_%i : 53 --> %i\n",nb,face[0]);
    executeAlgo(rubik,solution,switchRotation("U",face[0],solution,1222,1),1);
    executePLL(rubik,solution,face2[0],nb);
    return 1;
  }
  else if(compareMatLast(matYB,pllYG)){
    executeAlgo(rubik,solution,switchRotation("UU",face[0],solution,1222,2),2);
    //printf("PLL_%i : 54 --> %i\n",nb,face[0]);
    executePLL(rubik,solution,face2[0],nb);
    return 1;
  }
  else if(compareMatLast(matYR,pllYG)){
    //printf("PLL_%i : 52 --> %i\n",nb,face[0]);
    executeAlgo(rubik,solution,switchRotation("u",face[0],solution,1222,1),1);
    executePLL(rubik,solution,face2[0],nb);
    return 1;
  }

  if(compareMatLast(matYG,pllYO)){
    //printf("PLL_%i : 51 --> %i\n",nb,face[1]);
    executeAlgo(rubik,solution,switchRotation("u",face[1],solution,1222,1),1);
    executePLL(rubik,solution,face2[1],nb);
    return 1;
  }
  else if(compareMatLast(matYO,pllYO)){
    //printf("PLL_%i : 53 --> %i\n",nb,face[1]);
    executePLL(rubik,solution,face2[1],nb);
    return 1;
  }
  else if(compareMatLast(matYB,pllYO)){
    //printf("PLL_%i : 54 --> %i\n",nb,face[1]);
    executeAlgo(rubik,solution,switchRotation("U",face[1],solution,1222,1),1);
    executePLL(rubik,solution,face2[1],nb);
    return 1;
  }
  else if(compareMatLast(matYR,pllYO)){
    //printf("PLL_%i : 52 --> %i\n",nb,face[1]);
    executeAlgo(rubik,solution,switchRotation("UU",face[1],solution,1222,2),2);
    executePLL(rubik,solution,face2[1],nb);
    return 1;
  }


  if(compareMatLast(matYG,pllYB)){
    //printf("PLL_%i : 51 --> %i\n",nb,face[2]);
    executeAlgo(rubik,solution,switchRotation("UU",face[2],solution,1222,2),2);
    executePLL(rubik,solution,face2[2],nb);
    return 1;
  }
  else if(compareMatLast(matYO,pllYB)){
    //printf("PLL_%i : 53 --> %i\n",nb,face[2]);
    executeAlgo(rubik,solution,switchRotation("u",face[2],solution,1222,1),1);
    executePLL(rubik,solution,face2[2],nb);
    return 1;
  }
  else if(compareMatLast(matYB,pllYB)){
    //printf("PLL_%i : 54 --> %i\n",nb,face[2]);
    executePLL(rubik,solution,face2[2],nb);
    return 1;
  }
  else if(compareMatLast(matYR,pllYB)){
    //printf("PLL_%i : 52 --> %i\n",nb,face[2]);
    executeAlgo(rubik,solution,switchRotation("U",face[2],solution,1222,1),1);
    executePLL(rubik,solution,face2[2],nb);
    return 1;
  }

  if(compareMatLast(matYG,pllYR)){
    //printf("PLL_%i : 51 --> %i\n",nb,face[3]);
    executeAlgo(rubik,solution,switchRotation("U",face[3],solution,1222,1),1);
    executePLL(rubik,solution,face2[3],nb);
    return 1;
  }
  else if(compareMatLast(matYO,pllYR)){
    //printf("PLL_%i : 51 --> %i\n",nb,face[3]);
    executeAlgo(rubik,solution,switchRotation("UU",face[3],solution,1222,2),2);
    executePLL(rubik,solution,face2[3],nb);
    return 1;
  }
  else if(compareMatLast(matYB,pllYR)){
    //printf("PLL_%i : 51 --> %i\n",nb,face[3]);
    executeAlgo(rubik,solution,switchRotation("u",face[3],solution,1222,1),1);
    executePLL(rubik,solution,face2[3],nb);
    return 1;
  }
  else if(compareMatLast(matYR,pllYR)){
    //printf("PLL_%i : 51 --> %i\n",nb,face[3]);
    executePLL(rubik,solution,face2[3],nb);
    return 1;
  }

  return 0;

}

int createPLL(struct pixel* rubik, struct res* solution){
  int *matYG = malloc(sizeof(int) * 9);
  int *matYO = malloc(sizeof(int) * 9);
  int *matYB = malloc(sizeof(int) * 9);
  int *matYR = malloc(sizeof(int) * 9);


  matYG = lastFaceMatYG(rubik,matYG);

  matYO = translateLastFaceMat(matYG,matYO,53);
  matYB = translateLastFaceMat(matYG,matYB,54);
  matYR = translateLastFaceMat(matYG,matYR,52);


  //PLL 0 --> already solve case
  if(1){

      int solveMatYG[9] = {53,52,51,50,49,48,47,46,45};

      if(compareMatLast(matYG,solveMatYG)){
        //printf("PLL : Perfect already" );
        return 1;
      }


      if(compareMatLast(matYO,solveMatYG)){
        executeAlgo(rubik,solution,switchRotation("U",51,solution,1222,1),1);
        //printf("PLL : Perfect --> u" );
        return 1;
      }


      if(compareMatLast(matYB,solveMatYG)){
        executeAlgo(rubik,solution,switchRotation("UU",51,solution,1222,2),2);
        //printf("PLL : Perfect --> U2" );
        return 1;
      }


      if(compareMatLast(matYR,solveMatYG)){
        executeAlgo(rubik,solution,switchRotation("u",51,solution,1222,1),1);
        //printf("PLL : Perfect --> U" );
        return 1;
      }

  }

  if(verifRubik(rubik)) return 1;


  //PLL 1
  if(1){

    int PLL_1YG[9] = {53,48,51, 52,49,50, 47,46,45};
    int PLL_1YO[9] = {47,52,53, 50,49,46, 45,48,51};
    int PLL_1YB[9] = {45,50,47, 46,49,48, 51,52,53};
    int PLL_1YR[9] = {51,46,45, 48,49,52, 53,50,47};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_1YG,PLL_1YO,PLL_1YB,PLL_1YR,1,color1,color2);

  }

  if(verifRubik(rubik)) return 1;

  //PLL 2
  if(1){

    int PLL_2YG[9] = {53,50,51, 48,49,52, 47,46,45};
    int PLL_2YO[9] = {47,46,53, 52,49,50, 45,48,51};
    int PLL_2YB[9] = {45,48,47, 50,49,46, 51,52,53};
    int PLL_2YR[9] = {51,52,45, 46,49,48, 53,50,47};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_2YG,PLL_2YO,PLL_2YB,PLL_2YR,2,color1,color2);


  }

  if(verifRubik(rubik)) return 1;

  //PLL 3
  if(1){

    int PLL_3YG[9] = {53,50,51, 52,49,46, 47,48,45};
    int PLL_3YO[9] = {47,46,53, 50,49,48, 45,52,51};
    int PLL_3YB[9] = {45,48,47, 46,49,52, 51,50,53};
    int PLL_3YR[9] = {51,52,45, 48,49,50, 53,46,47};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_3YG,PLL_3YO,PLL_3YB,PLL_3YR,3,color1,color2);



  }

  if(verifRubik(rubik)) return 1;

  //PLL 4
  if(1){

    int PLL_4YG[9] = {53,46,51,48,49,50,47,52,45};
    int PLL_4YO[9] = {0,0,0,0,0,0,0,0,0};
    int PLL_4YB[9] = {0,0,0,0,0,0,0,0,0};
    int PLL_4YR[9] = {0,0,0,0,0,0,0,0,0};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_4YG,PLL_4YO,PLL_4YB,PLL_4YR,4,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 5
  if(1){
    int PLL_5YG[9] = {45,52,53, 50,49,48, 47,46,51};
    int PLL_5YO[9] = {51,50,47, 46,49,52, 45,48,53};
    int PLL_5YB[9] = {53,46,45, 48,49,50, 51,52,47};
    int PLL_5YR[9] = {47,48,51, 52,49,46, 53,50,45};

    int color1[4] = {51,53,54,52};
    int color2[4] = {10,30,40,20};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_5YG,PLL_5YO,PLL_5YB,PLL_5YR,5,color1,color2);

  }

  if(verifRubik(rubik)) return 1;

  //PLL 6
  if(1){
    int PLL_6YG[9] = {53,52,45, 50,49,48, 51,46,47};
    int PLL_6YO[9] = {47,50,51, 46,49,52, 53,48,45};
    int PLL_6YB[9] = {45,46,53, 48,49,50, 47,52,51};
    int PLL_6YR[9] = {51,48,47, 52,49,46, 45,50,53};

    int color1[4] = {51,53,54,52};
    int color2[4] = {45,25,15,35};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_6YG,PLL_6YO,PLL_6YB,PLL_6YR,6,color1,color2);

  }

  if(verifRubik(rubik)) return 1;

  //PLL 7
  if(1){
    int PLL_7YG[9] = {51,52,53, 50,49,48, 45,46,47};
    int PLL_7YO[9] = {53,50,47, 46,49,52, 51,48,45};
    int PLL_7YB[9] = {0,0,0, 0,0,0, 0,0,0};
    int PLL_7YR[9] = {0,0,0, 0,0,0, 0,0,0};

    int color1[4] = {51,53,54,52};
    int color2[4] = {45,25,15,35};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_7YG,PLL_7YO,PLL_7YB,PLL_7YR,7,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 8
  if(1){
    int PLL_8YG[9] = {53,52,45, 48,49,50, 47,46,51};
    int PLL_8YO[9] = {47,50,51, 52,49,46, 45,48,53};
    int PLL_8YB[9] = {45,46,53, 50,49,48, 51,52,47};
    int PLL_8YR[9] = {51,48,47, 46,49,52, 53,50,45};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_8YG,PLL_8YO,PLL_8YB,PLL_8YR,8,color1,color2);

  }

  if(verifRubik(rubik)) return 1;

  //PLL 9
  if(1){
    int PLL_9YG[9] = {53,46,45, 50,49,48, 47,52,51};
    int PLL_9YO[9] = {47,48,51, 46,49,52, 45,50,53};
    int PLL_9YB[9] = {45,52,53, 48,49,50, 51,46,47};
    int PLL_9YR[9] = {51,50,47, 52,49,46, 53,48,45};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_9YG,PLL_9YO,PLL_9YB,PLL_9YR,9,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 10
  if(1){
    int PLL_10YG[9] = {51,52,53, 50,49,46, 47,48,45};
    int PLL_10YO[9] = {53,50,47, 46,49,48, 45,52,51};
    int PLL_10YB[9] = {47,46,45, 48,49,52, 51,50,53};
    int PLL_10YR[9] = {45,48,51, 52,49,50, 53,46,47};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_10YG,PLL_10YO,PLL_10YB,PLL_10YR,10,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 11
  if(1){
    int PLL_11YG[9] = {53,48,51, 50,49,52, 45,46,47};
    int PLL_11YO[9] = {47,52,53, 46,49,50, 51,48,45};
    int PLL_11YB[9] = {45,50,47, 48,49,46, 53,52,51};
    int PLL_11YR[9] = {51,46,45, 52,49,48, 47,50,53};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_11YG,PLL_11YO,PLL_11YB,PLL_11YR,11,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 12
  if(1){
    int PLL_12YG[9] = {53,52,45, 50,49,46, 47,48,51};
    int PLL_12YO[9] = {47,50,51, 46,49,48, 45,52,53};
    int PLL_12YB[9] = {45,46,53, 48,49,52, 51,50,47};
    int PLL_12YR[9] = {51,48,47, 52,49,50, 53,46,45};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_12YG,PLL_12YO,PLL_12YB,PLL_12YR,12,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 13
  if(1){
    int PLL_13YG[9] = {53,48,45, 50,49,52, 47,46,51};
    int PLL_13YO[9] = {47,52,51, 46,49,50, 45,48,53};
    int PLL_13YB[9] = {45,50,53, 48,49,46, 51,52,47};
    int PLL_13YR[9] = {51,46,47, 52,49,48, 53,50,45};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_13YG,PLL_13YO,PLL_13YB,PLL_13YR,13,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 14
  if(1){
    int PLL_14YG[9] = {45,50,51, 52,49,48, 47,46,53};
    int PLL_14YO[9] = {51,46,53, 50,49,52, 45,48,47};
    int PLL_14YB[9] = {53,48,47, 46,49,50, 51,52,45};
    int PLL_14YR[9] = {47,52,45, 48,49,46, 53,50,51};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_14YG,PLL_14YO,PLL_14YB,PLL_14YR,14,color1,color2);
  }

  if(verifRubik(rubik)) return 1;


  //PLL 15
  if(1){
    int PLL_15YG[9] = {53,46,47, 50,49,48, 51,52,45};
    int PLL_15YO[9] = {47,48,45, 46,49,52, 53,50,51};

    //remove
    int PLL_15YB[9] = {045,52,51, 48,49,50, 47,46,53};
    int PLL_15YR[9] = {051,50,53, 52,49,46, 45,48,47};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_15YG,PLL_15YO,PLL_15YB,PLL_15YR,15,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 16
  if(1){
    int PLL_16YG[9] = {45,46,51, 50,49,48, 47,52,53};
    int PLL_16YO[9] = {51,48,53, 46,49,52, 45,50,47};

    //remove
    int PLL_16YB[9] = {045,46,51, 50,49,48, 47,52,53};
    int PLL_16YR[9] = {051,48,53, 46,49,52, 45,50,47};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_16YG,PLL_16YO,PLL_16YB,PLL_16YR,16,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 17
  if(1){
    int PLL_17YG[9] = {45,48,51, 50,49,52, 47,46,53};
    int PLL_17YO[9] = {51,52,53, 46,49,50, 45,48,47};
    int PLL_17YB[9] = {53,50,47, 48,49,46, 51,52,45};
    int PLL_17YR[9] = {47,46,45, 52,49,48, 53,50,51};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_17YG,PLL_17YO,PLL_17YB,PLL_17YR,17,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 18
  if(1){
    int PLL_18YG[9] = {47,52,51, 48,49,46, 45,50,53};
    int PLL_18YO[9] = {45,50,53, 52,49,48, 51,46,47};
    int PLL_18YB[9] = {51,46,47, 50,49,52, 53,48,45};
    int PLL_18YR[9] = {53,48,45, 46,49,50, 47,52,51};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_18YG,PLL_18YO,PLL_18YB,PLL_18YR,18,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 19
  if(1){
    int PLL_19YG[9] = {47,46,51, 52,49,48, 45,50,53};
    int PLL_19YO[9] = {45,48,53, 50,49,52, 51,46,47};
    int PLL_19YB[9] = {51,52,47, 46,49,50, 53,48,45};
    int PLL_19YR[9] = {53,50,45, 48,49,46, 47,52,51};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_19YG,PLL_19YO,PLL_19YB,PLL_19YR,19,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 20
  if(1){
    int PLL_20YG[9] = {51,50,47, 48,49,52, 53,46,45};
    int PLL_20YO[9] = {53,46,45, 52,49,50, 47,48,51};
    int PLL_20YB[9] = {47,48,51, 50,49,46, 45,52,53};
    int PLL_20YR[9] = {45,52,53, 46,49,48, 51,50,47};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_20YG,PLL_20YO,PLL_20YB,PLL_20YR,20,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  //PLL 21
  if(1){
    int PLL_21YG[9] = {51,50,47, 46,49,48, 53,52,45};
    int PLL_21YO[9] = {53,46,45, 48,49,52, 47,50,51};
    int PLL_21YB[9] = {47,48,51, 52,49,50, 45,46,53};
    int PLL_21YR[9] = {45,52,53, 50,49,46, 51,48,47};

    int color1[4] = {51,53,54,52};
    int color2[4] = {51,53,54,52};

    compareMatMultiple(rubik,solution,matYG,matYO,matYB,matYR,
        PLL_21YG,PLL_21YO,PLL_21YB,PLL_21YR,21,color1,color2);
  }

  if(verifRubik(rubik)) return 1;

  return 0;
}
