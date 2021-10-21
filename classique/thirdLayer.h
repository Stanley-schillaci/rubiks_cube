#ifndef THIRDLAYER_H
#define THIRDLAYER_H

void Xrotation(struct pixel* rubik,struct res* solution, int face);

void Xyellow(struct pixel* rubik,struct res* solution);

void __centerLayer3(struct pixel* rubik,struct res* solution, int face);

void centerLayer3(struct pixel* rubik,struct res* solution);

void cornerLayer3(struct pixel* rubik,struct res* solution);

void endLayer3(struct pixel* rubik,struct res* solution);

#endif
