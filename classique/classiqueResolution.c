#include "../structure/rubik.h"
#include "../structure/solution.h"
#include "../structure/rotation.h"
#include "../structure/rubikTools.h"
#include "../structure/switchRotation.h"
#include "whiteFace.h"
#include "secondLayer.h"
#include "thirdLayer.h"
#include <stdio.h>
#include <stdlib.h>
#include <err.h>

void easyClassic(struct pixel* rubik,struct res* solution){ // Print is commented but structured
    // printf("START OF THE CLASSIC\n");

    createWhiteCross(rubik,solution);
    // printCube(rubik);
    addWhiteCorner(rubik,solution);
    // printf("START OF THE createWhiteCross\n");
    createWhiteCross(rubik,solution); // START OF THE WhiteCross
    // printCube(rubik);

    // printf("START OF THE addWhiteCorner\n");
    addWhiteCorner(rubik,solution); // START OF THE WhiteCorner
    // printCube(rubik);

    // printf("START OF THE mainLayer2\n");
    mainLayer2(rubik,solution); // STRART OF THE RESOLUTION OF THE 2 LAYERS
    // printCube(rubik);

    /* if(!((rubik[24].cube == 11 && rubik[24].color == 1) // TESTING 2LAYER
            && (rubik[21].cube == 9 && rubik[21].color == 3)
            && (rubik[30].cube == 15 && rubik[30].color == 4)
            && (rubik[27].cube == 13 && rubik[27].color == 2) )){
                            printCube(rubik);
                          } */

    //printf("START OF THE Xyellow\n");
    Xyellow(rubik,solution); // START OF THE Xyellow
    //printCube(rubik);

    /* if( (rubik[46].color != 5 ) // TESTING X YELLOW
                          || (rubik[48].color != 5 )
                          || (rubik[50].color != 5 )
                          || (rubik[52].color != 5 )){
                            printCube(rubik);
                          } */
    //printf("START OF THE centerLayer3\n");
    centerLayer3(rubik,solution); // START OF THE centerLayer3
    // printCube(rubik);

    /* if ((rubik[34].color != 3 ) // TESTING CENTER YELLOW
                          || (rubik[37].color != 1 )
                          || (rubik[40].color != 2 )
                          || (rubik[43].color != 4 )){
                            printCube(rubik);
                          } */
    // printf("START OF THE cornerLayer3\n");
    cornerLayer3(rubik,solution); // START OF THE PLACEMENT OF corner Layer3
    // printCube(rubik);
    /* if ((rubik[45].cube != 19 ) // TESTING CORNER YELLOW
                          || (rubik[47].cube != 21 )
                          || (rubik[53].cube != 23 )
                          || (rubik[51].cube != 17 )){
                            printf("ERROR ==> RUBIK -->\n");
                            printCube(rubik);
                          } */
    // printf("START OF THE endLayer3\n");
    endLayer3( rubik,solution); // START OF THE ORIENTATION OF Layer3
    // printCube(rubik);
    /* if ((rubik[45].color != 5 ) // TESTING END YELLOW [COLOR]
                          || (rubik[47].color != 5 )
                          || (rubik[53].color != 5 )
                          || (rubik[51].color != 5 )

                          || (rubik[45].cube != 19 ) // TESTING END YELLOW [CUBE]
                          || (rubik[47].cube != 21 )
                          || (rubik[53].cube != 23 )
                          || (rubik[51].cube != 17 )){
                            printf("ERROR ==> RUBIK -->\n");
                            printCube(rubik);
                          } */
    /* if(!verifRubik(rubik)){
      printCube(rubik);
    } */
    // printf("fin\n");
    // printCube(rubik);
}
