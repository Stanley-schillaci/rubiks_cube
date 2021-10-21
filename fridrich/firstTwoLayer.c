#include "../structure/rubik.h"
#include "../structure/solution.h"
#include "../structure/rotation.h"
#include "../structure/rubikTools.h"
#include "../structure/switchRotation.h"
#include <stdio.h>
#include <stdlib.h>
#include <err.h>

/*
  F2L_X:
    args : --> structure rubik
           --> structure solution
           --> int face

    goal : execute one of the fridrich's F2L algorythm on the good face
            and write in the solution

    return : none

*/

void F2L_1(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_1  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("LLUULUlULUUL",face,solution,info,12),12);
}

void F2L_2(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_2  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("lUUluLulUULL",face,solution,info,12),12);
}

void F2L_3(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_3  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RuRUBubRR",face,solution,info,9),9);
}

void F2L_4(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_4  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("lUlubUBLL",face,solution,info,9),9);
}

void F2L_5(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_5  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RUrUURUUrUfuF",face,solution,info,13),13);
}

void F2L_6(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_6  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("ulULUFuf",face,solution,info,8),8);
}

void F2L_7(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_7  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("URurufUF",face,solution,info,8),8);
}

void F2L_8(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_8  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("lULulUL",face,solution,info,7),7);
}

void F2L_9(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_9  face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RUruRUr",face,solution,info,7),7);
}

void F2L_10(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_10 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("luLUluL",face,solution,info,7),7);
}

void F2L_11(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_11 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RurURur",face,solution,info,7),7);
}

void F2L_12(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_12 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RRURRURRUURR",face,solution,info,12),12);
}

void F2L_13(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_13 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UlULUUlUL",face,solution,info,9),9);
}

void F2L_14(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_14 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("uRurUURur",face,solution,info,9),9);
}

void F2L_15(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_15 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UluLuFUf",face,solution,info,8),8);
}

void F2L_16(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_16 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("uRUrUfuF",face,solution,info,8),8);
}

void F2L_17(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_17 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("fUFRUUr",face,solution,info,7),7);
}

void F2L_18(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_18 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RUUruRUr",face,solution,info,8),8);
}

void F2L_19(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_19 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("URur",face,solution,info,4),4);
}

void F2L_20(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_20 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("uRurURUr",face,solution,info,8),8);
}

void F2L_21(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_21 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UULLUULUlULL",face,solution,info,12),12);
}

void F2L_22(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_22 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("uRUUrUfuF",face,solution,info,9),9);
}

void F2L_23(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_23 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RurUUfuF",face,solution,info,8),8);
}

void F2L_24(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_24 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UlULuluL",face,solution,info,8),8);
}

void F2L_25(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_25 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("ulUL",face,solution,info,4),4);
}

void F2L_26(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_26 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("lUULUluL",face,solution,info,8),8);
}

void F2L_27(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_27 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("lULUUFUf",face,solution,info,8),8);
}

void F2L_28(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_28 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UlUULuFUf",face,solution,info,9),9);
}

void F2L_29(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_29 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UURRUUruRuRR",face,solution,info,12),12);
}

void F2L_30(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_30 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UUluLulUL",face,solution,info,9),9);
}

void F2L_31(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_31 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("URUUrURur",face,solution,info,9),9);
}

void F2L_32(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_32 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("ulUULulUL",face,solution,info,9),9);
}

void F2L_33(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_33 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UURUrURur",face,solution,info,9),9);
}

void F2L_34(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_34 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UlUULUUlUL",face,solution,info,10),10);
}

void F2L_35(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_35 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("RUr",face,solution,info,3),3);
}

void F2L_36(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_36 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UluLUUlUL",face,solution,info,9),9);
}

void F2L_37(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_37 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("UlULuFUf",face,solution,info,8),8);
}

void F2L_38(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_38 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("uRurUfuF",face,solution,info,8),8);
}

void F2L_39(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_39 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("uRUrUURur",face,solution,info,9),9);
}

void F2L_40(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_40 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("uRUUrUURur",face,solution,info,10),10);
}

void F2L_41(struct pixel* rubik,struct res* solution,int face,int info){
    //printf("F2L_41 face : %i\n",face );
    executeAlgo(rubik,solution,switchRotation("luL",face,solution,info,3),3);
}

/*
  putF2L:
    args : --> structure rubik
           --> structure solution
           --> int color

    goal : Place a pair of cubes in any case

    return : none
*/
int putF2L(struct pixel* rubik,struct res* solution,int color){

  /*
    We have 4 pairs to place,

      Blue-Red
      Red-Green
      Green-Orange
      Orange-Blue

      in reality the "code" are the same for the 4 pairs
      execpt of the variable we need to consider.
      To avoid a 4 times longer code, we setup a lots of variable in each case.
  */



  int borderC,borderLeft,
      cornerC,cornerTop,cornerLeft,
      colorLeft,colorRight,faceLeft,faceRight,
      yellowBorderLeft,yellowBorderRight,yellowBorderLeftOppo,yellowBorderRightOppo,
      yellowCornerTop,
      checkBorderRight,checkBorderOppo,checkBorderLeft,
      checkCornerRight,checkCornerOppo,checkCornerLeft,
      checkYellowCornerRight,checkYellowCornerOppo,
      place,join,cornerOut,borderOut,cornerMove;



  if(color == 1){
      //Blue Red
      borderC = 15; //cube border ORANGE-RED
      borderLeft = 30; //border BLUE (red)

      cornerC = 2;  //cube corner WHITE-BLUE-RED
      cornerTop = 2;  //corner WHITE (blue-red)
      cornerLeft = 18; //corner BLUE (white-red)

      colorLeft = 4;
      colorRight = 2;

      faceLeft = 54;
      faceRight = 52;

      yellowBorderLeft = 52;
      yellowBorderRight = 50;
      yellowBorderLeftOppo = 46;
      yellowBorderRightOppo = 48;

      yellowCornerTop = 53;

      checkBorderRight = 27;
      checkBorderOppo = 24;
      checkBorderLeft = 21;

      checkCornerRight = 8;
      checkCornerOppo = 6;
      checkCornerLeft = 0;

      checkYellowCornerRight = 47;
      checkYellowCornerOppo = 45;

      place = 1010;
      join = 1014;
      cornerOut = 1018;
      borderOut = 1022;
      cornerMove = 1026;



  }else if(color == 2){
    //Red Green
    borderC = 13; //cube border ORANGE-RED
    borderLeft = 27; //border BLUE (red)
    //borderRight = 26; //border RED (blue)

    cornerC = 8;  //cube corner WHITE-BLUE-RED
    cornerTop = 8;  //corner WHITE (blue-red)
    cornerLeft = 15; //corner BLUE (white-red)
    //cornerRight = 14;  //corner RED (white-blue)

    colorLeft = 2;
    colorRight = 1;


    faceLeft = 52;
    faceRight = 51;

    yellowBorderLeft = 50;
    yellowBorderRight = 46;
    yellowBorderLeftOppo = 48;
    yellowBorderRightOppo = 52;

    yellowCornerTop = 47;

    checkBorderRight = 24;
    checkBorderOppo = 21;
    checkBorderLeft = 30;

    checkCornerRight = 6;
    checkCornerOppo = 0;
    checkCornerLeft = 2;

    checkYellowCornerRight = 45;
    checkYellowCornerOppo = 51;

    place = 1011;
    join = 1015;
    cornerOut = 1019;
    borderOut = 1023;
    cornerMove = 1027;

  }else if(color == 3){
    //Green Orange

    borderC = 11; //cube border GREEN-ORANGE
    borderLeft = 24; //border GREEN (orange)

    cornerC = 6;  //cube corner WHITE-GREEN-ORANGE
    cornerTop = 6;  //corner WHITE (green-orange)
    cornerLeft = 12; //corner GREEN (white-orange)

    colorLeft = 1;  //color green
    colorRight = 3; //color orange


    faceLeft = 51; //face yellow-green
    faceRight = 53; //face yellow-orange

    yellowBorderLeft = 46;
    yellowBorderRight = 48;
    yellowBorderLeftOppo = 52;
    yellowBorderRightOppo = 50;

    yellowCornerTop = 45;

    checkBorderRight = 21;
    checkBorderOppo = 30;
    checkBorderLeft = 27;

    checkCornerRight = 0;
    checkCornerOppo = 2;
    checkCornerLeft = 8;

    checkYellowCornerRight = 51;
    checkYellowCornerOppo = 53;

    place = 1012;
    join = 1016;
    cornerOut = 1020;
    borderOut = 1024;
    cornerMove = 1028;

  }else if(color == 4){
    //Orange Blue

    borderC = 9; //cube border ORANGE-RED
    borderLeft = 21; //border BLUE (red)

    cornerC = 0;  //cube corner WHITE-BLUE-RED
    cornerTop = 0;  //corner WHITE (blue-red)
    cornerLeft = 9; //corner BLUE (white-red)

    colorLeft = 3;
    colorRight = 4;


    faceLeft = 53;
    faceRight = 54;

    yellowBorderLeft = 48;
    yellowBorderRight = 52;
    yellowBorderLeftOppo = 50;
    yellowBorderRightOppo = 46;



    yellowCornerTop = 51;

    checkBorderRight = 30;
    checkBorderOppo = 27;
    checkBorderLeft = 24;

    checkCornerRight = 2;
    checkCornerOppo = 8;
    checkCornerLeft = 6;

    checkYellowCornerRight = 53;
    checkYellowCornerOppo = 47;

    place = 1013;
    join = 1017;
    cornerOut = 1021;
    borderOut = 1025;
    cornerMove = 1029;

  }else{
      printCube(rubik);
      errx(1,"error in put F2L --> wrong color");
  }



  //bad position of a border or a corner
  //we have to execute so placement move
  if(rubik[yellowCornerTop].cube != cornerC || rubik[checkBorderRight].cube == borderC || rubik[checkBorderOppo].cube == borderC || rubik[checkBorderLeft].cube == borderC ){


       //corner et border liés
       if( rubik[checkCornerRight].cube == cornerC && rubik[checkBorderRight].cube == borderC ){
         //printf("Corner lié Right\n" );
         executeAlgo(rubik,solution,switchRotation("RUr",faceRight,solution,join,3),3);
       }
       else if( rubik[checkCornerOppo].cube == cornerC && rubik[checkBorderOppo].cube == borderC ){
         //printf("Corner lié Oppo\n" );
         executeAlgo(rubik,solution,switchRotation("LUUl",faceLeft,solution,join,4),4);
       }else if( rubik[checkCornerLeft].cube == cornerC && rubik[checkBorderLeft].cube == borderC){
         ////printf("Corner lié Left\n" );
         executeAlgo(rubik,solution,switchRotation("luL",faceLeft,solution,join,3),3);
       }

       //placer le corner
       if(rubik[checkCornerRight].cube == cornerC){
               if(rubik[yellowBorderRightOppo].cube != borderC){
                 ////printf("Corner face blanche Right 1\n" );
                 executeAlgo(rubik,solution,switchRotation("RUr",faceRight,solution,cornerOut,3),3);
               }
               else{
                 ////printf("Corner face blanche Right 2\n" );
                 executeAlgo(rubik,solution,switchRotation("URUr",faceRight,solution,cornerOut,4),4);
               }
       }
       else if(rubik[checkCornerOppo].cube == cornerC){
               if(rubik[yellowBorderRight].cube != borderC){
                 ////printf("Corner face blanche Oppo 1\n" );
                 executeAlgo(rubik,solution,switchRotation("LUUl",faceLeft,solution,cornerOut,4),4);
               }
               else{
                // //printf("Corner face blanche Oppo 2\n" );
                 executeAlgo(rubik,solution,switchRotation("ULUUl",faceLeft,solution,cornerOut,5),5);
               }
       }
       else if(rubik[checkCornerLeft].cube == cornerC){
               if(rubik[yellowBorderLeftOppo].cube != borderC){
                 ////printf("Corner face blanche Left 1\n" );
                 executeAlgo(rubik,solution,switchRotation("lUL",faceLeft,solution,cornerOut,3),3);
               }
               else{
                 ////printf("Corner face blanche Left 2\n" );
                 executeAlgo(rubik,solution,switchRotation("UlUL",faceLeft,solution,cornerOut,4),4);
               }
       }


       //placer le corner si il est déjà sur face jaune mais pas au bon endroit
       if(rubik[cornerTop].cube != cornerC && rubik[yellowCornerTop].cube != cornerC){
             if(rubik[checkYellowCornerRight].cube == cornerC){
               ////printf("Corner face jaune Right \n" );
               executeAlgo(rubik,solution,switchRotation("U",faceLeft,solution,cornerMove,1),1);
             }
             else if(rubik[checkYellowCornerOppo].cube == cornerC){
               ////printf("Corner face jaune Oppo \n" );
               executeAlgo(rubik,solution,switchRotation("UU",faceLeft,solution,cornerMove,2),2);
             }
             else{
               ////printf("Corner face jaune Left \n" );
               executeAlgo(rubik,solution,switchRotation("u",faceLeft,solution,cornerMove,1),1);
             }
       }

       //placer la border
       if(rubik[checkBorderRight].cube == borderC){
        // //printf("Border right\n" );
         executeAlgo(rubik,solution,switchRotation("RUru",faceRight,solution,borderOut,4),4);
       }
       else if(rubik[checkBorderOppo].cube == borderC){
        ////printf("Border oppo\n" );
         executeAlgo(rubik,solution,switchRotation("LulU",faceLeft,solution,borderOut,4),4);
       }
       else if(rubik[checkBorderLeft].cube == borderC){
        ////printf("Border left\n" );
         executeAlgo(rubik,solution,switchRotation("luLU",faceLeft,solution,borderOut,4),4);
       }



      ////printCube(rubik);

     }


  //if 1 - 11
  if(rubik[cornerTop].cube == cornerC){
          //if 1-5
          if(rubik[borderLeft].cube == borderC){

                      //if 1-2
                      if(verifPosition(rubik,borderLeft)){

                                if(rubik[cornerTop].color == colorLeft){
                                      F2L_1(rubik,solution,faceRight,place);
                                      return 1;
                                }
                                else if(rubik[cornerTop].color == colorRight){
                                      F2L_2(rubik,solution,faceRight,place);
                                      return 1;
                                }
                                else{
                                  //printf("On a le fameux bug du F2L déjà fait sur : %i,%i\n",faceLeft,faceRight );
                                  //errx(1,"fail");
                                  return 1;
                                }

                      }
                      //if 3-5
                      else{

                                if(rubik[cornerLeft].color == 0){
                                      F2L_3(rubik,solution,faceLeft,place);
                                      return 1;
                                }
                                else if(rubik[cornerLeft].color == colorRight){
                                      F2L_4(rubik,solution,faceRight,place);
                                      return 1;
                                }
                                else{
                                      F2L_5(rubik,solution,faceLeft,place);
                                      return 1;
                                }

                      }

          }
          //if 6-11
          else{

                //move cube forme de T
                if(rubik[yellowBorderLeftOppo].cube == borderC){

                      if(rubik[yellowBorderLeftOppo].color == colorRight){
                        executeAlgo(rubik,solution,switchRotation("UU",faceLeft,solution,cornerMove,2),2);
                      }
                      else{
                        executeAlgo(rubik,solution,switchRotation("U",faceRight,solution,cornerMove,1),1);
                      }


                }
                else if(rubik[yellowBorderRightOppo].cube == borderC){

                      if(rubik[yellowBorderRightOppo].color == colorRight){
                        executeAlgo(rubik,solution,switchRotation("u",faceLeft,solution,cornerMove,1),1);
                      }
                      else{
                        executeAlgo(rubik,solution,switchRotation("UU",faceRight,solution,cornerMove,2),2);
                      }

                }

                if(rubik[yellowBorderLeft].cube == borderC && rubik[yellowBorderLeft].color == colorLeft){
                    executeAlgo(rubik,solution,switchRotation("u",faceRight,solution,cornerMove,1),1);
                }

                if(rubik[yellowBorderRight].cube == borderC && rubik[yellowBorderRight].color == colorRight){
                    executeAlgo(rubik,solution,switchRotation("U",faceLeft,solution,cornerMove,1),1);
                }

                //fin move cube forme de T

                //if 7/8/10
                if(rubik[yellowBorderLeft].cube == borderC){

                        if(rubik[cornerTop].color == 0){
                            F2L_7(rubik,solution,faceLeft,place);
                            return 1;
                        }
                        else if(rubik[cornerTop].color == colorLeft){
                            F2L_8(rubik,solution,faceRight,place);
                            return 1;
                        }
                        else{
                            F2L_10(rubik,solution,faceRight,place);
                            return 1;
                        }
                }

                //if 6/9/11
                if(rubik[yellowBorderRight].cube == borderC){

                        if(rubik[cornerTop].color == 0){
                            F2L_6(rubik,solution,faceRight,place);
                            return 1;
                        }
                        else if(rubik[cornerTop].color == colorLeft){
                            F2L_9(rubik,solution,faceLeft,place);
                            return 1;
                        }
                        else{
                            F2L_11(rubik,solution,faceLeft,place);
                            return 1;
                        }
                }






    }

  }

  //FIN DE COIN BIEN PLACER

  //if 12 - 41 ---> coin sur la yellow
  if(rubik[yellowCornerTop].cube == cornerC){


          //if 12 - 17
          if(rubik[borderLeft].cube == borderC){

                    //if 12-14
                    if(verifPosition(rubik,borderLeft)){


                                if(rubik[yellowCornerTop].color == 0){
                                    F2L_12(rubik,solution,faceLeft,place);
                                    return 1;
                                }
                                else if(rubik[yellowCornerTop].color == colorRight){
                                    F2L_13(rubik,solution,faceRight,place);
                                    return 1;
                                }
                                else{
                                    F2L_14(rubik,solution,faceLeft,place);
                                    return 1;
                                }

                    }
                    //if 15-17
                    else{

                                if(rubik[yellowCornerTop].color == colorRight){
                                    F2L_15(rubik,solution,faceRight,place);
                                    return 1;
                                }
                                else if(rubik[yellowCornerTop].color == colorLeft){
                                    F2L_16(rubik,solution,faceLeft,place);
                                    return 1;
                                }
                                else{
                                    F2L_17(rubik,solution,faceLeft,place);
                                    return 1;
                                }
                    }

          }

          //if 18-23
          if(rubik[yellowBorderRight].cube == borderC){

                  //if 18_20
                  if(rubik[yellowBorderRight].color == colorLeft){


                            if(rubik[yellowCornerTop].color == 0){
                                F2L_18(rubik,solution,faceLeft,place);
                                return 1;
                            }
                            else if(rubik[yellowCornerTop].color == colorLeft){
                                F2L_19(rubik,solution,faceLeft,place);
                                return 1;
                            }
                            else{
                                F2L_20(rubik,solution,faceLeft,place);
                                return 1;
                            }

                  }
                  //if 21-23
                  else{

                            if(rubik[yellowCornerTop].color == 0){
                                F2L_21(rubik,solution,faceRight,place);
                                return 1;
                            }
                            else if(rubik[yellowCornerTop].color == colorLeft){
                                F2L_22(rubik,solution,faceLeft,place);
                                return 1;
                            }
                            else{
                                F2L_23(rubik,solution,faceLeft,place);
                                return 1;
                            }

                  }



          }

          //if 24-29
          if(rubik[yellowBorderLeft].cube == borderC){

                  //if 24-26
                  if(rubik[yellowBorderLeft].color == colorRight){


                            if(rubik[yellowCornerTop].color == colorLeft){
                                F2L_24(rubik,solution,faceRight,place);
                                return 1;
                            }
                            else if(rubik[yellowCornerTop].color == colorRight){
                                F2L_25(rubik,solution,faceRight,place);
                                return 1;
                            }
                            else{
                                F2L_26(rubik,solution,faceRight,place);
                                return 1;
                            }

                  }
                  //if 27-29
                  else{

                            if(rubik[yellowCornerTop].color == colorLeft){
                                F2L_27(rubik,solution,faceRight,place);
                                return 1;
                            }
                            else if(rubik[yellowCornerTop].color == colorRight){
                                F2L_28(rubik,solution,faceRight,place);
                                return 1;
                            }
                            else{
                                F2L_29(rubik,solution,faceLeft,place);
                                return 1;
                            }

                  }



          }

          //if 30-33
          if(rubik[yellowCornerTop].color == 0){

                //if 30-31
                if(rubik[yellowBorderLeftOppo].cube == borderC){

                      if(rubik[yellowBorderLeftOppo].color == colorRight){
                          F2L_30(rubik,solution,faceRight,place);
                          return 1;
                      }
                      else{
                          F2L_31(rubik,solution,faceLeft,place);
                          return 1;
                      }

                }

                //if 32-33
                if(rubik[yellowBorderRightOppo].cube == borderC){

                      if(rubik[yellowBorderRightOppo].color == colorRight){
                          F2L_32(rubik,solution,faceRight,place);
                          return 1;
                      }
                      else{
                          F2L_33(rubik,solution,faceLeft,place);
                          return 1;
                      }

                }

          }


          //if 34-37
          if(rubik[yellowCornerTop].color == colorRight){

                //if 34-35
                if(rubik[yellowBorderLeftOppo].cube == borderC){

                      if(rubik[yellowBorderLeftOppo].color == colorRight){
                          F2L_34(rubik,solution,faceRight,place);
                          return 1;
                      }
                      else{
                          F2L_35(rubik,solution,faceLeft,place);
                          return 1;
                      }

                }

                //if 36-37
                if(rubik[yellowBorderRightOppo].cube == borderC){

                      if(rubik[yellowBorderRightOppo].color == colorRight){
                          F2L_36(rubik,solution,faceRight,place);
                          return 1;
                      }
                      else{
                          F2L_37(rubik,solution,faceRight,place);
                          return 1;
                      }

                }

          }


          //if 38-41
          if(rubik[yellowCornerTop].color == colorLeft){

                //if 38-39
                if(rubik[yellowBorderLeftOppo].cube == borderC){

                      if(rubik[yellowBorderLeftOppo].color == colorRight){
                          F2L_38(rubik,solution,faceLeft,place);
                          return 1;
                      }
                      else{
                          F2L_39(rubik,solution,faceLeft,place);
                          return 1;
                      }

                }

                //if 40-41
                if(rubik[yellowBorderRightOppo].cube == borderC){

                      if(rubik[yellowBorderRightOppo].color == colorLeft){
                          F2L_40(rubik,solution,faceLeft,place);
                          return 1;
                      }
                      else{
                          F2L_41(rubik,solution,faceRight,place);
                          return 1;
                      }

                }

          }


  }






  return 0;


}

/*
  createF2L:
    args : --> structure rubik
           --> structure solution

    goal : find the best way to create the F2L and write in the solution

    return : none
*/
void createF2L(struct pixel* rubik,struct res* solution,int order){

  /*
    We use the same method as for finding the best white cross

    we have 4 pairs to place to create the F2L
    and we want to find the best way. We have a total of 24 possibilities.

    For example (first blue-red , after red-green, after green-orange and finaly orange-blue)
    but we want to use the best combinaison

    so we make a copy of our rubik cube and we test in each combinaison.
    We keep the best and we execute it on our original rubik cube.
  */

    int color4 = order%10;
    order /= 10;
    int color3 = order%10;
    order /= 10;
    int color2 = order%10;
    order /= 10;
    int color1 = order%10;

    //printf("color 1 : %i || color 2 : %i || color 3 : %i || color 4 : %i\n",color1,color2,color3,color4 );
    //printf("F2L : %i%i%i%i\n",color1,color2,color3,color4 );

    putF2L(rubik,solution,color1);
    putF2L(rubik,solution,color2);
    putF2L(rubik,solution,color3);
    putF2L(rubik,solution,color4);


}
