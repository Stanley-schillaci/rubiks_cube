#ifndef RUBIKTOOLS_H
#define RUBIKSTOOLS_H

void printRubik(struct pixel* rubik);
void printCube(struct pixel* rubik);

void printWhiteCross(struct pixel* rubik);

void executeAlgo(struct pixel* rubik,struct res* solution,char* algo,int len);

void readConsole(struct pixel* rubik);

char* rubikScramble(int mouvement);

int randomRange(int maxRange);
void testRand(int iteration);

int verifPosition(struct pixel* rubik,int pos);

int verifRubik(struct pixel* rubik);

void printMisstakeRubik(struct pixel* rubik);

void printSolutionProgamme(struct res* solution);

void printSolutionUser2(struct res* solution);
void printSolutionUser(struct res* solution);

void copyRubik(struct pixel* rubik,struct pixel* rubik2);

void copySolution(struct res* solution,struct res* solution2);

char* intToStringFace(int face);

void clearSolution(struct res* solution);

void executeSolution(struct pixel* rubik, struct res* solution);

void infoCube(struct pixel* rubik);
void infoSolution(struct res* solution);
void gigaClearSolution(struct res* solution);
void rewriteSolution(struct res* solution,struct res* correct);

#endif
