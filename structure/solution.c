#include <stdio.h>
#include <stdlib.h>

typedef struct res{
  int lenResProgram;
  int lenResUser;
  int lenFace;

  char* resProgram;
  char* resUser;
  int* face;

  int* lenPerAlgo;
  int* info;



} res ;

struct res* Solution()
{

  res* solution = malloc(sizeof(res));

  solution -> lenResProgram = 0;
  solution -> lenResUser = 0;
  solution -> lenFace = 0; //nb step

  solution -> resProgram = malloc(sizeof(char) * 400);
  solution -> resUser = malloc(sizeof(char) * 400);
  solution -> face = malloc(sizeof(int) * 100);

  solution -> lenPerAlgo = malloc(sizeof(int) * 100); //len of each step
  solution -> info = malloc(sizeof(int) * 100); //len of each step


  return solution;
}
