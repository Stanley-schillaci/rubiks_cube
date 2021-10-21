#include "rubik.h"
#include <stdio.h>
#include <stdlib.h>


/*
Dans ce fichier on trouve les 6 rotations fondamentalle du rubiks cube
  décliné dans les 2 sens soit un total de 12 rotations

  les 12 fonctions s'utilisent donc de la même manière
*/

/*
  rotationF:
    args : --> structure rubik

    goal : éxécuter une rotation F sur le rubiks cube

    return : none

    use :
      struct pixel* rubik = Rubik();
      rotationF(rubik);

*/
void rotationF(struct pixel* rubik){

  //printf("rotation F\n");

  struct pixel temp1 = rubik[6];
  struct pixel temp2 = rubik[7];
  struct pixel temp3 = rubik[8];

  rubik[6] = rubik[35];
  rubik[7] = rubik[23];
  rubik[8] = rubik[11];

  rubik[11] = rubik[45];
  rubik[23] = rubik[46];
  rubik[35] = rubik[47];

  rubik[45] = rubik[39];
  rubik[46] = rubik[27];
  rubik[47] = rubik[15];

  rubik[15] = temp1;
  rubik[27] = temp2;
  rubik[39] = temp3;

  //face

  struct pixel temp4 = rubik[12];
  struct pixel temp5 = rubik[13];

  rubik[12] = rubik[36];
  rubik[13] = rubik[24];

  rubik[36] = rubik[38];
  rubik[24] = rubik[37];

  rubik[38] = rubik[14];
  rubik[37] = rubik[26];

  rubik[14] = temp4;
  rubik[26] = temp5;

}

void rotationFi(struct pixel* rubik){

  //printf("rotation F'\n");

  struct pixel temp1 = rubik[6];
  struct pixel temp2 = rubik[7];
  struct pixel temp3 = rubik[8];

  rubik[6] = rubik[15];
  rubik[7] = rubik[27];
  rubik[8] = rubik[39];

  rubik[15] = rubik[47];
  rubik[27] = rubik[46];
  rubik[39] = rubik[45];

  rubik[45] = rubik[11];
  rubik[46] = rubik[23];
  rubik[47] = rubik[35];

  rubik[35] = temp1;
  rubik[23] = temp2;
  rubik[11] = temp3;

  //face
  struct pixel temp4 = rubik[12];
  struct pixel temp5 = rubik[13];

  rubik[12] = rubik[14];
  rubik[13] = rubik[26];

  rubik[14] = rubik[38];
  rubik[26] = rubik[37];

  rubik[38] = rubik[36];
  rubik[37] = rubik[24];

  rubik[36] = temp4;
  rubik[24] = temp5;

}

void rotationR(struct pixel* rubik){

  //printf("rotation R\n");

  struct pixel temp1 = rubik[2];
  struct pixel temp2 = rubik[5];
  struct pixel temp3 = rubik[8];

  rubik[2] = rubik[14];
  rubik[5] = rubik[26];
  rubik[8] = rubik[38];

  rubik[14] = rubik[47];
  rubik[26] = rubik[50];
  rubik[38] = rubik[53];

  rubik[47] = rubik[42];
  rubik[50] = rubik[30];
  rubik[53] = rubik[18];

  rubik[18] = temp3;
  rubik[30] = temp2;
  rubik[42] = temp1;

  //face
  struct pixel temp4 = rubik[15];
  struct pixel temp5 = rubik[16];

  rubik[15] = rubik[39];
  rubik[16] = rubik[27];

  rubik[39] = rubik[41];
  rubik[27] = rubik[40];

  rubik[41] = rubik[17];
  rubik[40] = rubik[29];

  rubik[17] = temp4;
  rubik[29] = temp5;

}

void rotationRi(struct pixel* rubik){

  //printf("rotation R'\n");

  struct pixel temp1 = rubik[2];
  struct pixel temp2 = rubik[5];
  struct pixel temp3 = rubik[8];

  rubik[2] = rubik[42];
  rubik[5] = rubik[30];
  rubik[8] = rubik[18];

  rubik[42] = rubik[47];
  rubik[30] = rubik[50];
  rubik[18] = rubik[53];

  rubik[47] = rubik[14];
  rubik[50] = rubik[26];
  rubik[53] = rubik[38];

  rubik[38] = temp3;
  rubik[26] = temp2;
  rubik[14] = temp1;

  //face
  struct pixel temp4 = rubik[15];
  struct pixel temp5 = rubik[16];

  rubik[15] = rubik[17];
  rubik[16] = rubik[29];

  rubik[17] = rubik[41];
  rubik[29] = rubik[40];

  rubik[41] = rubik[39];
  rubik[40] = rubik[27];

  rubik[39] = temp4;
  rubik[27] = temp5;

}

void rotationU(struct pixel* rubik){

  //printf("rotation U\n");

  struct pixel temp1 = rubik[9];
  struct pixel temp2 = rubik[10];
  struct pixel temp3 = rubik[11];

  rubik[9] = rubik[12];
  rubik[10] = rubik[13];
  rubik[11] = rubik[14];

  rubik[12] = rubik[15];
  rubik[13] = rubik[16];
  rubik[14] = rubik[17];

  rubik[15] = rubik[18];
  rubik[16] = rubik[19];
  rubik[17] = rubik[20];

  rubik[18] = temp1;
  rubik[19] = temp2;
  rubik[20] = temp3;

  //face
  struct pixel temp4 = rubik[0];
  struct pixel temp5 = rubik[1];

  rubik[0] = rubik[6];
  rubik[1] = rubik[3];

  rubik[6] = rubik[8];
  rubik[3] = rubik[7];

  rubik[8] = rubik[2];
  rubik[7] = rubik[5];

  rubik[2] = temp4;
  rubik[5] = temp5;

}

void rotationUi(struct pixel* rubik){

  //printf("rotation U'\n");

  struct pixel temp1 = rubik[9];
  struct pixel temp2 = rubik[10];
  struct pixel temp3 = rubik[11];

  rubik[9] = rubik[18];
  rubik[10] = rubik[19];
  rubik[11] = rubik[20];

  rubik[18] = rubik[15];
  rubik[19] = rubik[16];
  rubik[20] = rubik[17];

  rubik[15] = rubik[12];
  rubik[16] = rubik[13];
  rubik[17] = rubik[14];

  rubik[12] = temp1;
  rubik[13] = temp2;
  rubik[14] = temp3;

  //face
  struct pixel temp4 = rubik[0];
  struct pixel temp5 = rubik[1];

  rubik[0] = rubik[2];
  rubik[1] = rubik[5];

  rubik[2] = rubik[8];
  rubik[5] = rubik[7];

  rubik[8] = rubik[6];
  rubik[7] = rubik[3];

  rubik[6] = temp4;
  rubik[3] = temp5;

}

void rotationB(struct pixel* rubik){

  //printf("rotation B\n");

  struct pixel temp1 = rubik[0];
  struct pixel temp2 = rubik[1];
  struct pixel temp3 = rubik[2];

  rubik[0] = rubik[17];
  rubik[1] = rubik[29];
  rubik[2] = rubik[41];

  rubik[17] = rubik[53];
  rubik[29] = rubik[52];
  rubik[41] = rubik[51];

  rubik[53] = rubik[33];
  rubik[52] = rubik[21];
  rubik[51] = rubik[9];

  rubik[33] = temp1;
  rubik[21] = temp2;
  rubik[9] = temp3;

  //face
  struct pixel temp4 = rubik[18];
  struct pixel temp5 = rubik[19];

  rubik[18] = rubik[42];
  rubik[19] = rubik[30];

  rubik[42] = rubik[44];
  rubik[30] = rubik[43];

  rubik[44] = rubik[20];
  rubik[43] = rubik[32];

  rubik[20] = temp4;
  rubik[32] = temp5;

}

void rotationBi(struct pixel* rubik){

  //printf("rotation B'\n");

  struct pixel temp1 = rubik[0];
  struct pixel temp2 = rubik[1];
  struct pixel temp3 = rubik[2];

  rubik[0] = rubik[33];
  rubik[1] = rubik[21];
  rubik[2] = rubik[9];

  rubik[33] = rubik[53];
  rubik[21] = rubik[52];
  rubik[9] = rubik[51];

  rubik[51] = rubik[41];
  rubik[52] = rubik[29];
  rubik[53] = rubik[17];

  rubik[17] = temp1;
  rubik[29] = temp2;
  rubik[41] = temp3;

  //face
  struct pixel temp4 = rubik[18];
  struct pixel temp5 = rubik[19];

  rubik[18] = rubik[20];
  rubik[19] = rubik[32];

  rubik[20] = rubik[44];
  rubik[32] = rubik[43];

  rubik[44] = rubik[42];
  rubik[43] = rubik[30];

  rubik[42] = temp4;
  rubik[30] = temp5;

}

void rotationL(struct pixel* rubik){

  //printf("rotation L\n");

  struct pixel temp1 = rubik[0];
  struct pixel temp2 = rubik[3];
  struct pixel temp3 = rubik[6];

  rubik[0] = rubik[44];
  rubik[3] = rubik[32];
  rubik[6] = rubik[20];

  rubik[20] = rubik[51];
  rubik[32] = rubik[48];
  rubik[44] = rubik[45];

  rubik[45] = rubik[12];
  rubik[48] = rubik[24];
  rubik[51] = rubik[36];

  rubik[12] = temp1;
  rubik[24] = temp2;
  rubik[36] = temp3;

  //face
  struct pixel temp4 = rubik[9];
  struct pixel temp5 = rubik[21];

  rubik[9] = rubik[33];
  rubik[21] = rubik[34];

  rubik[33] = rubik[35];
  rubik[34] = rubik[23];

  rubik[35] = rubik[11];
  rubik[23] = rubik[10];

  rubik[11] = temp4;
  rubik[10] = temp5;

}

void rotationLi(struct pixel* rubik){

  //printf("rotation L'\n");

  struct pixel temp1 = rubik[0];
  struct pixel temp2 = rubik[3];
  struct pixel temp3 = rubik[6];

  rubik[0] = rubik[12];
  rubik[3] = rubik[24];
  rubik[6] = rubik[36];

  rubik[12] = rubik[45];
  rubik[24] = rubik[48];
  rubik[36] = rubik[51];

  rubik[45] = rubik[44];
  rubik[48] = rubik[32];
  rubik[51] = rubik[20];

  rubik[44] = temp1;
  rubik[32] = temp2;
  rubik[20] = temp3;

  //face
  struct pixel temp4 = rubik[9];
  struct pixel temp5 = rubik[10];

  rubik[9] = rubik[11];
  rubik[10] = rubik[23];

  rubik[11] = rubik[35];
  rubik[23] = rubik[34];

  rubik[35] = rubik[33];
  rubik[34] = rubik[21];

  rubik[33] = temp4;
  rubik[21] = temp5;

}

void rotationD(struct pixel* rubik){

  //printf("rotation D\n");

  struct pixel temp1 = rubik[33];
  struct pixel temp2 = rubik[34];
  struct pixel temp3 = rubik[35];

  rubik[33] = rubik[42];
  rubik[34] = rubik[43];
  rubik[35] = rubik[44];

  rubik[42] = rubik[39];
  rubik[43] = rubik[40];
  rubik[44] = rubik[41];

  rubik[39] = rubik[36];
  rubik[40] = rubik[37];
  rubik[41] = rubik[38];

  rubik[36] = temp1;
  rubik[37] = temp2;
  rubik[38] = temp3;

  //face
  struct pixel temp4 = rubik[45];
  struct pixel temp5 = rubik[46];

  rubik[45] = rubik[51];
  rubik[46] = rubik[48];

  rubik[51] = rubik[53];
  rubik[48] = rubik[52];

  rubik[53] = rubik[47];
  rubik[52] = rubik[50];

  rubik[47] = temp4;
  rubik[50] = temp5;

}

void rotationDi(struct pixel* rubik){

  //printf("rotation D'\n");

  struct pixel temp1 = rubik[33];
  struct pixel temp2 = rubik[34];
  struct pixel temp3 = rubik[35];

  rubik[33] = rubik[36];
  rubik[34] = rubik[37];
  rubik[35] = rubik[38];

  rubik[36] = rubik[39];
  rubik[37] = rubik[40];
  rubik[38] = rubik[41];

  rubik[39] = rubik[42];
  rubik[40] = rubik[43];
  rubik[41] = rubik[44];

  rubik[42] = temp1;
  rubik[43] = temp2;
  rubik[44] = temp3;

  //face
  struct pixel temp4 = rubik[45];
  struct pixel temp5 = rubik[46];

  rubik[45] = rubik[47];
  rubik[46] = rubik[50];

  rubik[47] = rubik[53];
  rubik[50] = rubik[52];

  rubik[53] = rubik[51];
  rubik[52] = rubik[48];

  rubik[51] = temp4;
  rubik[48] = temp5;

}
