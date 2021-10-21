#include "rubik.h"
#include "solution.h"
#include "rotation.h"
#include "switchRotation.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

//Color for print
#define PWHITE "\x1B[37m"
#define PORANGE "\x1B[35m"
#define PRED  "\x1B[31m"
#define PGREEN  "\x1B[32m"
#define PBLUE  "\x1B[34m"
#define PYELLOW "\x1B[33m"
#define PRESET "\x1B[0m"


/*
  executeAlgo:
    args : --> structure rubik
           --> string

    goal : execute une succesion de rotation sur le cube

    return : none

    use :
        struct pixel* rubik = Rubik();
        char test[12] = "FRUBLDfrubld";
        executeAlgo(rubik,test);
*/
void executeAlgo(struct pixel* rubik, struct res* solution,char* algo,int len){

  //printf("\n%s --> %i\n",algo,len);

  /*int i = 0;
  while(algo[i] != 0){*/
  for(int i = 0; i < len;i++){
    //printf("%c ",algo[i]);
    solution -> resProgram[solution -> lenResProgram] = algo[i];
    solution -> lenResProgram += 1;
    switch (algo[i]) {
      case 'F':
        rotationF(rubik);
        break;
      case 'R':
        rotationR(rubik);
        break;
      case 'U':
        rotationU(rubik);
        break;
      case 'B':
        rotationB(rubik);
        break;
      case 'L':
        rotationL(rubik);
        break;
      case 'D':
        rotationD(rubik);
        break;
      case 'f':
        rotationFi(rubik);
        break;
      case 'r':
        rotationRi(rubik);
        break;
      case 'u':
        rotationUi(rubik);
        break;
      case 'b':
        rotationBi(rubik);
        break;
      case 'l':
        rotationLi(rubik);
        break;
      case 'd':
        rotationDi(rubik);
        break;
      default:
        //printf("Lettre inconnu\n");
        //printf("%c\n", algo[i]);
        //errx(EXIT_FAILURE,"Lettre inconnu");
        break;
    }

    //print_rubik(rubik);
  }


}

/*
  print_rubik:
    args : --> structure rubik

    goal : print le patron du rubiks cube dans la console

    return : none

    use :

        struct pixel* rubik = Rubik();
        ...
        print_rubik(rubik);
*/
void printRubik(struct pixel* rubik){
      for (int i = 0; i < 54; i++) {
        if(i == 3 || i == 6 || i == 9 || i == 21 || i == 33 || i == 45 || i == 48 || i == 51){
            printf("\n");
        }
        if(i == 9 || i == 45){
          printf("\n");
        }

        if(i == 0 || i == 3 || i == 6 || i == 45 || i == 48 || i == 51){
            printf("        ");
        }
        if(i == 12 || i == 15 || i == 18 || i == 24 || i == 27 || i == 30 || i == 36 || i == 39 || i == 42){
            printf("  ");
        }


        switch (rubik[i].color) {
            case 0:
                printf(PWHITE"□ ");
                break;
            case 1:
                printf(PGREEN"□ ");
                break;
            case 2:
                printf(PRED"□ ");
                break;
            case 4:
                printf(PBLUE "□ ");
                break;
            case 3:
              printf(PORANGE"□ ");
              break;
            case 5:
                printf( PYELLOW"□ ");
                break;

            default:
                printf(PRESET"[Print Rubik] Error");
                break;
        }
  }

printf(PRESET "\n============\n");
}

/*
  printCube:
    args : --> structure rubik

    goal : print the rubik cube with color and the number of each cube

    return : none

*/
void printCube(struct pixel* rubik){
      for (int i = 0; i < 54; i++) {
        if(i == 3 || i == 6 || i == 9 || i == 21 || i == 33 || i == 45 || i == 48 || i == 51){
            printf("\n");
        }
        if(i == 9 || i == 45){
          printf("\n");
        }

        if(i == 0 || i == 3 || i == 6 || i == 45 || i == 48 || i == 51){
            printf("              ");
        }
        if(i == 12 || i == 15 || i == 18 || i == 24 || i == 27 || i == 30 || i == 36 || i == 39 || i == 42){
            printf("  ");
        }


        switch (rubik[i].color) {
            case 0:
                printf(PWHITE"");
                break;
            case 1:
                printf(PGREEN"");
                break;
            case 2:
                printf(PRED"");
                break;
            case 4:
                printf(PBLUE "");
                break;
            case 3:
              printf(PORANGE"");
              break;
            case 5:
                printf( PYELLOW"");
                break;

            default:
                printf(PRESET"[Print Rubik] Error");
                break;
        }

        if(rubik[i].cube < 10){
          printf("  %i ",rubik[i].cube );
        }
        else{
          printf(" %i ",rubik[i].cube );
        }

  }

printf(PRESET "\n============\n");
}

/*
  printCube:
    args : --> structure rubik

    goal : print only the white cross in color,
        the other color peace are colored in grey

    return : none

*/
void printWhiteCross(struct pixel* rubik){
      for (int i = 0; i < 54; i++) {
        if(i == 3 || i == 6 || i == 9 || i == 21 || i == 33 || i == 45 || i == 48 || i == 51){
            printf("\n");
        }
        if(i == 9 || i == 45){
          printf("\n");
        }

        if(i == 0 || i == 3 || i == 6 || i == 45 || i == 48 || i == 51){
            printf("              ");
        }
        if(i == 12 || i == 15 || i == 18 || i == 24 || i == 27 || i == 30 || i == 36 || i == 39 || i == 42){
            printf("  ");
        }


        if(rubik[i].color == 0 && (rubik[i].type == 1 || rubik[i].type == 2)){
          if(rubik[i].cube < 10){
            printf(PWHITE"  %i ",rubik[i].cube );
          }
          else{
            printf(PWHITE" %i ",rubik[i].cube );
          }
        }
        else if(rubik[i].color ==  3 && (rubik[i].cube == 3 || rubik[i].cube == 10)){
          if(rubik[i].cube < 10){
            printf(PORANGE"  %i ",rubik[i].cube );
          }
          else{
            printf(PORANGE" %i ",rubik[i].cube );
          }
        }
        else if(rubik[i].color ==  1 && (rubik[i].cube == 7 || rubik[i].cube == 12)){
          if(rubik[i].cube < 10){
            printf(PGREEN"  %i ",rubik[i].cube );
          }
          else{
            printf(PGREEN" %i ",rubik[i].cube );
          }
        }
        else if(rubik[i].color ==  2 && ( rubik[i].cube == 5 || rubik[i].cube == 14)){
          if(rubik[i].cube < 10){
            printf(PRED"  %i ",rubik[i].cube );
          }
          else{
            printf(PRED" %i ",rubik[i].cube );
          }
        }
        else if(rubik[i].color ==  4 && (rubik[i].cube == 1 || rubik[i].cube == 16)){
          if(rubik[i].cube < 10){
            printf(PBLUE"  %i ",rubik[i].cube );
          }
          else{
            printf(PBLUE" %i ",rubik[i].cube );
          }
        }
        else{
          if(rubik[i].cube < 10){
            printf("\033[30;01m  %i ",rubik[i].cube );
          }
          else{
            printf("\033[30;01m %i ",rubik[i].cube );
          }
        }
  }

printf(PRESET "\n============\n");
}




/*
  readConsole:
    args : --> structure rubik

    goal : execute rotation in console after a key enter

    key disponible :
      'F','R','U','B','L','D','f','r','u','b','l','d'

    return : none

    use :
        struct pixel* rubik = Rubik();
        readConsole(rubik);
*/
/*
void readConsole(struct pixel* rubik){

    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;
    int state = 0;
    while (1) {
        printf("%d : Enter a rotation : ",state);
        read = getline(&line, &len, stdin);
        if (read == -1)
            break;
        //printf("line = %s", line);
        if(read != 2){
          printf("cette rotation n'existe pas\n");
        }
        else{
          switch (line[0]) {
            case 'F':
              rotationF(rubik);
              break;
            case 'R':
              rotationR(rubik);
              break;
            case 'U':
              rotationU(rubik);
              break;
            case 'B':
              rotationB(rubik);
              break;
            case 'L':
              rotationL(rubik);
              break;
            case 'D':
              rotationD(rubik);
              break;

            case 'f':
              rotationFi(rubik);
              break;
            case 'r':
              rotationRi(rubik);
              break;
            case 'u':
              rotationUi(rubik);
              break;
            case 'b':
              rotationBi(rubik);
              break;
            case 'l':
              rotationLi(rubik);
              break;
            case 'd':
              rotationDi(rubik);
              break;

            default:
              printf("Cette rotation n'existe pas\n");
          }
        }
        //printf("here %c\n",line[0]);
        //printf("line length = %zu\n", read);
        puts("");
        printRubik(rubik);
        state += 1;
    }
    free(line);
}*/

/*
  randomRange:
    args : --> none

    goal : get a random number betwen 0 and 11

    return : int

    use :
        randomRange();
*/
int randomRange(int maxRange){
    static int first = -1;
    if((first = (first<0)))
        srand(time(NULL)+getpid());

    return (int)((double)rand()) / ((double)RAND_MAX) * maxRange;
}


/*testRand

  c'est juste pour vérifier que le rand marche bien ça restera pas
*/
void testRand(int iteration){

    int rn;
    int count[5] = {0,0,0,0,0};
    printf("iteration : %i\n", iteration);
    for (int i = 0; i < iteration; i++) {
        rn = randomRange(4);
        if(rn >= 0 && rn < 5){
          count[rn] += 1;
        }
        else{
          count[5] += 1;
        }
    }

    int min = count[0];
    int minP = 0;
    int max = count[0];
    int maxP = 0;


    for (int i = 0; i < 4; i++) {
      printf("%i : %i\n",i, count[i]);

      if(count[i] < min){
        min = count[i];
        minP = i;
      }
      if(count[i] > max){
        max = count[i];
        maxP = i;
      }

    }

    printf("Out of range : %i\n",count[4]);
    printf("Max : %i --> %i \n", maxP,max);
    printf("Min : %i --> %i \n", minP,min);
    printf("Ecart max : %i\n",max-min);

}

/*
  rubikScramble:
    args : --> int mouvement (nombre de mouvement)

    goal : crée une chaine de caractère aléatoire  (scramble)
           sans jamais avoir deux mouvement qui s'annule de suite

    return : char*

    use :
      struct pixel* rubik = Rubik();
      char *test = malloc(sizeof(char)*25);
      test = rubikScramble(25);
      executeAlgo(rubik,test);
*/
char* rubikScramble(int mouvement){
  int i = 0,rn,rn2 = -1;
  char *scramble = malloc(sizeof(char)*mouvement);
  while(i  < mouvement){

    rn = randomRange(12);


    while((rn + rn2) == 11){
      rn = randomRange(12);
    }


    switch (rn) {
      case 0:
        scramble[i] = 'F';
        break;
      case 1:
        scramble[i] = 'R';
        break;
      case 2:
        scramble[i] = 'U';
        break;
      case 3:
        scramble[i] = 'B';
        break;
      case 4:
        scramble[i] = 'L';
        break;
      case 5:
        scramble[i] = 'D';
        break;

      case 6:
        scramble[i] = 'd';
        break;
      case 7:
        scramble[i] = 'l';
        break;
      case 8:
        scramble[i] = 'b';
        break;
      case 9:
        scramble[i] = 'u';
        break;
      case 10:
        scramble[i] = 'r';
        break;
      case 11:
        scramble[i] = 'f';
        break;

      default:
        printf("[Scramble] Error random\n");
        break;


    }
    rn2 = rn;
    i+=1;
  }

  return scramble;
}

/*
  verifPosition:
    args : --> structure rubiks
           --> int position

    goal : verif if a cube is at the good position

    return : int (bool 1 or 0)

    use :
      struct pixel* rubik = Rubik();

      if(verifPosition(rubik,17)){
        ...
      }
      else{
        ...
      }
*/
int verifPosition(struct pixel* rubik,int pos){
  return rubik[pos].correct == pos;
}

/*
  verifRubik:
    args : --> structure rubiks

    goal : verif if the cube is complete

    return : int (bool 1 or 0)

    use :
      struct pixel* rubik = Rubik();

      if(verifRubik(rubik)){
        ...
      }
      else{
        ...
      }
*/
int verifRubik(struct pixel* rubik){
  for (int i = 53; i != -1; i--) {
    if(rubik[i].correct != i){
      //printf("%i -- %i\n",rubik[i].correct,i );
      return 0;
    }
  }
  return 1;
}

/*
  printMisstakeRubik:
    args : --> structure rubiks

    goal : print the wrong position of our rubik

    return : none

    use :
      struct pixel* rubik = Rubik();

      printMisstakeRubik(rubik);
*/
void printMisstakeRubik(struct pixel* rubik){
  for (int i = 0; i < 53; i++) {
    if(rubik[i].correct != i){
      printf("Mauvaise position du cube en %i de couleur %c. Sa position devrait être %i\n",i,rubik[i].color,rubik[i].correct);
    }
  }
}

/*
  intToStringFace:
    args : --> int face

    goal : replace the int of face by a char
    exemple : 52 --> YR (Yellow Red)

    return : none

*/
char* intToStringFace(int face){
  char* res = malloc(sizeof(char) * 2);

  int nb = face/10;

  for (int i = 0; i < 2; i++) {
    switch (nb) {
      case 0:
        res[i] = 'W';
        break;
      case 1:
        res[i] = 'G';
        break;
      case 2:
        res[i] = 'R';
        break;
      case 3:
        res[i] = 'O';
        break;
      case 4:
        res[i] = 'B';
        break;
      case 5:
        res[i] = 'Y';
        break;

    }
    nb = face % 10;
  }

  return res;
}

/*
  printSolutionProgamme:
    args : --> structure solution

    goal : print the program solution (the one use by the machine)

    return : none

*/
void printSolutionProgamme(struct res* solution){
  int i = 0;
  int len = solution -> lenResProgram;
  printf("Solution en langage programme (WG):\n");
  while (i < len) {
    char present = solution -> resProgram[i];

    if(i + 1 < len){
      char next = solution -> resProgram[i+1];
      if(present == next){
        if(present >= 97 && present <= 122){
          present -= 32;
        }
        printf("%c2 ",present );
        i+=2;
        continue;
      }
    }

    if(present >= 97 && present <= 122){
      present -= 32;
      printf("%c' ",present );
    }
    else{
      printf("%c  ",present );
    }

    i+=1;
  }
  printf("\nLongueur : %i\n\n",len);
}

/*
  prettyPrint:
    args : --> structure solution
           --> int start
           --> int nb

    goal : replace r by R', RR by R2 --> have a pretty print

    return : none

*/
void prettyPrint(struct res* solution, int start, int nb){
  for (int i = 0; i < nb; i++) {
    char present = solution -> resUser[start + i];
    /*if( i != nb - 1 && present == solution -> resUser[start + i + 1]){
      printf("%c2 ",present );
      i +=1;
      continue;
    }*/

    if(present >= 97 && present <= 122){
      if(present == 'a' || present == 'c' || present == 'e' || present == 'k' || present == 'q' || present == 't'){
        present ++;
      }
      else if(present != 'x' && present != 'y' && present != 'z'){
        present -= 32;
      }
      printf("%c' ",present );
    }
    else{
      if(present == 'A' || present == 'C' || present == 'E' || present == 'K' || present == 'Q' || present == 'T'){
        present += 33;
      }
      if(present == 'X' || present == 'Y' || present == 'Z'){
        present += 32;
      }
      printf("%c  ",present );
    }
  }
}

/*
  printSolutionUser2:
    args : --> structure solution

    goal : print the solution for the user step by step

    return : none

*/
void printSolutionUser2(struct res* solution){
  printf("Solution pour l'utilisateur : \n" );
  int len = solution -> lenFace;
  int pos = 0;

  for (int i = 0; i < len; i++) {
    int lenAlgo = solution -> lenPerAlgo[i];
    printf("Step %02d (%02d): %s-> ",i+1,lenAlgo,intToStringFace(solution -> face[i]) );

    prettyPrint(solution,pos,lenAlgo);

    printf("\n" );

    pos += lenAlgo;

  }
}

/*
  copyRubik:
    args : --> structure pixel rubik
           --> strucutre pixel rubik

    goal : copie the first rubik in the second to have a backup

    return : none

*/
void copyRubik(struct pixel* rubik,struct pixel* rubik2){

  for (int i = 0; i < 54; i++) {
    rubik2[i].type = rubik[i].type;
    rubik2[i].cube = rubik[i].cube;
    rubik2[i].color = rubik[i].color;
    rubik2[i].correct = rubik[i].correct;
  }


}

/*
  copySolution:
    args : --> structure res solution
           --> strucutre res solution

    goal : copie the first solution in the second to have a backup

    return : none

*/
void copySolution(struct res* solution,struct res* solution2){

  solution2 -> lenResProgram = solution -> lenResProgram;
  solution2 -> lenResUser = solution -> lenResUser;
  solution2 -> lenFace = solution -> lenFace;

  solution2 -> resProgram = solution -> resProgram;
  solution2 -> resUser = solution -> resProgram;
  solution2 -> face = solution -> face;

  solution2 -> lenPerAlgo = solution -> lenPerAlgo;


}

/*
  clearSolution:
    args : --> structure res solution

    goal : clear a solution

    return : none

*/
void clearSolution(struct res* solution){
  for (int i = 0; i < solution -> lenResUser; i++) {
    solution -> resUser[i] = ' ' ;
    solution -> resProgram[i] = ' ';

  }

  for (int i = 0; i < solution -> lenFace; i++) {
    solution -> face[i] = 0;
    solution -> lenPerAlgo[i] = 0;

  }

  solution -> lenResUser = 0;
  solution -> lenResProgram = 0;

  solution -> lenFace = 0;

}

void gigaClearSolution(struct res* solution){
  for (int i = 0; i < 400; i++) {
    solution -> resUser[i] = ' ' ;
    solution -> resProgram[i] = ' ';

  }

  for (int i = 0; i < 100; i++) {
    solution -> face[i] = 0;
    solution -> lenPerAlgo[i] = 0;
    solution -> info[i] = 0;

  }

  solution -> lenResUser = 0;
  solution -> lenResProgram = 0;

  solution -> lenFace = 0;

}
/*
void executeSolution(struct pixel* rubik, struct res* solution){

  struct res* newSolution = Solution();

  int count = 0;
  printf("Start :\n" );
  printRubik(rubik);

  for (int i = 0; i < solution -> lenFace; i++) {
    char* algo = malloc(sizeof(char) * solution -> lenPerAlgo[i]);
    for (int j = 0; j < solution -> lenPerAlgo[i]; j++) {
      algo[j] = solution -> resProgram[count];
      count++;
    }
    printf("Algo : %s\n",algo );
    executeAlgo(rubik,newSolution,algo);
    printf("Step %i : \n",i+1 );
    printRubik(rubik);
  }

  printSolutionUser2(solution);

}*/

void infoCube(struct pixel* rubik){
  for (int i = 0; i < 54; i++) {
    printf("Cube numéro : %02d | Type : %i | Cube : %02d | Color : %i | Correct : %02d\n",i,rubik[i].type,rubik[i].cube,rubik[i].color,rubik[i].correct );
  }
}

void infoSolution(struct res* solution){
  printf("len Res program = %i\n",solution -> lenResProgram );
  printf("len Res program = %i\n",solution -> lenResUser );
  printf("len Res program = %i\n",solution -> lenFace );

  printf("resProgram : ");
  for (int i = 0; i < 400; i++) {
    printf("%c",solution -> resProgram[i]);
  }

  printf("\nresUser : " );
  for (int i = 0; i < 400; i++) {
    printf("%c",solution -> resUser[i]);
  }

  printf("\n\nface : ");
  for (int i = 0; i < 100; i++) {
    printf("%i ",solution -> face[i]);
  }

  printf("\n\nlenPerAlgo : " );
  for (int i = 0; i < 100; i++) {
    printf("%i ",solution -> lenPerAlgo[i]);
  }

  printf("\n\nInfo : " );
  for (int i = 0; i < 100; i++) {
    printf("%i ",solution -> info[i]);
  }
  printf("\n" );

}

void rewriteSolution(struct res* solution,struct res* correct){
  char current;
  char next;
  int j = 0;
  for(int i = 0; i < solution -> lenResProgram - 1;i++){
    current = solution -> resProgram[i];
    next = solution -> resProgram[i+1];
    if(current > 97 && current < 122 && (current == next + 32)){
      printf("Doublon");
      i++;
    }
    else if(current > 65 && current < 90 && (current == next - 32)){
      printf("Doublon");
      i++;
    }
    else{
      correct -> resProgram[j] = current;
      correct -> lenResProgram ++;
    }
    j++;
  }
  correct -> resProgram[solution -> lenResProgram-1] = solution -> resProgram[solution -> lenResProgram -1];
  correct -> lenResProgram ++;


}
