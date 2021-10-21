#ifndef SOLUTION_H
#define SOLUTION_H

struct res{
  int lenResProgram;
  int lenResUser;
  int lenFace;

  char* resProgram;
  char* resUser;
  int* face;

  int* lenPerAlgo;
  int * info;
};

struct res* Solution();
#endif
