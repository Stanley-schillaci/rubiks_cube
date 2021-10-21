#include "../structure/rubik.h"
#include "../structure/solution.h"
#include "../structure/rotation.h"
#include "../structure/rubikTools.h"
#include "../structure/switchRotation.h"
#include <stdio.h>
#include <stdlib.h>
#include <err.h>
/*
  OLL_X:
    args : --> structure rubik
           --> structure solution
           --> int face

    goal : execute one of the fridrich's OLL algorythm on the good face
            and write in the solution

    return : none

*/
void OLL_1(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_1  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("r U2 R' U' R U' r'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("LFFrfRfl","QUUruRuq",face,solution,1101,8,8),8);
}

void OLL_2(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_2  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("l' U2' L U L' U l",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("rFFLFlFR","kUULUluK",face,solution,1102,8,8),8);
}

void OLL_3(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_3  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("R U R' U R U' R' U' l' U R U'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("RUrURururFRf","RUrURurukURu",face,solution,1103,12,12),12);
}

void OLL_4(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_4  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("R' U' R U' R' U R U l U' R' U",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("ruRurURURbrB","ruRurURUKurU",face,solution,1104,12,12),12);
}

void OLL_5(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_5  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("rFRUrufUR",face,solution,1105,9),9);
}

void OLL_6(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_6  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("LfluLUFul",face,solution,1106,9),9);
}

void OLL_7(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_7  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("rurFRfUR",face,solution,1107,8),8);
}

void OLL_8(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_8  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RUrubrFRfB",face,solution,1108,10),10);
}

void OLL_9(struct pixel* rubik,struct res* solution,int face){
  //printf("OLL_9  face : %i\n",face );
  executeAlgo(rubik,solution,switchRotation("FRUruf",face,solution,1109,6),6);
}

void OLL_10(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_10  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("R U R' U' l' U R U'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("RUrurFRf","RUrukURu",face,solution,1110,8,8),8);
}

void OLL_11(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_11  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("r U R' U R U2 r'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("LFrFRFFl","QUrURUUq",face,solution,1111,8,8),8);
}

void OLL_12(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_12  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("l' U' L U' L' U2 l",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("rfLflFFR","kuLulUUK",face,solution,1112,8,8),8);
}

void OLL_13(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_13  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotationMultiple("LRRfRfrFFRfRl","QRRuRurUURuM",face,solution,1113,13,12),13);
}

void OLL_14(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_14  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("r' R2 U R' U R U2 R' U M’",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("lRRBrBRBBrBrL","qRRUrURUUrUm",face,solution,1114,13,12),13);
}

void OLL_15(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_15  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("R' F R F' d' L' U L",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("rFRfufUF","rFRfclUL",face,solution,1115,8,8),8);
}

void OLL_16(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_16  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("R' U2 l R U' R' U l' U2 R",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("rUURRbrBrUUR","rUUKRurUkUUR",face,solution,1116,12,12),12);
}

void OLL_17(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_17  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("R' U' R L→F U→F R U' R' F R U R'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("ruRFrfUFRf","ruRyxRurFRUr",face,solution,1117,10,12),10);
}

void OLL_18(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_18  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("R U R' D→F R→U R' U R B' R' U' R",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("RUrbRBubrB","RUrXzrURbruR",face,solution,1118,10,12),10);
}

void OLL_19(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_19  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("fLFluluLUlUL",face,solution,1119,12),12);
}

void OLL_20(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_20  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("FrfRURUruRur",face,solution,1120,12),12);
}

void OLL_21(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_21  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("FURurf",face,solution,1121,6),6);
}

void OLL_22(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_22  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("fulULF",face,solution,1122,6),6);
}

void OLL_23(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_23  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("B' R B' R2 U R U R' U' l U2",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("bRbRRURUruRBB","bRbRRURUruKUU",face,solution,1123,13,13),13);
}

void OLL_24(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_24  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("R2 U R' B' R U' R2 U l U l'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("RRUrbRuRRURBr","RRUrbRuRRUKUk",face,solution,1124,13,13),13);
}

void OLL_25(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_25  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("R U2 R' U' R U' R2 R→F L' U' L U F",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("RUUruRuRRfuFUR","RUUruRuRRYluLUF",face,solution,1125,14,15),14);
}

void OLL_26(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_26  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("L' U2 L U L' U L2 L→F R U R' U' F'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("lUULUlULLFUful","lUULUlULLyRUruf",face,solution,1126,14,15),14);
}

void OLL_27(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_27  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("rUURRUrURUUbrB",face,solution,1127,14),14);
}

void OLL_28(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_28  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("lbLurURurURlBL",face,solution,1128,14),14);
}

void OLL_29(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_29  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("FURurURurf",face,solution,1129,10),10);
}

void OLL_30(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_30  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("R U R' U R d' R U' R' F'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("RUrURuBubr","RUrURcRurf",face,solution,1130,10,10),10);
}

void OLL_31(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_31  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("R' F R U l' U' l L→F R U' R'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("rFRUrfRFuf","rFRUkuKyFuf",face,solution,1131,10,11),10);
}

void OLL_32(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_32  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("L F' L' U' r U r’ R→F L' U L",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("LfluLFlfUF","LfluQUqYlUL",face,solution,1132,10,11),10);
}

void OLL_33(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_33  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("lbLruRUlBL",face,solution,1133,10),10);
}

void OLL_34(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_34  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RBrLUluRbr",face,solution,1134,10),10);
}

void OLL_35(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_35  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("FRUruRUruf",face,solution,1135,10),10);
}

void OLL_36(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_36  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("fluLUluLUF",face,solution,1136,10),10);
}

void OLL_37(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_37  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("l' U R' U' l R U2 B' R B R'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("rFrfRRUUbRBr","kUruKRUUbRBr",face,solution,1137,12,12),12);
}

void OLL_38(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_38  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("r U' L U r' L' U2 B L' B' L",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("LfLFllUUBlbL","QuLUqlUUBlbL",face,solution,1138,12,12),12);
}

void OLL_39(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_39  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("r U R' U R U' R' U R U2 r'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("LFrFRfrFRFFl","QUrURurURUUq",face,solution,1139,12,12),12);
}

void OLL_40(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_40  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("l' U' L U' L' U L U' L' U2 l",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("rfLflFLflFFR","kuLulULulUUK",face,solution,1140,12,12),12);
}

void OLL_41(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_41  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("R U R' U' M' U R U' r'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("RUrurLFRfl","RUrumURuq",face,solution,1141,10,9),10);
}

void OLL_42(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_42  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("r U R' U' M U R U' R'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("LFrfRlURur","QUruMURur",face,solution,1142,10,9),10);
}

void OLL_43(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_43  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("M U R U R' U' M2 U R U' r'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("RlBRBrbRLRLFRfl","MURUruMMURur",face,solution,1143,15,12),15);
}

void OLL_44(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_44  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RUURRFRfUUrFRf",face,solution,1144,14),14);
}

void OLL_45(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_45  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("M U R U R' U' r R2 F R F'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("RlBRBrbLRRFRf","MURUruQRRFRf",face,solution,1145,13,12),13);
}

void OLL_46(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_46  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("F R U R' U L→F R' U2 R' F R F'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("FRUrUfUUfLFl","FRUrUyrUUrFRf",face,solution,1146,12,13),12);
}

void OLL_47(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_47  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("M U' r U2 r' U' R U' r R2",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("RlbLUUlbRbLRR","MuQUUquRuQRR",face,solution,1147,13,12),13);
}

void OLL_48(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_48  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("M' U r' U2 r U R' U r' R2",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("rLFlUULFrFlRR","mUqUUQUrUrRR",face,solution,1148,13,12),13);
}

void OLL_49(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_49  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RUrUrFRfUUrFRf",face,solution,1149,14),14);
}

void OLL_50(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_50  face : %i\n",face );
    //executeAlgo(rubik,solution,switchRotation("D→F U R' U' l U R2 B' R' B U' R'",face,solution,));
    executeAlgo(rubik,solution,switchRotationMultiple("FrfRURRbrBur","XUruKURRbrBur",face,solution,1150,12,13),12);
}

void OLL_51(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_51  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UURUURDrUURdRR",face,solution,1151,14),14);
}

void OLL_52(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_52  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotationMultiple("rfLFRflF","kuLURulU",face,solution,1152,8,8),8);
    //executeAlgo(rubik,solution,switchRotation("rfLFRflF",face,solution,)); // à changer
}

void OLL_53(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_53  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RRDrUURdrUUr",face,solution,1153,12),12);
}

void OLL_54(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_54  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("lUULUlUL",face,solution,1154,8),8);
}

void OLL_55(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_55  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RUUruRur",face,solution,1155,8),8);
}

void OLL_56(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_56  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RUrURurURUUr",face,solution,1156,12),12);
}

void OLL_57(struct pixel* rubik,struct res* solution,int face){
    //printf("OLL_57  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RUURRuRRuRRUUR",face,solution,1157,14),14);
}

void executeOLL(struct pixel* rubik,struct res* solution,int face,int nb){
  if(nb == 1){ OLL_1(rubik,solution,face); }
  else if(nb == 2){ OLL_2(rubik,solution,face); }
  else if(nb == 3){ OLL_3(rubik,solution,face); }
  else if(nb == 4){ OLL_4(rubik,solution,face); }
  else if(nb == 5){ OLL_5(rubik,solution,face); }
  else if(nb == 6){ OLL_6(rubik,solution,face); }
  else if(nb == 7){ OLL_7(rubik,solution,face); }
  else if(nb == 8){ OLL_8(rubik,solution,face); }
  else if(nb == 9){ OLL_9(rubik,solution,face); }
  else if(nb == 10){ OLL_10(rubik,solution,face); }
  else if(nb == 11){ OLL_11(rubik,solution,face); }
  else if(nb == 12){ OLL_12(rubik,solution,face); }
  else if(nb == 13){ OLL_13(rubik,solution,face); }
  else if(nb == 14){ OLL_14(rubik,solution,face); }
  else if(nb == 15){ OLL_15(rubik,solution,face); }
  else if(nb == 16){ OLL_16(rubik,solution,face); }
  else if(nb == 17){ OLL_17(rubik,solution,face); }
  else if(nb == 18){ OLL_18(rubik,solution,face); }
  else if(nb == 19){ OLL_19(rubik,solution,face); }
  else if(nb == 20){ OLL_20(rubik,solution,face); }
  else if(nb == 21){ OLL_21(rubik,solution,face); }
  else if(nb == 22){ OLL_22(rubik,solution,face); }
  else if(nb == 23){ OLL_23(rubik,solution,face); }
  else if(nb == 24){ OLL_24(rubik,solution,face); }
  else if(nb == 25){ OLL_25(rubik,solution,face); }
  else if(nb == 26){ OLL_26(rubik,solution,face); }
  else if(nb == 27){ OLL_27(rubik,solution,face); }
  else if(nb == 28){ OLL_28(rubik,solution,face); }
  else if(nb == 29){ OLL_29(rubik,solution,face); }
  else if(nb == 30){ OLL_30(rubik,solution,face); }
  else if(nb == 31){ OLL_31(rubik,solution,face); }
  else if(nb == 32){ OLL_32(rubik,solution,face); }
  else if(nb == 33){ OLL_33(rubik,solution,face); }
  else if(nb == 34){ OLL_34(rubik,solution,face); }
  else if(nb == 35){ OLL_35(rubik,solution,face); }
  else if(nb == 36){ OLL_36(rubik,solution,face); }
  else if(nb == 37){ OLL_37(rubik,solution,face); }
  else if(nb == 38){ OLL_38(rubik,solution,face); }
  else if(nb == 39){ OLL_39(rubik,solution,face); }
  else if(nb == 40){ OLL_40(rubik,solution,face); }
  else if(nb == 41){ OLL_41(rubik,solution,face); }
  else if(nb == 42){ OLL_42(rubik,solution,face); }
  else if(nb == 43){ OLL_43(rubik,solution,face); }
  else if(nb == 44){ OLL_44(rubik,solution,face); }
  else if(nb == 45){ OLL_45(rubik,solution,face); }
  else if(nb == 46){ OLL_46(rubik,solution,face); }
  else if(nb == 47){ OLL_47(rubik,solution,face); }
  else if(nb == 48){ OLL_48(rubik,solution,face); }
  else if(nb == 49){ OLL_49(rubik,solution,face); }
  else if(nb == 50){ OLL_50(rubik,solution,face); }
  else if(nb == 51){ OLL_51(rubik,solution,face); }
  else if(nb == 52){ OLL_52(rubik,solution,face); }
  else if(nb == 53){ OLL_53(rubik,solution,face); }
  else if(nb == 54){ OLL_54(rubik,solution,face); }
  else if(nb == 55){ OLL_55(rubik,solution,face); }
  else if(nb == 56){ OLL_56(rubik,solution,face); }
  else if(nb == 57){ OLL_57(rubik,solution,face); }
  else{
    printf("Problem execute OLL\n" );
  }
}

/*
  yellowToMatrixYG:
    args : --> structure rubik
           --> int* mat

    goal : create a matrix of 1 and 0 to know the position of the yellow piece
            on the last layer and the yellow face.
            This matrix is oriented we start with the yellow face on top and
              the green face on front

    return : int* mat -> the matrix

*/
int* yellowToMatrixYG(struct pixel* rubik,int *mat){

    //if color == 5 (yellow) we put a 1 else a 0

    mat[0] = rubik[47].color == 5;
    mat[1] = rubik[46].color == 5;
    mat[2] = rubik[45].color == 5;

    mat[3] = rubik[50].color == 5;
    mat[4] = 1; //center yellow
    mat[5] = rubik[48].color == 5;

    mat[6] = rubik[53].color == 5;
    mat[7] = rubik[52].color == 5;
    mat[8] = rubik[51].color == 5;



    mat[9] = rubik[38].color == 5;
    mat[10] = rubik[37].color == 5;
    mat[11] = rubik[36].color == 5;

    mat[12] = rubik[35].color == 5;
    mat[13] = rubik[34].color == 5;
    mat[14] = rubik[33].color == 5;

    mat[15] = rubik[44].color == 5;
    mat[16] = rubik[43].color == 5;
    mat[17] = rubik[42].color == 5;

    mat[18] = rubik[41].color == 5;
    mat[19] = rubik[40].color == 5;
    mat[20] = rubik[39].color == 5;


    return mat;



}

/*
  translateYellowMat:
    args : --> int* matYG
           --> int* mat
           --> int face

    goal : transpose a YG mat in an other face mat (YR,YB or YO)

    return : int* mat -> the transpose matrix

*/
int* translateYellowMat(int *matYG,int *mat, int face){

    //we check for the face
    if(face == 53){

        mat[0] = matYG[2];
        mat[1] = matYG[5];
        mat[2] = matYG[8];

        mat[3] = matYG[1];
        mat[4] = 1; //center yellow
        mat[5] = matYG[7];

        mat[6] = matYG[0];
        mat[7] = matYG[3];
        mat[8] = matYG[6];



        mat[9] = matYG[12];
        mat[10] = matYG[13];
        mat[11] = matYG[14];

        mat[12] = matYG[15];
        mat[13] = matYG[16];
        mat[14] = matYG[17];

        mat[15] = matYG[18];
        mat[16] = matYG[19];
        mat[17] = matYG[20];

        mat[18] = matYG[9];
        mat[19] = matYG[10];
        mat[20] = matYG[11];
    }
    else if(face == 54){

      mat[0] = matYG[8];
      mat[1] = matYG[7];
      mat[2] = matYG[6];

      mat[3] = matYG[5];
      mat[4] = 1; //center yellow
      mat[5] = matYG[3];

      mat[6] = matYG[2];
      mat[7] = matYG[1];
      mat[8] = matYG[0];



      mat[9] = matYG[15];
      mat[10] = matYG[16];
      mat[11] = matYG[17];

      mat[12] = matYG[18];
      mat[13] = matYG[19];
      mat[14] = matYG[20];

      mat[15] = matYG[9];
      mat[16] = matYG[10];
      mat[17] = matYG[11];

      mat[18] = matYG[12];
      mat[19] = matYG[13];
      mat[20] = matYG[14];

    }
    else if(face == 52){

      mat[0] = matYG[6];
      mat[1] = matYG[3];
      mat[2] = matYG[0];

      mat[3] = matYG[7];
      mat[4] = 1; //center yellow
      mat[5] = matYG[1];

      mat[6] = matYG[8];
      mat[7] = matYG[5];
      mat[8] = matYG[2];



      mat[9] = matYG[18];
      mat[10] = matYG[19];
      mat[11] = matYG[20];

      mat[12] = matYG[9];
      mat[13] = matYG[10];
      mat[14] = matYG[11];

      mat[15] = matYG[12];
      mat[16] = matYG[13];
      mat[17] = matYG[14];

      mat[18] = matYG[15];
      mat[19] = matYG[16];
      mat[20] = matYG[17];
    }

    return mat;



}

/*
  compareMat:
    args : --> int* mat
           --> int* oll

    goal : compare a matrix with a know OLL matrix to use the good algorythm

    return : int -> true of false

*/
int compareMat(int *mat, int *oll){
  for (int i = 0; i < 21; i++) {
    if(mat[i] != oll[i]){
      return 0;
    }
  }
  return 1;
}

int compareMatMultipleOLL(struct pixel*  rubik, struct res* solution,int nb,
   int *matYG, int *matYO,int *matYB,int *matYR, int *Oll){

     //printf("% i -",nb );

     int nby = 0;

     for (int i = 0; i < 21; i++) {
       if(Oll[i] == 1){
         nby += 1;
       }
     }

     if(nby != 9){
       errx(1,"Matrice avec %i jaunes --> n°%i",nby,nb);
     }

     if(compareMat(matYG,Oll)){
       executeOLL(rubik,solution,51,nb);
       //printf("\nExecute %i on Green\n",nb );
       return 1;
     }
     else if(compareMat(matYO,Oll)){
       executeOLL(rubik,solution,53,nb);
       //printf("\nExecute %i on Orange\n",nb );
       return 1;
     }
     else if(compareMat(matYB,Oll)){
       executeOLL(rubik,solution,54,nb);
       //printf("\nExecute %i on Blue\n",nb );
       return 1;
     }
     else if(compareMat(matYR,Oll)){
       executeOLL(rubik,solution,52,nb);
       //printf("\nExecute %i on Red\n",nb );
       return 1;
     }

     return 0;
  }


  /*
    createOLL:
      args : --> struct rubik
             --> struct solution

      goal : create a full yellow face (but not oriented)

      return : int -> true of false

  */
int createOLL(struct pixel* rubik,struct res* solution){
  //we malloc our matrix

  int *matYG = malloc(sizeof(int) * 21);
  int *matYO = malloc(sizeof(int) * 21);
  int *matYB = malloc(sizeof(int) * 21);
  int *matYR = malloc(sizeof(int) * 21);

  //we create the YG
  matYG = yellowToMatrixYG(rubik,matYG);

  //and we transpose for the other
  matYO = translateYellowMat(matYG,matYO,53);
  matYB = translateYellowMat(matYG,matYB,54);
  matYR = translateYellowMat(matYG,matYR,52);


  int nby = 0; //Number yellow on yellow face

  //We count of many yellow we already have on the yellow face
  for (int i = 0; i < 9; i++) {
    if(matYG[i] == 1){
      nby += 1;
    }
  }

  //printf("nby == %i\n",nby );

  if(nby == 1){

    //OLL 44
    int OLL44mat[21] = {0,0,0, 0,1,0, 0,0,0,   0,1,0, 1,1,1, 0,1,0, 1,1,1};
    if(compareMatMultipleOLL(rubik,solution,44,matYG,matYO,matYB,matYR,OLL44mat) == 1){
      return 1;
    }

    //OLL 50
    int OLL50mat[21] = {0,0,0, 0,1,0, 0,0,0,  1,1,0, 1,1,1, 0,1,1, 0,1,0};
    if(compareMatMultipleOLL(rubik,solution,50,matYG,matYO,matYB,matYR,OLL50mat) == 1){
      return 1;
    }

  }else if(nby == 2){

    //OLL 47
    int OLL47mat[21] = {0,0,1, 0,1,0, 0,0,0,   1,1,0, 0,1,0, 1,1,0, 1,1,0};
    if(compareMatMultipleOLL(rubik,solution,47,matYG,matYO,matYB,matYR,OLL47mat) == 1){
      return 1;
    }

    //OLL 48
    int OLL48mat[21] = {0,0,0, 0,1,0, 0,0,1,   0,1,1, 0,1,0, 0,1,1, 0,1,1};
    if(compareMatMultipleOLL(rubik,solution,48,matYG,matYO,matYB,matYR,OLL48mat) == 1){
      return 1;
    }

  }else if(nby == 3){

    //OLL 27
    int OLL27mat[21] = {0,1,0, 0,1,0, 0,1,0,   0,0,0, 1,1,1, 0,0,0, 1,1,1};
    if(compareMatMultipleOLL(rubik,solution,27,matYG,matYO,matYB,matYR,OLL27mat ) == 1){
      return 1;
    }

    //OLL 28
    int OLL28mat[21] = {0,0,0, 1,1,1, 0,0,0,   0,1,0, 1,0,1, 0,1,0, 1,0,1};
    if(compareMatMultipleOLL(rubik,solution,28,matYG,matYO,matYB,matYR,OLL28mat ) == 1){
      return 1;
    }

    //OLL 29
    int OLL29mat[21] = {0,0,0, 1,1,1, 0,0,0,   1,1,0, 1,0,1, 0,1,1, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,29,matYG,matYO,matYB,matYR,OLL29mat ) == 1){
      return 1;
    }

    //OLL 30
    int OLL30mat[21] = {0,1,0, 0,1,0, 0,1,0,   1,0,0, 1,1,1, 0,0,1, 0,1,0};
    if(compareMatMultipleOLL(rubik,solution,30,matYG,matYO,matYB,matYR,OLL30mat ) == 1){
      return 1;
    }

    //OLL 35
    int OLL35mat[21] = {0,0,0, 1,1,0, 0,1,0,   0,1,1, 0,1,0, 1,0,0, 1,0,1};
    if(compareMatMultipleOLL(rubik,solution,35,matYG,matYO,matYB,matYR,OLL35mat ) == 1){
      return 1;
    }

    //OLL 36
    int OLL36mat[21] = {0,0,0, 0,1,1, 0,1,0,   1,1,0, 1,0,1, 0,0,1, 0,1,0};
    if(compareMatMultipleOLL(rubik,solution,36,matYG,matYO,matYB,matYR,OLL36mat ) == 1){
      return 1;
    }

    //OLL 37
    int OLL37mat[21] = {0,0,0, 0,1,1, 0,1,0,   0,1,1, 0,0,0, 1,0,0, 1,1,1};
    if(compareMatMultipleOLL(rubik,solution,37,matYG,matYO,matYB,matYR,OLL37mat ) == 1){
      return 1;
    }

    //OLL 38
    int OLL38mat[21] = {0,0,0, 1,1,0, 0,1,0,   1,1,0, 1,1,1, 0,0,1, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,38,matYG,matYO,matYB,matYR,OLL38mat ) == 1){
      return 1;
    }

    //OLL 39
    int OLL39mat[21] = {0,0,0, 0,1,1, 0,1,0,   0,1,0, 1,0,1, 0,0,0, 1,1,1};
    if(compareMatMultipleOLL(rubik,solution,39,matYG,matYO,matYB,matYR,OLL39mat ) == 1){
      return 1;
    }

    //OLL 40
    int OLL40mat[21] = {0,0,0, 1,1,0, 0,1,0,   0,1,0, 1,1,1, 0,0,0, 1,0,1};
    if(compareMatMultipleOLL(rubik,solution,40,matYG,matYO,matYB,matYR,OLL40mat ) == 1){
      return 1;
    }

    //OLL 45
    int OLL45mat[21] = {0,0,0, 0,1,0, 1,0,1,   0,1,0, 1,1,0, 0,1,0, 0,1,1};
    if(compareMatMultipleOLL(rubik,solution,45,matYG,matYO,matYB,matYR,OLL45mat ) == 1){
      return 1;
    }

    //OLL 46
    int OLL46mat[21] = {1,0,1, 0,1,0, 0,0,0,   0,1,0, 0,1,0, 1,1,1, 0,1,0};
    if(compareMatMultipleOLL(rubik,solution,46,matYG,matYO,matYB,matYR,OLL46mat ) == 1){
      return 1;
    }

    //OLL 49
    int OLL49mat[21] = {0,0,1, 0,1,0, 1,0,0,   0,1,0, 0,1,0, 1,1,0, 0,1,1};
    if(compareMatMultipleOLL(rubik,solution,49,matYG,matYO,matYB,matYR,OLL49mat ) == 1){
      return 1;
    }

  }else if(nby == 4){

    //OLL 1
    int OLL1mat[21] = {0,0,0, 0,1,1, 0,1,1,   1,1,0, 1,0,0, 0,0,0, 1,1,0};
    if(compareMatMultipleOLL(rubik,solution,1,matYG,matYO,matYB,matYR,OLL1mat) == 1){
        return 1;
    }

    //OLL 2
    int OLL2mat[21] = {0,0,0, 1,1,0, 1,1,0,   0,1,1, 0,1,1, 0,0,0, 0,0,1};
    if(compareMatMultipleOLL(rubik,solution,2,matYG,matYO,matYB,matYR,OLL2mat) == 1){
        return 1;
    }

    //OLL 11
    int OLL11mat[21] = {1,0,0, 1,1,0, 0,1,0,   0,1,1, 0,1,1, 0,0,1, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,11,matYG,matYO,matYB,matYR,OLL11mat) == 1){
        return 1;
    }

    //OLL 12
    int OLL12mat[21] = {0,0,1, 0,1,1, 0,1,0,   1,1,0, 0,0,0, 1,0,0, 1,1,0};
    if(compareMatMultipleOLL(rubik,solution,12,matYG,matYO,matYB,matYR,OLL12mat) == 1){
        return 1;
    }

    //OLL 13
    int OLL13mat[21] = {0,0,0, 0,1,1, 1,1,0,   1,1,0, 1,0,0, 1,0,0, 0,1,0};
    if(compareMatMultipleOLL(rubik,solution,13,matYG,matYO,matYB,matYR,OLL13mat) == 1){
        return 1;
    }

    //OLL 14
    int OLL14mat[21] = {1,1,0, 0,1,1, 0,0,0,   0,0,1, 0,0,1, 0,1,1, 0,1,0};
    if(compareMatMultipleOLL(rubik,solution,14,matYG,matYO,matYB,matYR,OLL14mat) == 1){
        return 1;
    }

    //OLL 17
    int OLL17mat[21] = {0,0,1, 1,1,0, 0,1,0,   1,1,0, 0,1,0, 1,0,0, 1,0,0};
    if(compareMatMultipleOLL(rubik,solution,17,matYG,matYO,matYB,matYR,OLL17mat) == 1){
        return 1;
    }

    //OLL 18
    int OLL18mat[21] = {0,1,0, 1,1,0, 0,0,1,   0,0,1, 0,1,0, 0,1,1, 0,0,1};
    if(compareMatMultipleOLL(rubik,solution,18,matYG,matYO,matYB,matYR,OLL18mat) == 1){
        return 1;
    }

    //OLL 31
    int OLL31mat[21] = {0,0,1, 1,1,1, 0,0,0,   1,1,0, 0,0,0, 1,1,0, 1,0,0};
    if(compareMatMultipleOLL(rubik,solution,31,matYG,matYO,matYB,matYR,OLL31mat) == 1){
        return 1;
    }

    //OLL 32
    int OLL32mat[21] = {1,0,0, 1,1,1, 0,0,0,   0,1,1, 0,0,1, 0,1,1, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,32,matYG,matYO,matYB,matYR,OLL32mat) == 1){
        return 1;
    }

    //OLL 33
    int OLL33mat[21] = {0,0,1, 1,1,1, 0,0,0,   0,1,0, 0,0,1, 0,1,1, 0,0,1};
    if(compareMatMultipleOLL(rubik,solution,33,matYG,matYO,matYB,matYR,OLL33mat) == 1){
        return 1;
    }

    //OLL 34
    int OLL34mat[21] = {1,0,0, 1,1,1, 0,0,0,   0,1,0, 1,0,0, 1,1,0, 1,0,0};
    if(compareMatMultipleOLL(rubik,solution,34,matYG,matYO,matYB,matYR,OLL34mat) == 1){
        return 1;
    }

  }else if(nby == 5){

    //OLL 3
    int OLL3mat[21] = {1,0,0, 1,1,0, 0,1,1,   0,1,0, 1,1,0, 0,0,1, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,3,matYG,matYO,matYB,matYR,OLL3mat) == 1){
        return 1;
    }

    //OLL 4
    int OLL4mat[21] = {0,1,1, 1,1,0, 1,0,0,   1,0,0, 0,1,1, 0,1,0, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,4,matYG,matYO,matYB,matYR,OLL4mat) == 1){
        return 1;
    }

    //OLL 5
    int OLL5mat[21] = {0,0,1, 1,1,1, 1,0,0,   0,1,0, 0,0,0, 1,1,0, 0,0,1};
    if(compareMatMultipleOLL(rubik,solution,5,matYG,matYO,matYB,matYR,OLL5mat) == 1){
        return 1;
    }

    //OLL 6
    int OLL6mat[21] = {1,0,0, 1,1,1, 0,0,1,   0,1,0, 1,0,0, 0,1,1, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,6,matYG,matYO,matYB,matYR,OLL6mat) == 1){
        return 1;
    }

    //OLL 7
    int OLL7mat[21] = {1,1,0, 0,1,0, 1,1,0,   0,0,0, 1,1,1, 0,0,0, 0,1,0};
    if(compareMatMultipleOLL(rubik,solution,7,matYG,matYO,matYB,matYR,OLL7mat) == 1){
        return 1;
    }

    //OLL 8
    int OLL8mat[21] = {1,0,1, 1,1,1, 0,0,0,   0,1,0, 0,0,1, 0,1,0, 1,0,0};
    if(compareMatMultipleOLL(rubik,solution,8,matYG,matYO,matYB,matYR,OLL8mat) == 1){
        return 1;
    }

    //OLL 9
    int OLL9mat[21] = {0,0,1, 1,1,1, 0,0,1,   0,1,0, 0,0,0, 0,1,0, 1,0,1};
    if(compareMatMultipleOLL(rubik,solution,9,matYG,matYO,matYB,matYR,OLL9mat) == 1){
        return 1;
    }

    //OLL 10
    int OLL10mat[21] = {0,0,1, 1,1,1, 0,0,1,   1,1,0, 0,0,0, 0,1,1, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,10,matYG,matYO,matYB,matYR,OLL10mat) == 1){
        return 1;
    }

    //OLL 15
    int OLL15mat[21] = {0,0,1, 1,1,0, 1,1,0,   1,1,0, 0,1,1, 0,0,0, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,15,matYG,matYO,matYB,matYR,OLL15mat) == 1){
        return 1;
    }

    //OLL 16
    int OLL16mat[21] = {1,0,0, 0,1,1, 0,1,1,   0,1,0, 1,0,0, 0,0,1, 0,1,0};
    if(compareMatMultipleOLL(rubik,solution,16,matYG,matYO,matYB,matYR,OLL16mat) == 1){
        return 1;
    }

    //OLL 19
    int OLL19mat[21] = {0,0,0, 0,1,1, 1,1,1,   0,1,0, 1,0,0, 0,0,0, 0,1,1};
    if(compareMatMultipleOLL(rubik,solution,19,matYG,matYO,matYB,matYR,OLL19mat) == 1){
        return 1;
    }

    //OLL 20
    int OLL20mat[21] = {0,0,0, 1,1,0, 1,1,1,   0,1,0, 1,1,0, 0,0,0, 0,0,1};
    if(compareMatMultipleOLL(rubik,solution,20,matYG,matYO,matYB,matYR,OLL20mat) == 1){
        return 1;
    }

    //OLL 21
    int OLL21mat[21] = {1,0,0, 1,1,0, 1,1,0,   0,1,0, 1,1,1, 0,0,0, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,21,matYG,matYO,matYB,matYR,OLL21mat) == 1){
        return 1;
    }

    //OLL 22
    int OLL22mat[21] = {0,0,1, 0,1,1, 0,1,1,   0,1,0, 0,0,0, 0,0,0, 1,1,1};
    if(compareMatMultipleOLL(rubik,solution,22,matYG,matYO,matYB,matYR,OLL22mat) == 1){
        return 1;
    }

    //OLL 23
    int OLL23mat[21] = {0,1,0, 1,1,0, 1,0,1,   0,0,0, 1,1,0, 0,1,0, 0,0,1};
    if(compareMatMultipleOLL(rubik,solution,23,matYG,matYO,matYB,matYR,OLL23mat) == 1){
        return 1;
    }

    //OLL 24
    int OLL24mat[21] = {0,1,0, 0,1,1, 1,0,1,   0,0,0, 1,0,0, 0,1,0, 0,1,1};
    if(compareMatMultipleOLL(rubik,solution,24,matYG,matYO,matYB,matYR,OLL24mat) == 1){
        return 1;
    }

    //OLL 25
    int OLL25mat[21] = {0,1,1, 1,1,0, 0,0,1,   0,0,0, 0,1,0, 0,1,0, 1,0,1};
    if(compareMatMultipleOLL(rubik,solution,25,matYG,matYO,matYB,matYR,OLL25mat) == 1){
        return 1;
    }

    //OLL 26
    int OLL26mat[21] = {1,1,0, 0,1,1, 1,0,0,   0,0,0, 1,0,1, 0,1,0, 0,1,0};
    if(compareMatMultipleOLL(rubik,solution,26,matYG,matYO,matYB,matYR,OLL26mat) == 1){
        return 1;
    }

    //OLL 43
    int OLL43mat[21] = {1,0,1, 0,1,0, 1,0,1,   0,1,0, 0,1,0, 0,1,0, 0,1,0};
    if(compareMatMultipleOLL(rubik,solution,43,matYG,matYO,matYB,matYR,OLL43mat) == 1){
        return 1;
    }

    //OLL 56
    int OLL56mat[21] = {0,1,0, 1,1,1, 0,1,0,   0,0,0, 1,0,1, 0,0,0, 1,0,1};
    if(compareMatMultipleOLL(rubik,solution,56,matYG,matYO,matYB,matYR,OLL56mat) == 1){
        return 1;
    }

    //OLL 57
    int OLL57mat[21] = {0,1,0, 1,1,1, 0,1,0,   0,0,1, 0,0,0, 1,0,0, 1,0,1};
    if(compareMatMultipleOLL(rubik,solution,57,matYG,matYO,matYB,matYR,OLL57mat) == 1){
        return 1;
    }

  }else if(nby == 6){

    //OLL 54
    int OLL54mat[21] = {0,1,0, 1,1,1, 1,1,0,   0,0,1, 0,0,1, 0,0,0, 0,0,1};
    if(compareMatMultipleOLL(rubik,solution,54,matYG,matYO,matYB,matYR,OLL54mat) == 1){
        return 1;
    }

    //OLL 55
    int OLL55mat[21] = {0,1,0, 1,1,1, 0,1,1,   1,0,0, 1,0,0, 0,0,0, 1,0,0};
    if(compareMatMultipleOLL(rubik,solution,55,matYG,matYO,matYB,matYR,OLL55mat) == 1){
        return 1;
    }

  }else if(nby == 7){

    //OLL 41
    int OLL41mat[21] = {1,0,1, 1,1,1, 1,0,1,   0,1,0, 0,0,0, 0,1,0, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,41,matYG,matYO,matYB,matYR,OLL41mat) == 1){
        return 1;
    }

    //OLL 42
    int OLL42mat[21] = {1,0,1, 1,1,0, 1,1,1,   0,1,0, 0,1,0, 0,0,0, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,42,matYG,matYO,matYB,matYR,OLL42mat) == 1){
        return 1;
    }

    //OLL 51
    int OLL51mat[21] = {0,1,1, 1,1,1, 1,1,0,   0,0,0, 0,0,0, 1,0,0, 0,0,1};
    if(compareMatMultipleOLL(rubik,solution,51,matYG,matYO,matYB,matYR,OLL51mat) == 1){
        return 1;
    }

    //OLL 52
    int OLL52mat[21] = {1,1,0, 1,1,1, 1,1,0,   0,0,1, 0,0,0, 1,0,0, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,52,matYG,matYO,matYB,matYR,OLL52mat) == 1){
        return 1;
    }

    //OLL 53
    int OLL53mat[21] = {0,1,0, 1,1,1, 1,1,1,   1,0,1, 0,0,0, 0,0,0, 0,0,0};
    if(compareMatMultipleOLL(rubik,solution,53,matYG,matYO,matYB,matYR,OLL53mat) == 1){
        return 1;
    }

  }else if(nby == 9){
    return 1;
  }


  return 0;

}
