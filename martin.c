#include "structure/rubik.h"
#include "structure/solution.h"
#include "structure/rotation.h"
#include "structure/rubikTools.h"
#include "structure/switchRotation.h"
#include "classique/whiteFace.h"
#include "classique/secondLayer.h"
#include "classique/thirdLayer.h"
#include "classique/classiqueResolution.h"
#include <stdio.h>
#include <stdlib.h>
#include <err.h>

int main(){

  struct pixel* rubik = Rubik();
  struct res* scramble = Solution();
  struct res* solution = Solution();
  executeAlgo(rubik,scramble,rubikScramble(10), 10);
  easyClassic(rubik,solution);
  
  return 0;
}
