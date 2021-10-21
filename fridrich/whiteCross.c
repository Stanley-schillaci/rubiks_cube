#include "../structure/rubik.h"
#include "../structure/solution.h"
#include "../structure/rotation.h"
#include "../structure/rubikTools.h"
#include "../structure/switchRotation.h"
#include <stdio.h>
#include <stdlib.h>

/*
  putBlue:
    args : --> structure rubik
           --> structure solution

    goal : put the white/blue border in the correct place and write in the solution
    update : need to be update !

    return : none
*/
void putBlue(struct pixel* rubik,struct res* solution){
  ////printf("Blue/white border -->   ");

  //position white/blue
  if(rubik[1].cube == 1){
    if(rubik[1].color == 0){
      //printf("Already in position\n");
    }
    else{
      //printf("Position white/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("fUlu",04,solution,1001,4),4);
    }
  }
  //position white/orange
  else if(rubik[3].cube == 1){
    if(rubik[3].color == 0){
      //printf("Position white/orange  -->  ");
      executeAlgo(rubik,solution,switchRotation("ruRU",04,solution,1001,4),4);
    }
    else{
      //printf("Position white/orange reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rf",04,solution,1001,2),2);
    }
  }
  //position white/red
  else if(rubik[5].cube == 1){
    if(rubik[5].color == 0){
      //printf("Position white/red  -->  ");
      executeAlgo(rubik,solution,switchRotation("LUlu",04,solution,1001,4),4);
    }
    else{
      //printf("Position white/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("LF",04,solution,1001,2),2);
    }
  }
  //position white/green
  else if(rubik[7].cube == 1){
    if(rubik[7].color == 0){
      //printf("Position white/green  -->  ");
      executeAlgo(rubik,solution,switchRotation("LUUlUU",02,solution,1001,6),6);
    }
    else{
      //printf("Position white/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("LUFu",02,solution,1001,4),4);
    }
  }

  //position orange/blue
  else if(rubik[21].cube == 1){
    if(rubik[21].color == 0){
      //printf("Position orange/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("f",04,solution,1001,1),1);
    }
    else{
      //printf("Position orange/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("uRU",04,solution,1001,3),3);
    }
  }
  //position orange/green
  else if(rubik[23].cube == 1){
    if(rubik[23].color == 0){
      //printf("Position orange/green  -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUU",03,solution,1001,5),5);
    }
    else{
      //printf("Position orange/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("ufU",03,solution,1001,3),3);
    }
  }
  //position green/red
  else if(rubik[26].cube == 1){
    if(rubik[26].color == 0){
      //printf("Position green/red  -->  ");
      executeAlgo(rubik,solution,switchRotation("URu",01,solution,1001,3),3);
    }
    else{
      //printf("Position green/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("UUfUU",01,solution,1001,5),5);
    }
  }
  //position red/blue
  else if(rubik[29].cube == 1){
    if(rubik[29].color == 0){
      //printf("Position red/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("R",02,solution,1001,1),1);
    }
    else{
      //printf("Position red/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("Ulu",04,solution,1001,3),3);
    }
  }

  //position orange/yellow
  else if(rubik[34].cube == 1){
    if(rubik[34].color == 0){
      //printf("Position orange/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("uRUf",04,solution,1001,4),4);
    }
    else{
      //printf("Position orange/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("uRRU",04,solution,1001,4),4);
    }
  }
  //position green/yellow
  else if(rubik[37].cube == 1){
    if(rubik[37].color == 0){
      //printf("Position green/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUfU",03,solution,1001,6),6);
    }
    else{
      //printf("Position green/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("UURRUU",03,solution,1001,6),6);
    }
  }
  //position red/yellow
  else if(rubik[40].cube == 1){
    if(rubik[40].color == 0){
      //printf("Position red/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UfuR",02,solution,1001,4),4);
    }
    else{
      //printf("Position red/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("Ullu",04,solution,1001,4),4);
    }
  }
  //position blue/yellow
  else if(rubik[43].cube == 1){
    if(rubik[43].color == 0){
      //printf("Position blue/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("RUfu",02,solution,1001,4),4);//add u
    }
    else{
      //printf("Position blue/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("RR",02,solution,1001,2),2);
    }
  }
  else{
    //printf("pas dans les cas\n");
  }
}



/*
  putGreen:
    args : --> structure rubik
           --> structure solution

    goal : put the white/green border in the correct place and write in the solution
    update : need to be update !

    return : none
*/
void putGreen(struct pixel* rubik,struct res* solution){
  //printf("\nGreen/white border -->   ");

  if(rubik[1].cube == 7){
    if(rubik[1].color == 0){
      //printf("Position white/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("rUURUU",02,solution,1004,6),6);
    }
    else{
      //printf("Position white/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rufU",02,solution,1004,4),4);
    }
  }
  //position white/orange
  else if(rubik[3].cube == 7){
    if(rubik[3].color == 0){
      //printf("Position white/orange  -->  ");
      executeAlgo(rubik,solution,switchRotation("LUlu",01,solution,1004,4),4);
    }
    else{
      //printf("Position white/orange reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("LF",01,solution,1004,2),2);
    }
  }
  //position white/red
  else if(rubik[5].cube == 7){
    if(rubik[5].color == 0){
      //printf("Position white/red  -->  ");
      executeAlgo(rubik,solution,switchRotation("ruRU",01,solution,1004,4),4);
    }
    else{
      //printf("Position white/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rf",01,solution,1004,2),2);
    }
  }
  //position white/green
  else if(rubik[7].cube == 7){
    if(rubik[7].color == 0){
      //printf("Position white/green -->   Already in place\n");
    }
    else{
      //printf("Position white/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rUfu",03,solution,1004,4),4);
    }
  }

  //position orange/blue
  else if(rubik[21].cube == 7){
    if(rubik[21].color == 0){
      //printf("Position orange/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("UUlUU",03,solution,1004,5),5);
    }
    else{
      //printf("Position orange/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("UFu",03,solution,1004,3),3);
    }
  }
  //position orange/green
  else if(rubik[23].cube == 7){
    if(rubik[23].color == 0){
      //printf("Position orange/green  -->  ");
      executeAlgo(rubik,solution,switchRotation("R",03,solution,1004,1),1);
    }
    else{
      //printf("Position orange/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("Ufu",03,solution,1004,3),3);
    }
  }
  //position green/red
  else if(rubik[26].cube == 7){
    if(rubik[26].color == 0){
      //printf("Position green/red  -->  ");
      executeAlgo(rubik,solution,switchRotation("uRU",01,solution,1004,3),3);
    }
    else{
      //printf("Position green/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("l",02,solution,1004,1),1);
    }
  }
  //position red/blue
  else if(rubik[29].cube == 7){
    if(rubik[29].color == 0){
      //printf("Position red/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUU",02,solution,1004,5),5);
    }
    else{
      //printf("Position red/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("urU",01,solution,1004,3),3);
    }
  }

  //position orange/yellow
  else if(rubik[34].cube == 7){
    if(rubik[34].color == 0){
      //printf("Position orange/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UfuR",03,solution,1004,4),4); //future change
    }
    else{
      //printf("Position orange/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("DRR",03,solution,1004,3),3);
    }
  }
  //position green/yellow
  else if(rubik[37].cube == 7){
    if(rubik[37].color == 0){
      //printf("Position green/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("fuRU",01,solution,1004,4),4);
    }
    else{
      //printf("Position green/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("RR",03,solution,1004,2),2);
    }
  }
  //position red/yellow
  else if(rubik[40].cube == 7){
    if(rubik[40].color == 0){
      //printf("Position red/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("uRUf",01,solution,1004,4),4);
    }
    else{
      //printf("Position red/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("dLL",02,solution,1004,3),3);
    }
  }
  //position blue/yellow
  else if(rubik[43].cube == 7){
    if(rubik[43].color == 0){
      //printf("Position blue/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUfU",02,solution,1004,6),6);//add u
    }
    else{
      //printf("Position blue/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("DDRR",03,solution,1004,4),4);
    }
  }
  else{
    //printf("pas dans les cas\n");
  }
}

/*
  putRed:
    args : --> structure rubik
           --> structure solution

    goal : put the white/red border in the correct place and write in the solution
    update : need to be update !

    return : none
*/
void putRed(struct pixel* rubik,struct res* solution){
  //printf("\nRed/white border -->   ");

  //position white/blue
  if(rubik[1].cube == 5){
    if(rubik[1].color == 0){
      //printf("Position white/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("ruRU",02,solution,1003,4),4);
    }
    else{
      //printf("Position white/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rf",02,solution,1003,2),2);
    }
  }
  //position white/orange
  else if(rubik[3].cube == 5){
    if(rubik[3].color == 0){
      //printf("Position white/orange  -->  ");
      executeAlgo(rubik,solution,switchRotation("rUURUU",04,solution,1003,6),6);
    }
    else{
      //printf("Position white/orange reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rufU",04,solution,1003,4),4);
    }
  }
  //position white/red
  else if(rubik[5].cube == 5){
    if(rubik[5].color == 0){
      //printf("Already in place ");
    }
    else{
      //printf("Position white/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rUfu",01,solution,1003,4),4);
    }
  }
  //position white/green
  else if(rubik[7].cube == 5){
    if(rubik[7].color == 0){
      //printf("Position white/green  -->  ");
      executeAlgo(rubik,solution,switchRotation("LUlu",02,solution,1003,4),4);
    }
    else{
      //printf("Position white/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("FR",01,solution,1003,2),2);
    }
  }

  //position orange/blue
  else if(rubik[21].cube == 5){
    if(rubik[21].color == 0){
      //printf("Position orange/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("ulU",03,solution,1003,3),3);
    }
    else{
      //printf("Position orange/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUU",04,solution,1003,5),5);
    }
  }
  //position orange/green
  else if(rubik[23].cube == 5){
    if(rubik[23].color == 0){
      //printf("Position orange/green  -->  ");
      executeAlgo(rubik,solution,switchRotation("URu",03,solution,1003,3),3);
    }
    else{
      //printf("Position orange/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("UUrUU",04,solution,1003,5),5);
    }
  }
  //position green/red
  else if(rubik[26].cube == 5){
    if(rubik[26].color == 0){
      //printf("Position green/red  -->  ");
      executeAlgo(rubik,solution,switchRotation("R",01,solution,1003,1),1);
    }
    else{
      //printf("Position green/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("Ufu",01,solution,1003,3),3);
    }
  }
  //position red/blue
  else if(rubik[29].cube == 5){
    if(rubik[29].color == 0){
      //printf("Position red/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("uRU",02,solution,1003,3),3);
    }
    else{
      //printf("Position red/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("r",01,solution,1003,1),1);
    }
  }

  //position orange/yellow
  else if(rubik[34].cube == 5){
    if(rubik[34].color == 0){
      //printf("Position orange/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUfU",04,solution,1003,6),6); //future change
    }
    else{
      //printf("Position orange/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("DDRR",01,solution,1003,4),4);
    }
  }
  //position green/yellow
  else if(rubik[37].cube == 5){
    if(rubik[37].color == 0){
      //printf("Position green/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UfuR",01,solution,1003,4),4);
    }
    else{
      //printf("Position green/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("DRR",01,solution,1003,3),3);
    }
  }
  //position red/yellow
  else if(rubik[40].cube == 5){
    if(rubik[40].color == 0){
      //printf("Position red/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("RUfu",01,solution,1003,4),4);
    }
    else{
      //printf("Position red/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("RR",01,solution,1003,2),2);
    }
  }
  //position blue/yellow
  else if(rubik[43].cube == 5){
    if(rubik[43].color == 0){
      //printf("Position blue/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("uRUf",02,solution,1003,4),4);//add u
    }
    else{
      //printf("Position blue/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("dRR",01,solution,1003,3),3);
    }
  }
  else{
    //printf("pas dans les cas\n");
  }
}

/*
  putOrange:
    args : --> structure rubik
           --> structure solution

    goal : put the white/orange border in the correct place and write in the solution
    update : need to be update !

    return : none
*/
void putOrange(struct pixel* rubik,struct res* solution){
  //printf("\nOrange/white border -->   ");

  //position white/blue
  if(rubik[1].cube == 3){
    if(rubik[1].color == 0){
      //printf("Position white/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("rURu",02,solution,1002,4),4);
    }
    else{
      //printf("Position white/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("FR",04,solution,1002,2),2);
    }
  }
  //position white/orange
  else if(rubik[3].cube == 3){
    if(rubik[3].color == 0){
        //printf("Already in place ");
    }
    else{
      //printf("Position white/orange reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rUfu",04,solution,1002,4),4);
    }
  }
  //position white/red
  else if(rubik[5].cube == 3){
    if(rubik[5].color == 0){
      //printf("Position white/red -->  ");
      executeAlgo(rubik,solution,switchRotation("rUURUU",01,solution,1002,6),6);
    }
    else{
      //printf("Position white/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("RUBu",01,solution,1002,4),4);
    }
  }
  //position white/green
  else if(rubik[7].cube == 3){
    if(rubik[7].color == 0){
      //printf("Position white/green  -->  ");
      executeAlgo(rubik,solution,switchRotation("ruRU",03,solution,1002,4),4);
    }
    else{
      //printf("Position white/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rf",03,solution,1002,2),2);
    }
  }

  //position orange/blue
  else if(rubik[21].cube == 3){
    if(rubik[21].color == 0){
      //printf("Position orange/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("Ulu",03,solution,1002,3),3);
    }
    else{
      //printf("Position orange/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("R",04,solution,1002,1),1);
    }
  }
  //position orange/green
  else if(rubik[23].cube == 3){
    if(rubik[23].color == 0){
      //printf("Position orange/green  -->  ");
      executeAlgo(rubik,solution,switchRotation("uRU",03,solution,1002,3),3);
    }
    else{
      //printf("Position orange/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("r",04,solution,1002,1),1);
    }
  }
  //position green/red
  else if(rubik[26].cube == 3){
    if(rubik[26].color == 0){
      //printf("Position green/red  -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUU",01,solution,1002,5),5);
    }
    else{
      //printf("Position green/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("ufU",01,solution,1002,3),3);
    }
  }
  //position red/blue
  else if(rubik[29].cube == 3){
    if(rubik[29].color == 0){
      //printf("Position red/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("URu",02,solution,1002,3),3);
    }
    else{
      //printf("Position red/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("UUrUU",01,solution,1002,5),5);
    }
  }

  //position orange/yellow
  else if(rubik[34].cube == 3){
    if(rubik[34].color == 0){
      //printf("Position orange/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("RUfu",04,solution,1002,4),4);
    }
    else{
      //printf("Position orange/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("RR",04,solution,1002,2),2);
    }
  }
  //position green/yellow
  else if(rubik[37].cube == 3){
    if(rubik[37].color == 0){
      //printf("Position green/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("uRUf",03,solution,1002,4),4);
    }
    else{
      //printf("Position green/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("dRR",04,solution,1002,3),3);
    }
  }
  //position red/yellow
  else if(rubik[40].cube == 3){
    if(rubik[40].color == 0){
      //printf("Position red/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUfU",01,solution,1002,6),6);
    }
    else{
      //printf("Position red/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("DDRR",04,solution,1002,4),4);
    }
  }
  //position blue/yellow
  else if(rubik[43].cube == 3){
    if(rubik[43].color == 0){
      //printf("Position blue/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UfuR",04,solution,1002,4),4);
    }
    else{
      //printf("Position blue/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("DRR",04,solution,1002,3),3);
    }
  }
  else{
    //printf("pas dans les cas\n");
  }
}

/*
  putBorder:
    args : --> structure rubik
           --> structure solution
           --> int nb --> number of the border




    goal : call one of the function to put the white border

    return : none
*/
void putBorder(struct pixel* rubik,struct res* solution,int nb){
  switch (nb) {
    case 1:
      putBlue(rubik,solution);
      break;
    case 2:
      putGreen(rubik,solution);
      break;
    case 3:
      putRed(rubik,solution);
      break;
    case 4:
      putOrange(rubik,solution);
      break;
    default:
      printf("On a un souci\n" );
      break;
  }
}


/*
  createWhiteCrossFridrich:
    args : --> structure rubik
           --> structure solution

    goal : find the best way to create the white cross and write in the solution

    return : none
*/
void createWhiteCrossFridrich(struct pixel* rubik,struct res* solution,int order){




  int color4 = order%10;
  order /= 10;
  int color3 = order%10;
  order /= 10;
  int color2 = order%10;
  order /= 10;
  int color1 = order%10;

  putBorder(rubik,solution,color1);
  putBorder(rubik,solution,color2);
  putBorder(rubik,solution,color3);
  putBorder(rubik,solution,color4);



}
