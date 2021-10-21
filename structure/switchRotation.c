#include "rubik.h"
#include "solution.h"
#include "rotation.h"
#include "rubikTools.h"
#include <stdio.h>
#include <stdlib.h>
#include <err.h>

// Color 1 <==> Color Up
// Color 2 <==> Color Face
// Rubik rotation => White / Green

int lenString(char* rotation){
  int i = 0;
  while(rotation[i] != '\0'){
    i++;
  }
  return i;
}


int rotationToInt(char rotation){

  int WG[12] = {'R','r','L','l','U','u','D','d','F','f','B','b'};
  for (int i = 0; i < 12; i++) {
    if(WG[i] == rotation){
      return i;
    }
  }

  return -1;

}

char translateRotation(char rotation, int color1, int color2){

  int pos = rotationToInt(rotation);

  if(pos == -1){
    errx(1,"[translateRotation] mauvaise lettre");
  }

  if(color1 == 0){
              if(color2 == 1){
                int WG[12] = {'R','r','L','l','U','u','D','d','F','f','B','b'};
                return WG[pos];
              }
              else if(color2 == 2){
                int WR[12] = {'B','b','F','f','U','u','D','d','R','r','L','l'};
                return WR[pos];
              }
              else if(color2 == 3){
                int WO[12] = {'F','f','B','b','U','u','D','d','L','l','R','r'};
                return WO[pos];
              }
              else if(color2 == 4){
                int WB[12] = {'L','l','R','r','U','u','D','d','B','b','F','f'};
                return WB[pos];
              }
  }
  else if(color1 == 1){
              if(color2 == 0){
                int GW[12] = {'L','l','R','r','F','f','B','b','U','u','D','d'};
                return GW[pos];
              }
              else if(color2 == 2){
                int GR[12] = {'U','u','D','d','F','f','B','b','R','r','L','l'};
                return GR[pos];
              }
              else if(color2 == 3){
                int GO[12] = {'D','d','U','u','F','f','B','b','L','l','R','r'};
                return GO[pos];
              }
              else if(color2 == 5){
                int GY[12] = {'R','r','L','l','F','f','B','b','D','d','U','u'};
                return GY[pos];
              }
  }else if(color1 == 2){
              if(color2 == 0){
                int RO[12] = {'F','f','B','b','R','r','L','l','U','u','D','d'};
                return RO[pos];
              }
              else if(color2 == 1){
                int RG[12] = {'D','d','U','u','R','r','L','l','F','f','B','b'};
                return RG[pos];
              }
              else if(color2 == 4){
                int RB[12] = {'U','u','D','d','R','r','L','l','B','b','F','f'};
                return RB[pos];
              }
              else if(color2 == 5){
                int RY[12] = {'B','b','F','f','R','r','L','l','D','d','U','u'};
                return RY[pos];
              }
  }else if(color1 == 3){
              if(color2 == 0){
                int OW[12] = {'B','b','F','f','L','l','R','r','U','u','D','d'};
                return OW[pos];
              }
              else if(color2 == 1){
                int OG[12] = {'U','u','D','d','L','l','R','r','F','f','B','b'};
                return OG[pos];
              }
              else if(color2 == 4){
                int OB[12] = {'D','d','U','u','L','l','R','r','B','b','F','f'};
                return OB[pos];
              }
              else if(color2 == 5){
                int OY[12] = {'F','f','B','b','L','l','R','r','D','d','U','u'};
                return OY[pos];
              }
  }else if(color1 == 4){
              if(color2 == 0){
                int BW[12] = {'R','r','L','l','B','b','F','f','U','u','D','d'};
                return BW[pos];
              }
              else if(color2 == 2){
                int BR[12] = {'D','d','U','u','B','b','F','f','L','l','R','r'};
                return BR[pos];
              }
              else if(color2 == 3){
                int BO[12] = {'U','u','D','d','B','b','F','f','R','r','L','l'};
                return BO[pos];
              }
              else if(color2 == 5){
                int BY[12] = {'L','l','R','r','B','b','F','f','D','d','U','u'};
                return BY[pos];
              }
  }else if(color1 == 5){
              if(color2 == 1){
                int YG[12] = {'L','l','R','r','D','d','U','u','F','f','B','b'};
                return YG[pos];
              }
              else if(color2 == 2){
                int YR[12] = {'F','f','B','b','D','d','U','u','R','r','L','l'};
                return YR[pos];
              }
              else if(color2 == 3){
                int YO[12] = {'B','b','F','f','D','d','U','u','L','l','R','r'};
                return YO[pos];
              }
              else if(color2 == 4){
                int YB[12] = {'R','r','L','l','D','d','U','u','B','b','F','f'};
                return YB[pos];
              }
  }

  errx(1,"[translateRotation] Error");

}


char* switchRotation(char* rotation, int face, struct res* solution, int infoEdu,int len){
    //int len = lenString(rotation);

    char *res = malloc(sizeof(char) * len);

    int color1 = face/10;
    int color2 = face%10;

    solution -> face[solution -> lenFace] = face;
    solution -> info[solution -> lenFace] = infoEdu;

    solution -> lenPerAlgo[solution -> lenFace] = len;
    solution -> lenFace += 1;


    for (int i = 0; i < len; i++) {
      solution -> resUser[solution -> lenResUser] = rotation[i];
      solution -> lenResUser += 1;
      res[i] = translateRotation(rotation[i],color1,color2);
    }

    return res;
}

char* infoEdu_ToString(int infoEdu)
{
  char *res = malloc(sizeof(char) * 60); // SIZE OF MAX LEN

  //printf("Start : %i\n",infoEdu );

  if (infoEdu < 500) { // CLASSIC METHODE
    //printf("Méthode classique\n" );
    if (infoEdu < 200){ // 1 LAYER (WHITE FACE)
      switch (infoEdu) {
        case 111:
          res = "Etape des cubes border du 1ere layer";
          break;
        case 112:
          res = "Etape des cubes corner du 1ere layer";
          break;
      }
    }
    else if (infoEdu < 300) // 2 LAYERS
    {
      switch (infoEdu) {
        case 211:
          res = "Il n’y a pas de cubes centraux qui doivent être déplacé";
          break;
        case 212:
          res = "Outils pour le 2 Layers";
          break;
        case 221:
          res = "Algorithme de rotation gauche";
          break;
        case 222:
          res = "Algorithme de rotation droite";
          break;
        }
    }
    else if(infoEdu < 400) // 3 LAYERS
    {
      switch (infoEdu) {
      case 311:
      res = "Il n’y a pas la croix";
      break;
      case 312:
      res = "Il y a le L jaune";
      break;
      case 313:
      res = "Il y a une ligne jaune";
      break;
      case 314:
      res = "Redeplacement du L jaune";
      break;
      case 321:
      res = "A coup d’inversions binaire nous optenons nos centres jaune";
      break;
      case 322:
      res = "Outils pour les centres jaune";
      break;
      case 331:
      res = "On place les coins jaune";
      break;
      case 332:
      res = "Outils pour les coins jaune";
      break;
      case 341:
      res = "On oriente les coins jaune";
      break;
      case 342:
      res = "Outil pour orienter les coins jaune";
      break;
     }
    }
  }
  // FRIDRICH METHODE
  else{
    //printf("Méthode Frodroch\n" );
    if(infoEdu < 1030){
      if(infoEdu == 1001){
        res = "On place la bordure White/Blue";
      }
      else if(infoEdu == 1002){
        res = "On place la bordure White/Orange";
      }
      else if(infoEdu == 1003){
        res = "On place la bordure White/Red";
      }
      else if(infoEdu == 1004){
        res = "On place la bordure White/Green";
      }
      else if(infoEdu == 1010){
        res = "On place la paire Blue/Red";
      }
      else if(infoEdu == 1011){
        res = "On place la paire Red/Green";
      }
      else if(infoEdu == 1012){
        res = "On place la paire Green/Orange";
      }
      else if(infoEdu == 1013){
        res = "On place la paire Orange/Blue";
      }
      else if(infoEdu == 1014){
        res = "On libère la paire Blue/Red";
      }
      else if(infoEdu == 1015){
        res = "On libère la paire Red/Green";
      }
      else if(infoEdu == 1016){
        res = "On libère la paire Green/Orange";
      }
      else if(infoEdu == 1017){
        res = "On libère la paire Orange/Blue";
      }
      else if(infoEdu == 1018){
        res = "On libère le corner Blue/Red";
      }
      else if(infoEdu == 1019){
        res = "On libère le corner Red/Green";
      }
      else if(infoEdu == 1020){
        res = "On libère le corner Green/Orange";
      }
      else if(infoEdu == 1021){
        res = "On libère le corner Orange/Blue";
      }
      else if(infoEdu == 1022){
        res = "On libère l'arrête Blue/Red";
      }
      else if(infoEdu == 1023){
        res = "On libère l'arrête Red/Green";
      }
      else if(infoEdu == 1024){
        res = "On libère l'arrête Green/Orange";
      }
      else if(infoEdu == 1025){
        res = "On libère l'arrête Orange/Blue";
      }
      else if(infoEdu == 1026){
        res = "On bouge le corner Blue/Red";
      }
      else if(infoEdu == 1027){
        res = "On bouge le corner Red/Green";
      }
      else if(infoEdu == 1028){
        res = "On bouge le corner Green/Orange";
      }
      else if(infoEdu == 1029){
        res = "On bouge le corner Orange/Blue";
      }
    }
    else if(infoEdu < 1200){
      int n = infoEdu % 1100;
      sprintf(res,"OLL n°%i", n);

    }
    else{
      if(infoEdu == 1222){
        res = "Positionnement pour PLL";
      }
      else{
        int n = infoEdu % 1200;
        sprintf(res,"PLL n°%i", n);
      }
    }

  }
  //printf("%s\n",res );
  return res;
}

char* switchRotationMultiple(char* rotationMachine, char* rotationUser, int face, struct res* solution, int infoEdu,int lenMachine,int lenUser){

  char *res = malloc(sizeof(char) * lenMachine);


  int color1 = face/10;
  int color2 = face%10;

  solution -> face[solution -> lenFace] = face;
  solution -> info[solution -> lenFace] = infoEdu;

  solution -> lenPerAlgo[solution -> lenFace] = lenUser;
  solution -> lenFace += 1;


  for(int i = 0; i < lenUser; i ++ ){
    solution -> resUser[solution -> lenResUser] = rotationUser[i];
    solution -> lenResUser += 1;
  }

  for (int i = 0; i < lenMachine; i++) {
    res[i] = translateRotation(rotationMachine[i],color1,color2);
  }
  return res;

}

char* switchRotationPLL3(int face,struct res* solution, int infoEdu){

  char user[16] = "uMMuMMuMUUMMUUMu";
  char trad1[20] = "dRRLLuRRLLdRlFFRRLLB"; //BRld";
  char trad2[20] = "dFFBBuFFBBdFbLLFFBBR"; //RFbd";

  solution -> face[solution -> lenFace] = face;
  solution -> info[solution -> lenFace] = infoEdu;

  solution -> lenPerAlgo[solution -> lenFace] = 16;
  solution -> lenFace += 1;

  for(int i = 0; i < 16; i ++ ){
    solution -> resUser[solution -> lenResUser] = user[i];
    solution -> lenResUser += 1;
  }

  char *res = malloc(sizeof(char) * 20);

  if(face == 51){
    for(int i = 0;i<20;i++) res[i] = trad1[i];
    return res;
  }else if(face == 53){
    for(int i = 0;i<20;i++) res[i] = trad2[i];
    return res;
  }else{
    errx(1,"Switch rotation pll 3 wrong face");
  }

}

char* switchRotationPLL32(int face){

  char trad1[4] = "BRld";
  char trad2[4] = "RFbd";

  char *res = malloc(sizeof(char) * 4);

  if(face == 51){
    for(int i = 0;i<4;i++) res[i] = trad1[i];
    return res;
  }else if(face == 53){
    for(int i = 0;i<4;i++) res[i] = trad2[i];
    return res;
  }else{
    errx(1,"Switch rotation pll 3 wrong face");
  }

}
