#ifndef SWITCH_ROTATION_H
#define SWITCH_ROTATION_H

char translateRotation(char rotation, int color1, int color2);
char* switchRotation(char* rotation, int face,struct res* solution, int infoEdu,int len);
char* switchRotationMultiple(char* rotationMachine, char* rotationUser, int face, struct res* solution, int infoEdu,int lenMachine,int lenUser);
char* switchRotationPLL3(int face,struct res* solution, int infoEdu);
char* switchRotationPLL32(int face);
char* infoEdu_ToString(int infoEdu);

#endif
