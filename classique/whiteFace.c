#include "../structure/rubik.h"
#include "../structure/solution.h"
#include "../structure/rotation.h"
#include "../structure/rubikTools.h"
#include "../structure/switchRotation.h"
#include <stdio.h>
#include <stdlib.h>


void createWhiteCross(struct pixel* rubik,struct res* solution){

    //Put the bleu/white border in the correct position
  printf("Blue/white border -->   ");

  //position white/blue
  if(rubik[1].cube == 1){
    if(rubik[1].color == 0){
      printf("Already in position\n");
    }
    else{
      printf("Position white/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("fUlu",04,solution, 111, 4), 4);
    }
  }
  //position white/orange
  else if(rubik[3].cube == 1){
    if(rubik[3].color == 0){
      printf("Position white/orange  -->  ");
      executeAlgo(rubik,solution,switchRotation("ruRU",04,solution, 111, 4), 4);
    }
    else{
      printf("Position white/orange reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rf",04,solution, 111, 2), 2);
    }
  }
  //position white/red
  else if(rubik[5].cube == 1){
    if(rubik[5].color == 0){
      printf("Position white/red  -->  ");
      executeAlgo(rubik,solution,switchRotation("LUlu",04,solution, 111, 4), 4);
    }
    else{
      printf("Position white/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("LF",04,solution, 111, 2), 2);
    }
  }
  //position white/green
  else if(rubik[7].cube == 1){
    if(rubik[7].color == 0){
      printf("Position white/green  -->  ");
      executeAlgo(rubik,solution,switchRotation("LUUlUU",02,solution, 111, 6), 6);
    }
    else{
      printf("Position white/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("LUFu",02,solution, 111, 4), 4);
    }
  }

  //position orange/blue
  else if(rubik[21].cube == 1){
    if(rubik[21].color == 0){
      printf("Position orange/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("f",04,solution, 111, 1), 1);
    }
    else{
      printf("Position orange/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("uRU",04,solution, 111, 3), 3);
    }
  }
  //position orange/green
  else if(rubik[23].cube == 1){
    if(rubik[23].color == 0){
      printf("Position orange/green  -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUU",03,solution, 111, 5), 5);
    }
    else{
      printf("Position orange/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("ufU",03,solution, 111, 3), 3);
    }
  }
  //position green/red
  else if(rubik[26].cube == 1){
    if(rubik[26].color == 0){
      printf("Position green/red  -->  ");
      executeAlgo(rubik,solution,switchRotation("URu",01,solution, 111,3), 3);
    }
    else{
      printf("Position green/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("UUfUU",01,solution, 111, 5), 5);
    }
  }
  //position red/blue
  else if(rubik[29].cube == 1){
    if(rubik[29].color == 0){
      printf("Position red/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("R",02,solution, 111, 1), 1);
    }
    else{
      printf("Position red/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("Ulu",04,solution, 111, 3), 3);
    }
  }

  //position orange/yellow
  else if(rubik[34].cube == 1){
    if(rubik[34].color == 0){
      printf("Position orange/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("uRUf",04,solution, 111, 4), 4);
    }
    else{
      printf("Position orange/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("uRRU",04,solution, 111, 4), 4);
    }
  }
  //position green/yellow
  else if(rubik[37].cube == 1){
    if(rubik[37].color == 0){
      printf("Position green/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUfU",03,solution, 111, 6), 6);
    }
    else{
      printf("Position green/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("UURRUU",03,solution, 111, 6), 6);
    }
  }
  //position red/yellow
  else if(rubik[40].cube == 1){
    if(rubik[40].color == 0){
      printf("Position red/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UfuR",02,solution, 111, 5), 5);
    }
    else{
      printf("Position red/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("Ullu",04,solution, 111, 4), 4);
    }
  }
  //position blue/yellow
  else if(rubik[43].cube == 1){
    if(rubik[43].color == 0){
      printf("Position blue/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("RUfu",02,solution, 111, 4), 4);//add u
    }
    else{
      printf("Position blue/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("RR",02,solution, 111, 2), 2);
    }
  }
  else{
    printf("pas dans les cas\n");
  }



  //print_whiteCross(rubik);




  //Put the green/white border in the correct position

  printf("\nGreen/white border -->   ");

  if(rubik[1].cube == 7){
    if(rubik[1].color == 0){
      printf("Position white/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("rUURUU",02,solution, 111, 6), 6);
    }
    else{
      printf("Position white/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rufU",02,solution, 111, 4), 4);
    }
  }
  //position white/orange
  else if(rubik[3].cube == 7){
    if(rubik[3].color == 0){
      printf("Position white/orange  -->  ");
      executeAlgo(rubik,solution,switchRotation("LUlu",01,solution, 111, 4), 4);
    }
    else{
      printf("Position white/orange reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("LF",01,solution, 111, 2), 2);
    }
  }
  //position white/red
  else if(rubik[5].cube == 7){
    if(rubik[5].color == 0){
      printf("Position white/red  -->  ");
      executeAlgo(rubik,solution,switchRotation("ruRU",01,solution, 111, 4), 4);
    }
    else{
      printf("Position white/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rf",01,solution, 111, 2), 2);
    }
  }
  //position white/green
  else if(rubik[7].cube == 7){
    if(rubik[7].color == 0){
      printf("Position white/green -->   Already in place\n");
    }
    else{
      printf("Position white/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rUfu",03,solution, 111, 4), 4);
    }
  }

  //position orange/blue
  else if(rubik[21].cube == 7){
    if(rubik[21].color == 0){
      printf("Position orange/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("UUlUU",03,solution, 111, 5), 5);
    }
    else{
      printf("Position orange/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("UFu",03,solution, 111, 3), 3);
    }
  }
  //position orange/green
  else if(rubik[23].cube == 7){
    if(rubik[23].color == 0){
      printf("Position orange/green  -->  ");
      executeAlgo(rubik,solution,switchRotation("R",03,solution, 111, 1), 1);
    }
    else{
      printf("Position orange/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("Ufu",03,solution, 111, 3), 3);
    }
  }
  //position green/red
  else if(rubik[26].cube == 7){
    if(rubik[26].color == 0){
      printf("Position green/red  -->  ");
      executeAlgo(rubik,solution,switchRotation("uRU",01,solution, 111, 3), 3);
    }
    else{
      printf("Position green/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("l",02,solution, 111, 1), 1);
    }
  }
  //position red/blue
  else if(rubik[29].cube == 7){
    if(rubik[29].color == 0){
      printf("Position red/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUU",02,solution, 111, 5), 5);
    }
    else{
      printf("Position red/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("urU",01,solution, 111, 3), 3);
    }
  }

  //position orange/yellow
  else if(rubik[34].cube == 7){
    if(rubik[34].color == 0){
      printf("Position orange/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UfuR",03,solution, 111, 4), 4); //future change
    }
    else{
      printf("Position orange/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("DRR",03,solution, 111, 3), 3);
    }
  }
  //position green/yellow
  else if(rubik[37].cube == 7){
    if(rubik[37].color == 0){
      printf("Position green/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("fuRU",01,solution, 111, 4), 4);
    }
    else{
      printf("Position green/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("RR",03,solution, 111, 2), 2);
    }
  }
  //position red/yellow
  else if(rubik[40].cube == 7){
    if(rubik[40].color == 0){
      printf("Position red/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("uRUf",01,solution, 111, 4), 4);
    }
    else{
      printf("Position red/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("dLL",02,solution, 111, 3), 3);
    }
  }
  //position blue/yellow
  else if(rubik[43].cube == 7){
    if(rubik[43].color == 0){
      printf("Position blue/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUfU",02,solution, 111, 6), 6);//add u
    }
    else{
      printf("Position blue/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("DDRR",03,solution, 111, 4), 4);
    }
  }
  else{
    printf("pas dans les cas\n");
  }





  //print_whiteCross(rubik);



  //Put the red/white border in the correct position

  printf("\nRed/white border -->   ");

  //position white/blue
  if(rubik[1].cube == 5){
    if(rubik[1].color == 0){
      printf("Position white/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("ruRU",02,solution, 111, 4), 4);
    }
    else{
      printf("Position white/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rf",02,solution, 111, 2), 2);
    }
  }
  //position white/orange
  else if(rubik[3].cube == 5){
    if(rubik[3].color == 0){
      printf("Position white/orange  -->  ");
      executeAlgo(rubik,solution,switchRotation("rUURUU",04,solution, 111, 6), 6);
    }
    else{
      printf("Position white/orange reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rufU",04,solution, 111, 4), 4);
    }
  }
  //position white/red
  else if(rubik[5].cube == 5){
    if(rubik[5].color == 0){
      printf("Already in place ");
    }
    else{
      printf("Position white/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("rUfu",01,solution, 111, 4), 4);
    }
  }
  //position white/green
  else if(rubik[7].cube == 5){
    if(rubik[7].color == 0){
      printf("Position white/green  -->  ");
      executeAlgo(rubik,solution,switchRotation("LUlu",02,solution, 111, 4), 4);
    }
    else{
      printf("Position white/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("FR",01,solution, 111, 2), 2);
    }
  }

  //position orange/blue
  else if(rubik[21].cube == 5){
    if(rubik[21].color == 0){
      printf("Position orange/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("ulU",03,solution, 111, 3), 3);
    }
    else{
      printf("Position orange/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUU",04,solution, 111, 5), 5);
    }
  }
  //position orange/green
  else if(rubik[23].cube == 5){
    if(rubik[23].color == 0){
      printf("Position orange/green  -->  ");
      executeAlgo(rubik,solution,switchRotation("URu",03,solution, 111, 3), 3);
    }
    else{
      printf("Position orange/green reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("UUrUU",04,solution, 111, 5), 5);
    }
  }
  //position green/red
  else if(rubik[26].cube == 5){
    if(rubik[26].color == 0){
      printf("Position green/red  -->  ");
      executeAlgo(rubik,solution,switchRotation("R",01,solution, 111, 1), 1);
    }
    else{
      printf("Position green/red reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("Ufu",01,solution, 111, 3), 3);
    }
  }
  //position red/blue
  else if(rubik[29].cube == 5){
    if(rubik[29].color == 0){
      printf("Position red/blue  -->  ");
      executeAlgo(rubik,solution,switchRotation("uRU",02,solution, 111, 3), 3);
    }
    else{
      printf("Position red/blue reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("r",01,solution, 111, 1), 1);
    }
  }

  //position orange/yellow
  else if(rubik[34].cube == 5){
    if(rubik[34].color == 0){
      printf("Position orange/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UURUfU",04,solution, 111, 6), 6); //future change
    }
    else{
      printf("Position orange/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("DDRR",01,solution, 111, 4), 4);
    }
  }
  //position green/yellow
  else if(rubik[37].cube == 5){
    if(rubik[37].color == 0){
      printf("Position green/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("UfuR",01,solution, 111, 4), 4);
    }
    else{
      printf("Position green/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("DRR",01,solution, 111, 3), 3);
    }
  }
  //position red/yellow
  else if(rubik[40].cube == 5){
    if(rubik[40].color == 0){
      printf("Position red/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("RUfu",01,solution, 111, 4), 4);
    }
    else{
      printf("Position red/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("RR",01,solution, 111, 2), 2);
    }
  }
  //position blue/yellow
  else if(rubik[43].cube == 5){
    if(rubik[43].color == 0){
      printf("Position blue/yellow  -->  ");
      executeAlgo(rubik,solution,switchRotation("uRUf",02,solution, 111, 4), 4);//add u
    }
    else{
      printf("Position blue/yellow reverse -->  ");
      executeAlgo(rubik,solution,switchRotation("dRR",01,solution, 111, 3), 3);
    }
  }
  else{
    printf("pas dans les cas\n");
  }





    //print_whiteCross(rubik);



    //Put the orange/white border in the correct position

    printf("\nOrange/white border -->   ");

    //position white/blue
    if(rubik[1].cube == 3){
      if(rubik[1].color == 0){
        printf("Position white/blue  -->  ");
        executeAlgo(rubik,solution,switchRotation("rURu",02,solution, 111, 4), 4);
      }
      else{
        printf("Position white/blue reverse -->  ");
        executeAlgo(rubik,solution,switchRotation("FR",04,solution, 111, 2), 2);
      }
    }
    //position white/orange
    else if(rubik[3].cube == 3){
      if(rubik[3].color == 0){
          printf("Already in place ");
      }
      else{
        printf("Position white/orange reverse -->  ");
        executeAlgo(rubik,solution,switchRotation("rUfu",04,solution, 111, 4), 4);
      }
    }
    //position white/red
    else if(rubik[5].cube == 3){
      if(rubik[5].color == 0){
        printf("Position white/red -->  ");
        executeAlgo(rubik,solution,switchRotation("rUURUU",01,solution, 111, 6), 6);
      }
      else{
        printf("Position white/red reverse -->  ");
        executeAlgo(rubik,solution,switchRotation("rUfU",01,solution, 111, 4), 4);
      }
    }
    //position white/green
    else if(rubik[7].cube == 3){
      if(rubik[7].color == 0){
        printf("Position white/green  -->  ");
        executeAlgo(rubik,solution,switchRotation("ruRU",03,solution, 111, 4), 4);
      }
      else{
        printf("Position white/green reverse -->  ");
        executeAlgo(rubik,solution,switchRotation("rf",03,solution, 111, 2), 2);
      }
    }

    //position orange/blue
    else if(rubik[21].cube == 3){
      if(rubik[21].color == 0){
        printf("Position orange/blue  -->  ");
        executeAlgo(rubik,solution,switchRotation("Ulu",03,solution, 111, 3), 3);
      }
      else{
        printf("Position orange/blue reverse -->  ");
        executeAlgo(rubik,solution,switchRotation("R",04,solution, 111, 1), 1);
      }
    }
    //position orange/green
    else if(rubik[23].cube == 3){
      if(rubik[23].color == 0){
        printf("Position orange/green  -->  ");
        executeAlgo(rubik,solution,switchRotation("uRU",03,solution, 111, 3), 3);
      }
      else{
        printf("Position orange/green reverse -->  ");
        executeAlgo(rubik,solution,switchRotation("r",04,solution, 111, 1), 1);
      }
    }
    //position green/red
    else if(rubik[26].cube == 3){
      if(rubik[26].color == 0){
        printf("Position green/red  -->  ");
        executeAlgo(rubik,solution,switchRotation("UURUU",01,solution, 111, 5), 5);
      }
      else{
        printf("Position green/red reverse -->  ");
        executeAlgo(rubik,solution,switchRotation("ufU",01,solution, 111, 3), 3);
      }
    }
    //position red/blue
    else if(rubik[29].cube == 3){
      if(rubik[29].color == 0){
        printf("Position red/blue  -->  ");
        executeAlgo(rubik,solution,switchRotation("URu",02,solution, 111, 3), 3);
      }
      else{
        printf("Position red/blue reverse -->  ");
        executeAlgo(rubik,solution,switchRotation("UUrUU",01,solution, 111, 5), 5);
      }
    }

    //position orange/yellow
    else if(rubik[34].cube == 3){
      if(rubik[34].color == 0){
        printf("Position orange/yellow  -->  ");
        executeAlgo(rubik,solution,switchRotation("RUfu",04,solution, 111, 4), 4);
      }
      else{
        printf("Position orange/yellow reverse -->  ");
        executeAlgo(rubik,solution,switchRotation("RR",04,solution, 111, 2), 2);
      }
    }
    //position green/yellow
    else if(rubik[37].cube == 3){
      if(rubik[37].color == 0){
        printf("Position green/yellow  -->  ");
        executeAlgo(rubik,solution,switchRotation("uRUf",03,solution, 111, 4), 4);
      }
      else{
        printf("Position green/yellow reverse -->  ");
        executeAlgo(rubik,solution,switchRotation("dRR",04,solution, 111, 3), 3);
      }
    }
    //position red/yellow
    else if(rubik[40].cube == 3){
      if(rubik[40].color == 0){
        printf("Position red/yellow  -->  ");
        executeAlgo(rubik,solution,switchRotation("UURUfU",01,solution, 111, 6), 6);
      }
      else{
        printf("Position red/yellow reverse -->  ");
        executeAlgo(rubik,solution,switchRotation("DDRR",04,solution, 111, 4), 4);
      }
    }
    //position blue/yellow
    else if(rubik[43].cube == 3){
      if(rubik[43].color == 0){
        printf("Position blue/yellow  -->  ");
        executeAlgo(rubik,solution,switchRotation("UfuR",04,solution, 111, 4), 4);
      }
      else{
        printf("Position blue/yellow reverse -->  ");
        executeAlgo(rubik,solution,switchRotation("DRR",04,solution, 111, 3), 3);
      }
    }
    else{
      printf("pas dans les cas\n");
    }

    //print_whiteCross(rubik);


}










void addWhiteCorner(struct pixel* rubik,struct res* solution){

  int i = 0;

  while(i < 200 && (rubik[0].correct != 0 || rubik[2].correct != 2 || rubik[6].correct != 6 || rubik[8].correct != 8) ){
    i+=1;
    printf("%i\n",i );
    //print_cube(rubik);


    //cas d'insertion de base

    if(rubik[0].correct != 0){
      if(rubik[44].cube == 0 && rubik[51].color != 0){
        printf("Corner orange/blue/white -->  ");
        if(rubik[44].color == 0){
            printf("Position orange/blue/yellow left case -->  ");
            executeAlgo(rubik,solution,switchRotation("LDl",03,solution, 112, 3), 3);
        }
        else{
          printf("Position orange/blue/yellow right case -->  ");
          executeAlgo(rubik,solution,switchRotation("rdR",04,solution, 112, 3), 3);
        }
        continue;
      }
    }

    if(rubik[2].correct != 2){
       if(rubik[41].cube == 2 && rubik[53].color != 0){
         printf("Corner red/blue/white -->  ");
         if(rubik[41].color == 0){
           printf("Position red/blue/yellow left case -->  ");
           executeAlgo(rubik,solution,switchRotation("LDl",04,solution, 112, 3), 3);
         }
         else{
           printf("Position red/blue/yellow right case -->  ");
           executeAlgo(rubik,solution,switchRotation("rdR",02,solution, 112, 3), 3);
         }
         continue;
       }
    }

    if(rubik[6].correct != 6){
        if(rubik[35].cube == 6 && rubik[45].color != 0){
        printf("Corner orange/green/white -->  ");
        if(rubik[35].color == 0){
          printf("Position orange/green/yellow left case -->  ");
          executeAlgo(rubik,solution,switchRotation("LDl",01,solution, 112, 3), 3);
        }
        else{
          printf("Position orange/green/yellow right case -->  ");
          executeAlgo(rubik,solution,switchRotation("rdR",03,solution, 112,3), 3);
        }
        continue;
      }
    }

    if(rubik[8].correct != 8){
      if(rubik[38].cube == 8 && rubik[47].color != 0){
        printf("Corner red/green/white -->  ");
        if(rubik[38].color == 0){
          printf("Position red/green/yellow left case -->  ");
          executeAlgo(rubik,solution,switchRotation("LDl",02,solution, 112, 3), 3);
        }
        else{
          printf("Position red/green/yellow right case -->  ");
          executeAlgo(rubik,solution,switchRotation("rdR",01,solution, 112, 3), 3);
        }
        continue;
      }
    }

    //fin insertion de base

    //Sequence rotation 'simple' pour insertion

    //rotation du bas corner orange/green/yellow
    if(rubik[45].cube == 0 && rubik[45].color != 0){
      printf("Corner orange/blue/white -->  Position orange/green/yellow -->  rotation -->  ");
      executeAlgo(rubik,solution,switchRotation("d",01,solution, 112, 1), 1);
      continue;
    }

    if(rubik[45].cube == 2 && rubik[45].color != 0){
      printf("Corner red/blue/white -->  Position orange/green/yellow -->  rotation -->  ");
      executeAlgo(rubik,solution,switchRotation("DD",01,solution, 112, 2), 2);
      continue;
    }

    if(rubik[45].cube == 8 && rubik[45].color != 0){
      printf("Corner red/green/white -->  Position orange/green/yellow -->  rotation -->  ");
      executeAlgo(rubik,solution,switchRotation("D",01,solution, 112, 1), 1);
      continue;
    }

    //rotation du bas corner red/green/yellow
    if(rubik[47].cube == 0 && rubik[47].color != 0){
      printf("Corner orange/blue/white -->  Position red/green/yellow -->  rotation -->  ");
      executeAlgo(rubik,solution,switchRotation("DD",01,solution, 112, 2), 2);
      continue;
    }

    if(rubik[47].cube == 2 && rubik[47].color != 0){
      printf("Corner red/blue/white -->  Position red/green/yellow -->  rotation -->  ");
      executeAlgo(rubik,solution,switchRotation("D",01,solution, 112, 1), 1);
      continue;
    }

    if(rubik[47].cube == 6 && rubik[47].color != 0){
      printf("Corner orange/green/white -->  Position red/green/yellow -->  rotation -->  ");
      executeAlgo(rubik,solution,switchRotation("d",01,solution, 112, 1), 1);
      continue;
    }

    //rotation du bas corner red/blue/yellow
    if(rubik[53].cube == 0 && rubik[53].color != 0){
      printf("Corner orange/blue/white -->  Position red/blue/yellow -->  rotation -->  ");
      executeAlgo(rubik,solution,switchRotation("D",01,solution, 112, 1), 1);
      continue;
    }

    if(rubik[53].cube == 6 && rubik[53].color != 0){
      printf("Corner orange/green/white -->  Position red/blue/yellow -->  rotation -->  ");
      executeAlgo(rubik,solution,switchRotation("DD",01,solution, 112, 2), 2);
      continue;
    }

    if(rubik[53].cube == 8 && rubik[53].color != 0){
      printf("Corner red/green/white -->  Position red/blue/yellow -->  rotation -->  ");
      executeAlgo(rubik,solution,switchRotation("d",01,solution, 112, 1), 1);
      continue;
    }

    //rotation du bas corner orange/blue/yellow
    if(rubik[51].cube == 2 && rubik[51].color != 0){
      printf("Corner red/blue/white -->  Position orange/blue/yellow -->  rotation -->  ");
      executeAlgo(rubik,solution,switchRotation("d",01,solution, 112, 1), 1);
      continue;
    }

    if(rubik[51].cube == 6 && rubik[51].color != 0){
      printf("Corner orange/green/white -->  Position orange/blue/yellow -->  rotation -->  ");
      executeAlgo(rubik,solution,switchRotation("D",01,solution, 112, 1), 1);
      continue;
    }

    if(rubik[51].cube == 8 && rubik[51].color != 0){
      printf("Corner red/green/white -->  Position orange/blue/yellow -->  rotation -->  ");
      executeAlgo(rubik,solution,switchRotation("DD",01,solution, 112, 2), 2);
      continue;
    }

    //fin de cette séquence



    //on s'occupe des corners position basse et color reverse (blanc sur la face jaune)


    //cube position orange/green/yellow reverse
    if(rubik[45].color == 0){
      if(rubik[45].cube == 0){
        printf("Corner orange/blue/white -->  Position orange/green/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("d",02,solution, 112, 1), 1);
        executeAlgo(rubik,solution,switchRotation("rddRD",04,solution, 112, 5), 5);
        continue;
      }

      if(rubik[45].cube == 2){
        printf("Corner red/blue/white -->  Position orange/green/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("DD",02,solution, 112, 2), 2);
        executeAlgo(rubik,solution,switchRotation("rddRD",02,solution, 112, 5), 5);
        continue;
      }

      if(rubik[45].cube == 6){
        printf("Corner orange/green/white -->  Position orange/green/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("rddRD",03,solution, 112, 5), 5);
        continue;
      }

      if(rubik[45].cube == 8){
        printf("Corner red/green/white -->  Position orange/green/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("D",01,solution, 112, 1), 1);
        executeAlgo(rubik,solution,switchRotation("rddRD",01,solution, 112, 5), 5);
        continue;
      }

    }

    //cube position red/green/yellow reverse
    if(rubik[47].color == 0){
      if(rubik[47].cube == 0){
        printf("Corner orange/blue/white -->  Position red/green/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("DD",04,solution, 112, 2), 2);
        executeAlgo(rubik,solution,switchRotation("rddRD",04,solution, 112, 5), 5);
        continue;
      }

      if(rubik[47].cube == 2){
        printf("Corner red/blue/white -->  Position red/green/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("D",02,solution, 112, 1), 1);
        executeAlgo(rubik,solution,switchRotation("rddRD",02,solution, 112, 5), 5);
        continue;
      }

      if(rubik[47].cube == 6){
        printf("Corner orange/green/white -->  Position red/green/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("d",03,solution, 112, 1), 1);
        executeAlgo(rubik,solution,switchRotation("rddRD",03,solution, 112, 5), 5);
        continue;
      }

      if(rubik[47].cube == 8){
        printf("Corner red/green/white -->  Position red/green/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("rddRD",01,solution, 112, 5), 5);
        continue;
      }

    }

    //cube position red/blue/yellow reverse
    if(rubik[53].color == 0){
      if(rubik[53].cube == 0){
        printf("Corner orange/blue/white -->  Position red/blue/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("D",04,solution, 112, 1), 1);
        executeAlgo(rubik,solution,switchRotation("rddRD",04,solution, 112, 5), 5);
        continue;
      }

      if(rubik[53].cube == 2){
        printf("Corner red/blue/white -->  Position red/blue/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("rddRD",02,solution, 112, 5), 5);
        continue;
      }

      if(rubik[53].cube == 6){
        printf("Corner orange/green/white -->  Position red/blue/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("DD",03,solution, 112, 2), 2);
        executeAlgo(rubik,solution,switchRotation("rddRD",03,solution, 112, 5), 5);
        continue;
      }

      if(rubik[53].cube == 8){
        printf("Corner red/green/white -->  Position red/blue/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("d",01,solution, 112, 1), 1);
        executeAlgo(rubik,solution,switchRotation("rddRD",01,solution, 112, 5), 5);
        continue;
      }

    }

    //cube position orange/blue/yellow reverse
    if(rubik[51].color == 0){
      if(rubik[51].cube == 0){
        printf("Corner orange/blue/white -->  Position orange/blue/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("rddRD",04,solution, 112, 5), 5);
        continue;
      }

      if(rubik[51].cube == 2){
        printf("Corner red/blue/white -->  Position orange/blue/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("d",02,solution, 112, 1), 1);
        executeAlgo(rubik,solution,switchRotation("rddRD",02,solution, 112, 5), 5);
        continue;
      }

      if(rubik[51].cube == 6){
        printf("Corner orange/green/white -->  Position orange/blue/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("D",03,solution, 112, 1), 1);
        executeAlgo(rubik,solution,switchRotation("rddRD",03,solution, 112, 5), 5);
        continue;
      }

      if(rubik[51].cube == 8){
        printf("Corner red/green/white -->  Position orange/blue/yellow reverse -->  rotation -->  ");
        executeAlgo(rubik,solution,switchRotation("DD",01,solution, 112, 2), 2);
        executeAlgo(rubik,solution,switchRotation("rddRD",01,solution, 112, 5), 5);
        continue;
      }

    }

    //fin de séquence reverse whiteFace







    //séquence corner sur face blanche mal placé/positionné

    //cube 0
    if(rubik[0].correct != 0){
      if(rubik[0].cube == 0){
          if(rubik[9].color == 0){
              printf("Corner orange/blue/white -->  Position orange/blue/white right -->  rotation -->  ");
              executeAlgo(rubik,solution,switchRotation("Ldl",03,solution, 112, 3), 3);
              continue;
          }
          else{
              printf("Corner orange/blue/white -->  Position orange/blue/white left -->  rotation -->  ");
              executeAlgo(rubik,solution,switchRotation("rDR",04,solution, 112, 3), 3);
              continue;
          }
      }

      if(rubik[0].cube == 2){
          if(rubik[0].color == 0 || rubik[9].color == 0){
              printf("Corner red/blue/white -->  Position orange/blue/white top or right -->  rotation -->  ");
              executeAlgo(rubik,solution,switchRotation("rdR",04,solution, 112, 3), 3);
              continue;
          }
          else{
              printf("Corner orange/blue/white -->  Position orange/blue/white left -->  rotation -->  ");
              executeAlgo(rubik,solution,switchRotation("rDRd",04,solution, 112, 4), 4);
              continue;
          }
      }

      if(rubik[0].cube == 6){
          if(rubik[0].color == 0 || rubik[20].color == 0){
              printf("Corner orange/green/white -->  Position orange/blue/white top or left -->  rotation -->  ");
              executeAlgo(rubik,solution,switchRotation("rDRD",04,solution, 112,4), 4);
              continue;
          }
          else{
              printf("Corner orange/green/white -->  Position orange/blue/white right -->  rotation -->  ");
              executeAlgo(rubik,solution,switchRotation("LdlD",03,solution, 112, 4), 4);
              continue;
          }
      }

      if(rubik[0].cube == 8){
          if(rubik[0].color == 0 || rubik[9].color == 0){
              printf("Corner red/green/white -->  Position orange/blue/white top or right -->  rotation -->  ");
              executeAlgo(rubik,solution,switchRotation("rDDR",04,solution, 112, 4), 4);
              continue;
          }
          else{
              printf("Corner red/green/white -->  Position orange/blue/white lefts -->  rotation -->  ");
              executeAlgo(rubik,solution,switchRotation("LDDl",03,solution, 112, 4), 4);
              continue;
          }
      }
  }

  //cube 2
  if(rubik[2].correct != 2){

    if(rubik[2].cube == 0){
        if(rubik[2].color == 0 || rubik[17].color == 0){
            printf("Corner orange/blue/white -->  Position red/blue/white left -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("LDl",04,solution, 112, 3), 3);
            continue;
        }
        else{
            printf("Corner orange/blue/white -->  Position red/blue/white right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("LdLD",04,solution, 112, 4), 4);
            continue;
        }
    }

    if(rubik[2].cube == 2){
        if(rubik[9].color == 0){
            printf("Corner red/blue/white -->  Position red/blue/white right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("Ldl",04,solution, 112, 3), 3);
            continue;
        }
        else{
            printf("Corner orange/blue/white -->  Position red/blue/white left -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rDR",02,solution, 112, 3), 3);
            continue;
        }
    }

    if(rubik[2].cube == 6){
        if(rubik[2].color == 0 || rubik[18].color == 0){
            printf("Corner orange/green/white -->  Position red/blue/white top or right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rDDR",02,solution, 112, 4), 4);
            continue;
        }
        else{
            printf("Corner orange/green/white -->  Position red/blue/white right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("LDDl",04,solution, 112, 4), 4);
            continue;
        }
    }

    if(rubik[2].cube == 8){
        if(rubik[2].color == 0 || rubik[18].color == 0){
            printf("Corner red/green/white -->  Position red/blue/white top or right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rdR",02,solution, 112, 3), 3);
            continue;
        }
        else{
            printf("Corner red/green/white -->  Position red/blue/white left -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rDRd",02,solution, 112, 4), 4);
            continue;
        }
    }
  }

  //cube 6
  if(rubik[6].correct != 6){

    if(rubik[6].cube == 0){
        if(rubik[6].color == 0 || rubik[12].color == 0){
            printf("Corner orange/blue/white -->  Position orange/green/white right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rdR",03,solution, 112, 3), 3);
            continue;
        }
        else{
            printf("Corner orange/blue/white -->  Position orange/green/white right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rDRd",03,solution, 112, 4), 4);
            continue;
        }
    }

    if(rubik[6].cube == 2){
        if(rubik[9].color == 0 || rubik[12].color == 0){
            printf("Corner red/blue/white -->  Position orange/green/white top or right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rDDR",03,solution, 112, 4), 4);
            continue;
        }
        else{
            printf("Corner orange/blue/white -->  Position orange/green/white left -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("LDDl",01,solution, 112, 4), 4);
            continue;
        }
    }

    if(rubik[6].cube == 6){
        if(rubik[12].color == 0){
            printf("Corner orange/green/white -->  Position orange/green/white right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("Ldl",01,solution, 112, 3), 3);
            continue;
        }
        else{
            printf("Corner orange/green/white -->  Position orange/green/white right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rDR",03,solution, 112, 3), 3);
            continue;
        }
    }

    if(rubik[6].cube == 8){
        if(rubik[6].color == 0 || rubik[11].color == 0){
            printf("Corner red/green/white -->  Position orange/green/white top or left -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rDRD",03,solution, 112, 4), 4);
            continue;
        }
        else{
            printf("Corner red/green/white -->  Position orange/green/white right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("LdlD",01,solution, 112, 4), 4);
            continue;
        }
    }
  }

  //cube 8
  if(rubik[8].correct != 8){

    if(rubik[8].cube == 0){
        if(rubik[8].color == 0 || rubik[15].color == 0){
            printf("Corner orange/blue/white -->  Position red/green/white top or right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rDDR",01,solution, 112, 4), 4);
            continue;
        }
        else{
            printf("Corner orange/blue/white -->  Position red/green/white right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("LDDl",02,solution, 112, 4), 4);
            continue;
        }
    }

    if(rubik[8].cube == 2){
        if(rubik[8].color == 0 || rubik[14].color == 0){
            printf("Corner red/blue/white -->  Position red/green/white top or left -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("LDl",02,solution, 112, 3), 3);
            continue;
        }
        else{
            printf("Corner orange/blue/white -->  Position red/green/white right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rDDR",01,solution, 112, 4), 4);
            continue;
        }
    }

    if(rubik[8].cube == 6){
        if(rubik[8].color == 0 || rubik[15].color == 0){
            printf("Corner orange/green/white -->  Position red/green/white top or right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rdR",01,solution, 112, 3), 3);
            continue;
        }
        else{
            printf("Corner orange/green/white -->  Position red/green/white right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rDRd",01,solution, 112, 4), 4);
            continue;
        }
    }

    if(rubik[8].cube == 8){
        if(rubik[14].color == 0){
            printf("Corner red/green/white -->  Position red/green/white left -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("rDR",01,solution, 112, 3), 3);
            continue;
        }
        else{
            printf("Corner red/green/white -->  Position red/green/white right -->  rotation -->  ");
            executeAlgo(rubik,solution,switchRotation("Ldl",02,solution, 112, 3), 3);
            continue;
        }
    }
  }




  }
}
