#include "structure/rubik.h"
#include "structure/solution.h"
#include "structure/rotation.h"
#include "structure/rubikTools.h"
#include "structure/switchRotation.h"
#include "structure/cube.h"
#include "classique/whiteFace.h"
#include "classique/secondLayer.h"
#include "classique/thirdLayer.h"
#include "classique/classiqueResolution.h"
#include "fridrich/whiteCross.h"
#include "fridrich/firstTwoLayer.h"
#include "fridrich/orientationLastLayer.h"
#include "fridrich/permutationLastLayer.h"
#include "fridrich/fridrich.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include "ToMachine.h"

/*
const int WHITE  = 0;
const int YELLOW = 5;
const int GREEN  = 1;
const int BLUE   = 4;
const int RED    = 2;
const int ORANGE = 3;
*/
int port;
int ActualPixel = 0;
GtkBuilder *builder;
int my_color = 0;
char lenStepmax[50];
int cStepmax = 1;
char cStep[50];
int currentStep = 1;
int currentres = 0;
char** fileimageres;

typedef struct pack{
  struct res * solution;
  struct pixel * rubik;
} pack;

struct pack * initpack()
{
  struct pack * package = malloc(sizeof(struct res) + sizeof(struct pixel) * 54);
  package->solution = Solution();
  package->rubik = Rubik();
  gigaClearSolution(package->solution);
  return package;
}
void RedColor() {
  my_color = 2;
}
void YellowColor() {
  my_color = 5;
}
void WhiteColor() {
  my_color = 0;
}
void GreenColor() {
  my_color = 1;
}
void OrangeColor() {
  my_color = 3;
}
void BlueColor() {
  my_color = 4;
}
GtkWidget* TextFromInt(int p)
{
  switch (p) {
    case 0:
      return gtk_image_new_from_file("image/whiteimg.png");
      break;
    case 1:
      return gtk_image_new_from_file("image/greenimg.png");
      break;
    case 2:
      return gtk_image_new_from_file("image/redimg.png");
      break;
    case 3:
      return gtk_image_new_from_file("image/orangeimg.png");
      break;
    case 4:
      return gtk_image_new_from_file("image/blueimg.png");
      break;
    case 5:
      return gtk_image_new_from_file("image/yellowimg.png");
      break;
  }
  return 0;
}
void ChangeColor(GtkWidget *button, struct pack* package)
{

  switch (my_color) {
    case 0:
      gtk_button_set_image(GTK_BUTTON(button), gtk_image_new_from_file("image/whiteimg.png"));
      break;
    case 1:
      gtk_button_set_image(GTK_BUTTON(button), gtk_image_new_from_file("image/greenimg.png"));
      break;
    case 2:
      gtk_button_set_image(GTK_BUTTON(button), gtk_image_new_from_file("image/redimg.png"));
      break;
    case 3:
      gtk_button_set_image(GTK_BUTTON(button), gtk_image_new_from_file("image/orangeimg.png"));
      break;
    case 4:
      gtk_button_set_image(GTK_BUTTON(button), gtk_image_new_from_file("image/blueimg.png"));
      break;
    case 5:
      gtk_button_set_image(GTK_BUTTON(button), gtk_image_new_from_file("image/yellowimg.png"));
      break;
  }
  package->rubik[ActualPixel].color = my_color;
}
void ChangePixel(GtkWidget *button, int *Apixel)
{
    ActualPixel = *Apixel;
    gtk_button_set_label(GTK_BUTTON(button), "");
}
void renameButon(struct pixel* rubik)
{
  GtkWidget* Button[54];
  char widget[50];
  for (int i = 0; i < 54; i++) {
    sprintf(widget, "%d", i);
    Button[i] = GTK_WIDGET (gtk_builder_get_object(builder,widget));
    gtk_button_set_image(GTK_BUTTON(Button[i]), TextFromInt(rubik[i].color));
  }
}
void BrotationF(GtkWidget *button, struct pack* package)
{
    rotationF(package->rubik);
    gtk_button_set_label(GTK_BUTTON(button), "F");
    renameButon(package->rubik);
}
void BrotationR(GtkWidget *button, struct pack* package)
{
    rotationR(package->rubik);
    gtk_button_set_label(GTK_BUTTON(button), "R");
    renameButon(package->rubik);
}
void BrotationU(GtkWidget *button, struct pack* package)
{
    rotationU(package->rubik);
    gtk_button_set_label(GTK_BUTTON(button), "U");
    renameButon(package->rubik);
}
void BrotationB(GtkWidget *button, struct pack* package)
{
    rotationB(package->rubik);
    gtk_button_set_label(GTK_BUTTON(button), "B");
    renameButon(package->rubik);
}
void BrotationL(GtkWidget *button, struct pack* package)
{
    rotationL(package->rubik);
    gtk_button_set_label(GTK_BUTTON(button), "L");
    renameButon(package->rubik);
}
void BrotationD(GtkWidget *button, struct pack* package)
{
    rotationD(package->rubik);
    gtk_button_set_label(GTK_BUTTON(button), "D");
    renameButon(package->rubik);
}
void BrotationFi(GtkWidget *button, struct pack* package)
{
    rotationFi(package->rubik);
    gtk_button_set_label(GTK_BUTTON(button), "F'");
    renameButon(package->rubik);
}
void BrotationRi(GtkWidget *button, struct pack* package)
{
    rotationRi(package->rubik);
    gtk_button_set_label(GTK_BUTTON(button), "R'");
    renameButon(package->rubik);
}
void BrotationUi(GtkWidget *button, struct pack* package)
{
    rotationUi(package->rubik);
    gtk_button_set_label(GTK_BUTTON(button), "U'");
    renameButon(package->rubik);
}
void BrotationBi(GtkWidget *button, struct pack* package)
{
    rotationBi(package->rubik);
    gtk_button_set_label(GTK_BUTTON(button), "B'");
    renameButon(package->rubik);
}
void BrotationLi(GtkWidget *button, struct pack* package)
{
    rotationLi(package->rubik);
    gtk_button_set_label(GTK_BUTTON(button), "L'");
    renameButon(package->rubik);
}
void BrotationDi(GtkWidget *button, struct pack* package)
{
    rotationDi(package->rubik);
    gtk_button_set_label(GTK_BUTTON(button), "D'");
    renameButon(package->rubik);
}
void FacetoImg(int face)
{
  GtkWidget *topimg= GTK_WIDGET (gtk_builder_get_object(builder,"imgface1"));
  GtkWidget *faceimg = GTK_WIDGET (gtk_builder_get_object(builder,"imgface2"));
  int nb = face/10;
  switch (nb) {
    case 0:
      gtk_image_set_from_file(GTK_IMAGE(topimg),"image/whiteimg.png");
      break;
    case 1:
      gtk_image_set_from_file(GTK_IMAGE(topimg),"image/greenimg.png");
      break;
    case 2:
      gtk_image_set_from_file(GTK_IMAGE(topimg),"image/redimg.png");
      break;
    case 3:
      gtk_image_set_from_file(GTK_IMAGE(topimg),"image/orangeimg.png");
      break;
    case 4:
      gtk_image_set_from_file(GTK_IMAGE(topimg),"image/blueimg.png");
      break;
    case 5:
      gtk_image_set_from_file(GTK_IMAGE(topimg),"image/yellowimg.png");
      break;
  }
  nb = face % 10;
  switch (nb) {
    case 0:
      gtk_image_set_from_file(GTK_IMAGE(faceimg),"image/whiteimg.png");
      break;
    case 1:
      gtk_image_set_from_file(GTK_IMAGE(faceimg),"image/greenimg.png");
      break;
    case 2:
      gtk_image_set_from_file(GTK_IMAGE(faceimg),"image/redimg.png");
      break;
    case 3:
      gtk_image_set_from_file(GTK_IMAGE(faceimg),"image/orangeimg.png");
      break;
    case 4:
      gtk_image_set_from_file(GTK_IMAGE(faceimg),"image/blueimg.png");
      break;
    case 5:
      gtk_image_set_from_file(GTK_IMAGE(faceimg),"image/yellowimg.png");
      break;
  }
}
void afficheStep(struct pack* package)
{
  GtkWidget* Image[15];

  Image[0] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres1"));
  Image[1] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres2"));
  Image[2] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres3"));
  Image[3] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres4"));
  Image[4] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres5"));
  Image[5] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres6"));
  Image[6] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres7"));
  Image[7] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres8"));
  Image[8] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres9"));
  Image[9] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres10"));
  Image[10] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres11"));
  Image[11] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres12"));
  Image[12] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres13"));
  Image[13] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres14"));
  Image[14] = GTK_WIDGET (gtk_builder_get_object(builder,"imageres15"));
  GtkWidget *Outil = GTK_WIDGET (gtk_builder_get_object(builder,"outiltext"));
  gtk_label_set_text(GTK_LABEL(Outil), infoEdu_ToString(package->solution->info[currentStep - 1]));
  int reste = (15 - package->solution->lenPerAlgo[currentStep - 1])/2;
  int res = currentres + package->solution->lenPerAlgo[currentStep - 1];
  FacetoImg(package->solution->face[currentStep - 1]);
  for (size_t i = 0; i < 15; i++) {
    if (reste > 0) {
      gtk_image_set_from_file(GTK_IMAGE(Image[i]),"image/nothing.png");
      reste -= 1;
    }else if (currentres < res){
      gtk_image_set_from_file(GTK_IMAGE(Image[i]),fileimageres[currentres]);
      currentres += 1;
    }else{
      gtk_image_set_from_file(GTK_IMAGE(Image[i]),"image/nothing.png");
    }
  }
}
void prevres(GtkWidget *button,struct pack* package)
{
  gtk_button_set_label(GTK_BUTTON(button), "Prev");
  if(currentStep > 1)
  {
    currentStep -= 1;
    currentres = currentres - package->solution->lenPerAlgo[currentStep] - package->solution->lenPerAlgo[currentStep-1];
    afficheStep(package);
  }
  GtkWidget *Textcurrentres = GTK_WIDGET (gtk_builder_get_object(builder,"currentres"));
  sprintf(cStep, "%d", currentStep);
  gtk_label_set_text(GTK_LABEL(Textcurrentres), cStep);
}
void nextres(GtkWidget *button,struct pack* package)
{
  gtk_button_set_label(GTK_BUTTON(button), "Next");
  if(currentStep < cStepmax)
  {
    currentStep += 1;
    afficheStep(package);
  }
  GtkWidget *Textcurrentres = GTK_WIDGET (gtk_builder_get_object(builder,"currentres"));
  sprintf(cStep, "%d", currentStep);
  gtk_label_set_text(GTK_LABEL(Textcurrentres), cStep);
}
void BuildImageRes(struct res* sol)
{
  for (int i = 0; i < sol->lenResUser; i++) {
    switch (sol->resUser[i]) {
      case 'R':
        fileimageres[i] = "image/R.png";
        break;
      case 'r':
        fileimageres[i] = "image/Ri.png";
        break;
      case 'L':
        fileimageres[i] = "image/L.png";
        break;
      case 'l':
        fileimageres[i] = "image/Li.png";
        break;
      case 'B':
        fileimageres[i] = "image/B.png";
        break;
      case 'b':
        fileimageres[i] = "image/Bi.png";
        break;
      case 'D':
        fileimageres[i] = "image/D.png";
        break;
      case 'd':
        fileimageres[i] = "image/Di.png";
        break;
      case 'F':
        fileimageres[i] = "image/F.png";
        break;
      case 'f':
        fileimageres[i] = "image/Fi.png";
        break;
      case 'U':
        fileimageres[i] = "image/U.png";
        break;
      case 'u':
        fileimageres[i] = "image/Ui.png";
        break;
      case 'M':
        fileimageres[i] = "image/M.png";
        break;
      case 'm':
        fileimageres[i] = "image/Mi.png";
        break;
      case 'C':
        fileimageres[i] = "image/pD.png";
        break;
      case 'c':
        fileimageres[i] = "image/pDi.png";
        break;
      case 'K':
        fileimageres[i] = "image/pL.png";
        break;
      case 'k':
        fileimageres[i] = "image/pLi.png";
        break;
      case 'T':
        fileimageres[i] = "image/pU.png";
        break;
      case 't':
        fileimageres[i] = "image/pUi.png";
        break;
      case 'Q':
        fileimageres[i] = "image/pR.png";
        break;
      case 'q':
        fileimageres[i] = "image/pRi.png";
        break;
      case 'X':
        fileimageres[i] = "image/Ximg.png";
        break;
      case 'x':
        fileimageres[i] = "image/Xiimg.png";
        break;
      case 'Y':
        fileimageres[i] = "image/Yimg.png";
        break;
      case 'y':
        fileimageres[i] = "image/Yiimg.png";
        break;
      case 'Z':
        fileimageres[i] = "image/Zimg.png";
        break;
      case 'z':
        fileimageres[i] = "image/Ziimg.png";
        break;
      default:
        fileimageres[i] = "";
        break;
    }
  }
}
int test_cube(struct pixel* rubik)
{
  int res = 0;
  int i = 0;
  while (res == 0 && i < 53) {
    int C[6] = {0,0,0,0,0,0};
    C[rubik[i].color] += 1;
    if (C[rubik[i].color] > 6) {
      res = 1;
    }
    i++;
  }
  int C[25];
  for (size_t i = 0; i < 25; i++) {
    C[i] = 0;
  }
  if (res == 0) {
    int *cube = malloc(sizeof(int)*4);
    cube = CornerCube(rubik[0].color,rubik[9].color,rubik[20].color);
    C[cube[0]] += 1;
    rubik[0].correct = cube[1];
    rubik[9].correct = cube[2];
    rubik[20].correct = cube[3];
    rubik[0].cube = cube[0];
    rubik[9].cube = cube[0];
    rubik[20].cube = cube[0];
    cube = BorderCube(rubik[1].color,rubik[19].color); C[cube[0]] += 1; rubik[1].correct = cube[1]; rubik[19].correct = cube[2];
    rubik[1].cube = cube[0]; rubik[19].cube = cube[0];
    cube = CornerCube(rubik[2].color,rubik[17].color,rubik[18].color); C[cube[0]] += 1; rubik[2].correct = cube[1]; rubik[17].correct = cube[2]; rubik[18].correct = cube[3];
    rubik[2].cube = cube[0]; rubik[17].cube = cube[0]; rubik[18].cube = cube[0];
    cube = BorderCube(rubik[3].color,rubik[10].color); C[cube[0]] += 1; rubik[3].correct = cube[1]; rubik[10].correct = cube[2];
    rubik[3].cube = cube[0]; rubik[10].cube = cube[0];
    cube = BorderCube(rubik[5].color,rubik[16].color); C[cube[0]] += 1; rubik[5].correct = cube[1]; rubik[16].correct = cube[2];
    rubik[5].cube = cube[0]; rubik[16].cube = cube[0];
    cube = CornerCube(rubik[6].color,rubik[11].color,rubik[12].color); C[cube[0]] += 1; rubik[6].correct = cube[1]; rubik[11].correct = cube[2]; rubik[12].correct = cube[3];
    rubik[6].cube = cube[0]; rubik[11].cube = cube[0]; rubik[12].cube = cube[0];
    cube = BorderCube(rubik[7].color,rubik[13].color); C[cube[0]] += 1; rubik[7].correct = cube[1]; rubik[13].correct = cube[2];
    rubik[7].cube = cube[0]; rubik[13].cube = cube[0];
    cube = CornerCube(rubik[8].color,rubik[14].color,rubik[15].color); C[cube[0]] += 1; rubik[8].correct = cube[1]; rubik[14].correct = cube[2]; rubik[15].correct = cube[3];
    rubik[8].cube = cube[0]; rubik[14].cube = cube[0]; rubik[15].cube = cube[0];
    cube = BorderCube(rubik[21].color,rubik[32].color); C[cube[0]] += 1; rubik[21].correct = cube[1]; rubik[32].correct = cube[2];
    rubik[21].cube = cube[0]; rubik[32].cube = cube[0];
    cube = BorderCube(rubik[23].color,rubik[24].color); C[cube[0]] += 1; rubik[23].correct = cube[1]; rubik[24].correct = cube[2];
    rubik[23].cube = cube[0]; rubik[24].cube = cube[0];
    cube = BorderCube(rubik[26].color,rubik[27].color); C[cube[0]] += 1; rubik[26].correct = cube[1]; rubik[27].correct = cube[2];
    rubik[26].cube = cube[0]; rubik[27].cube = cube[0];
    cube = BorderCube(rubik[29].color,rubik[30].color); C[cube[0]] += 1; rubik[29].correct = cube[1]; rubik[30].correct = cube[2];
    rubik[29].cube = cube[0]; rubik[30].cube = cube[0];
    cube = CornerCube(rubik[33].color,rubik[44].color,rubik[51].color); C[cube[0]] += 1; rubik[34].correct = cube[1]; rubik[44].correct = cube[2]; rubik[51].correct = cube[3];
    rubik[34].cube = cube[0]; rubik[44].cube = cube[0]; rubik[51].cube = cube[0];
    cube = BorderCube(rubik[34].color,rubik[48].color); C[cube[0]] += 1; rubik[34].correct = cube[1]; rubik[48].correct = cube[2];
    rubik[34].cube = cube[0]; rubik[48].cube = cube[0];
    cube = CornerCube(rubik[35].color,rubik[36].color,rubik[45].color); C[cube[0]] += 1; rubik[35].correct = cube[1]; rubik[36].correct = cube[2]; rubik[45].correct = cube[3];
    rubik[35].cube = cube[0]; rubik[36].cube = cube[0]; rubik[45].cube = cube[0];
    cube = BorderCube(rubik[37].color,rubik[46].color); C[cube[0]] += 1; rubik[37].correct = cube[1]; rubik[46].correct = cube[2];
    rubik[37].cube = cube[0]; rubik[46].cube = cube[0];
    cube = CornerCube(rubik[38].color,rubik[39].color,rubik[47].color); C[cube[0]] += 1; rubik[38].correct = cube[1]; rubik[39].correct = cube[2]; rubik[47].correct = cube[3];
    rubik[38].cube = cube[0]; rubik[39].cube = cube[0]; rubik[47].cube = cube[0];
    cube = BorderCube(rubik[40].color,rubik[50].color); C[cube[0]] += 1; rubik[40].correct = cube[1]; rubik[50].correct = cube[2];
    rubik[40].cube = cube[0]; rubik[50].cube = cube[0];
    cube = CornerCube(rubik[41].color,rubik[42].color,rubik[53].color); C[cube[0]] += 1; rubik[41].correct = cube[1]; rubik[42].correct = cube[2]; rubik[53].correct = cube[3];
    rubik[41].cube = cube[0]; rubik[42].cube = cube[0]; rubik[53].cube = cube[0];
    cube = BorderCube(rubik[43].color,rubik[52].color); C[cube[0]] += 1; rubik[43].correct = cube[1]; rubik[52].correct = cube[2];
    rubik[43].cube = cube[0]; rubik[52].cube = cube[0];
  }
  i = 0;
  while (i < 25 && res == 0) {
    if (C[i] > 1) {
      res = 2;
    }
    i+=1;
  }
  return res;
}
void Resolvecube(GtkWidget *button, struct pack* package)
{
  gtk_button_set_label(GTK_BUTTON(button), "Loading");
  GtkWidget *Textlenres = GTK_WIDGET (gtk_builder_get_object(builder,"lenres"));
  GtkWidget *Textcurrentres = GTK_WIDGET (gtk_builder_get_object(builder,"currentres"));
  GtkWidget *Rotlabel = GTK_WIDGET (gtk_builder_get_object(builder,"rot"));
  GtkWidget *NbRotlabel = GTK_WIDGET (gtk_builder_get_object(builder,"nbrot"));
  GtkWidget *GSwitch = GTK_WIDGET (gtk_builder_get_object(builder,"switch"));
  GtkWidget *GSwitch2 = GTK_WIDGET (gtk_builder_get_object(builder,"switch2"));
  GtkWidget *Myerror = GTK_WIDGET (gtk_builder_get_object(builder,"erreur"));

  gigaClearSolution(package->solution);
  int check = test_cube(package->rubik);


  int* tab = malloc(sizeof(int) * 54);
  for (int i = 0; i < 54; i++) tab[i] = 0;

  for (int i = 0; i < 54; i++) {
    tab[package -> rubik[i].correct] ++;
  }
  for (int i = 0; i < 54; i++) printf("%i",tab[i] );
  printf("\n" );

  for (int i = 0; i < 54; i++) {
    if(tab[i] != 1){
      printf("\nErreur pour le correct de %i",i );
    }
  }
  if(check == 0)
  {
    gtk_label_set_text(GTK_LABEL(Myerror), "");
    if(gtk_switch_get_active(GTK_SWITCH(GSwitch)))
    {
      if(gtk_switch_get_active(GTK_SWITCH(GSwitch2)))
      {
        bestColorFridrich(package->rubik,package->solution);
      }else{
        easyFridrich(package->rubik,package->solution,0);
      }
    }else{
      easyClassic(package->rubik,package->solution);
    }
  }else if(check == 1){
    gtk_label_set_text(GTK_LABEL(Myerror), "Erreur : Nombre couleur");
  }else if(check == 2){
    gtk_label_set_text(GTK_LABEL(Myerror), "Erreur : Cubes identique");
  }
  printCube(package->rubik);
  cStepmax = package->solution->lenFace;
  sprintf(lenStepmax, "%d", package->solution->lenFace);
  fileimageres = malloc(sizeof(char)*10*package->solution->lenResUser);
  BuildImageRes(package->solution);
  currentStep = 1;
  currentres = 0;
  printSolutionUser2(package->solution);
  gtk_label_set_text(GTK_LABEL(Textlenres), lenStepmax);
  gtk_label_set_text(GTK_LABEL(Textcurrentres), "1");
  afficheStep(package);
  char lenResUser[50];
  sprintf(lenResUser, "%d", package->solution->lenResUser);
  gtk_label_set_text(GTK_LABEL(NbRotlabel), lenResUser);
  gtk_label_set_text(GTK_LABEL(Rotlabel), "rotation");
  gtk_button_set_label(GTK_BUTTON(button), "Resolve");
  renameButon(package->rubik);
}
void Scramblecube(GtkWidget *button, struct pack* package)
{
  gtk_button_set_label(GTK_BUTTON(button), "Scramble");
  struct res *s = Solution();
  gigaClearSolution(s);
  char* scrambl = rubikScramble(10);
  executeAlgo(package->rubik,s,scrambl,10);
  printSolutionProgamme(s);
  renameButon(package->rubik);
  serialport_write(port, scrambl);
}
void Resetcube(GtkWidget *button, struct pack* package)
{
  package->rubik = Rubik();
  renameButon(package->rubik);
  gtk_button_set_label(GTK_BUTTON(button), "Reset");
}
void To_machine(GtkWidget *button,struct pack* package)
{
  serialport_write(port,package->solution->resProgram);
  gtk_button_set_label(GTK_BUTTON(button), "To machine");
}

int main (int argc, char *argv[]) {

  GtkWidget *MainWindow;

  gtk_init (&argc, &argv);

  builder = gtk_builder_new ();
  if (gtk_builder_add_from_file (builder, "logiciel.glade", NULL) == 0) {
    fprintf (stderr, "Erreur: ouverture du fichier GLADE\n") ;
    exit(EXIT_FAILURE);
  }

  struct pack * package = initpack();

  port = serialport_init("/dev/ttyACM0", 9600);

  MainWindow = GTK_WIDGET (gtk_builder_get_object (builder, "MainWindow"));
  //============================= init color =============================
  GtkSettings *defaultsetting = gtk_settings_get_default();
  g_object_set(defaultsetting,"gtk-button-images",TRUE,NULL);
  //======================================================================
  //====================== bouton selection couleur ======================
  GtkWidget *RedButton = GTK_WIDGET (gtk_builder_get_object(builder,"red"));
  GtkWidget *YellowButton = GTK_WIDGET (gtk_builder_get_object(builder,"yellow"));
  GtkWidget *WhiteButton = GTK_WIDGET (gtk_builder_get_object(builder,"white"));
  GtkWidget *BlueButton = GTK_WIDGET (gtk_builder_get_object(builder,"blue"));
  GtkWidget *OrangeButton = GTK_WIDGET (gtk_builder_get_object(builder,"orange"));
  GtkWidget *GreenButton = GTK_WIDGET (gtk_builder_get_object(builder,"green"));
  gtk_button_set_image(GTK_BUTTON(WhiteButton), gtk_image_new_from_file("image/whiteimg.png"));
  gtk_button_set_image(GTK_BUTTON(GreenButton), gtk_image_new_from_file("image/greenimg.png"));
  gtk_button_set_image(GTK_BUTTON(RedButton), gtk_image_new_from_file("image/redimg.png"));
  gtk_button_set_image(GTK_BUTTON(BlueButton), gtk_image_new_from_file("image/blueimg.png"));
  gtk_button_set_image(GTK_BUTTON(OrangeButton), gtk_image_new_from_file("image/orangeimg.png"));
  gtk_button_set_image(GTK_BUTTON(YellowButton), gtk_image_new_from_file("image/yellowimg.png"));
  //======================================================================

  //=========================== bouton package =============================
  GtkWidget* Button[54];
  int Int[54];
  char widget[50];
  for (int i = 0; i < 54; i++) {
    sprintf(widget, "%d", i);
    Int[i] = i;
    Button[i] = GTK_WIDGET (gtk_builder_get_object(builder,widget));
    gtk_button_set_label(GTK_BUTTON(Button[i]), "");
    if (i != 4 && i != 22 && i != 25 && i != 28 && i != 31 && i != 49) {
      g_signal_connect (Button[i], "clicked", G_CALLBACK (ChangePixel), &Int[i]);
      g_signal_connect (Button[i], "clicked", G_CALLBACK (ChangeColor), package);
    }
  }
  renameButon(package->rubik);
  //======================================================================

  //========================= bouton rotation ============================
  GtkWidget *bF = GTK_WIDGET (gtk_builder_get_object(builder,"F"));
  GtkWidget *bR = GTK_WIDGET (gtk_builder_get_object(builder,"R"));
  GtkWidget *bU = GTK_WIDGET (gtk_builder_get_object(builder,"U"));
  GtkWidget *bB = GTK_WIDGET (gtk_builder_get_object(builder,"B"));
  GtkWidget *bL = GTK_WIDGET (gtk_builder_get_object(builder,"L"));
  GtkWidget *bD = GTK_WIDGET (gtk_builder_get_object(builder,"D"));
  GtkWidget *bFi = GTK_WIDGET (gtk_builder_get_object(builder,"F'"));
  GtkWidget *bRi = GTK_WIDGET (gtk_builder_get_object(builder,"R'"));
  GtkWidget *bUi = GTK_WIDGET (gtk_builder_get_object(builder,"U'"));
  GtkWidget *bBi = GTK_WIDGET (gtk_builder_get_object(builder,"B'"));
  GtkWidget *bLi = GTK_WIDGET (gtk_builder_get_object(builder,"L'"));
  GtkWidget *bDi = GTK_WIDGET (gtk_builder_get_object(builder,"D'"));
  //======================================================================

  //======================== bouton résolution ===========================
  GtkWidget *Resolve = GTK_WIDGET (gtk_builder_get_object(builder,"resolve"));
  GtkWidget *Imageres1 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres1"));
  GtkWidget *Imageres2 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres2"));
  GtkWidget *Imageres3 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres3"));
  GtkWidget *Imageres4= GTK_WIDGET (gtk_builder_get_object(builder,"imageres4"));
  GtkWidget *Imageres5 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres5"));
  GtkWidget *Imageres6 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres6"));
  GtkWidget *Imageres7 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres7"));
  GtkWidget *Imageres8 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres8"));
  GtkWidget *Imageres9 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres9"));
  GtkWidget *Imageres10 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres10"));
  GtkWidget *Imageres11 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres11"));
  GtkWidget *Imageres12 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres12"));
  GtkWidget *Imageres13 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres13"));
  GtkWidget *Imageres14 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres14"));
  GtkWidget *Imageres15 = GTK_WIDGET (gtk_builder_get_object(builder,"imageres15"));
  GtkWidget *Next = GTK_WIDGET (gtk_builder_get_object(builder,"next"));
  GtkWidget *Prev = GTK_WIDGET (gtk_builder_get_object(builder,"prev"));
  GtkWidget *Scramble = GTK_WIDGET (gtk_builder_get_object(builder,"scramble"));
  GtkWidget *Reset = GTK_WIDGET (gtk_builder_get_object(builder,"reset"));
  GtkWidget *Machine = GTK_WIDGET (gtk_builder_get_object(builder,"machine"));
  //======================================================================

  //======================signaux bouton résolution ======================
  gtk_image_set_from_file(GTK_IMAGE(Imageres1),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres2),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres3),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres4),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres5),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres6),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres7),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres8),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres9),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres10),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres11),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres12),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres13),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres14),"image/nothing.png");
  gtk_image_set_from_file(GTK_IMAGE(Imageres15),"image/nothing.png");
  g_signal_connect (Resolve, "clicked", G_CALLBACK (Resolvecube), package);
  g_signal_connect (Prev, "clicked", G_CALLBACK (prevres), package);
  g_signal_connect (Next, "clicked", G_CALLBACK (nextres), package);
  g_signal_connect (Scramble, "clicked", G_CALLBACK (Scramblecube), package);
  g_signal_connect (Reset, "clicked", G_CALLBACK (Resetcube), package);
  g_signal_connect (Machine, "clicked", G_CALLBACK (To_machine), package);
  //======================================================================

  //================ signaux bouton selection couleur ====================
  g_signal_connect (RedButton, "clicked", G_CALLBACK (RedColor), NULL);
  g_signal_connect (YellowButton, "clicked", G_CALLBACK (YellowColor), NULL);
  g_signal_connect (WhiteButton, "clicked", G_CALLBACK (WhiteColor), NULL);
  g_signal_connect (BlueButton, "clicked", G_CALLBACK (BlueColor), NULL);
  g_signal_connect (OrangeButton, "clicked", G_CALLBACK (OrangeColor), NULL);
  g_signal_connect (GreenButton, "clicked", G_CALLBACK (GreenColor), NULL);
  //======================================================================

  //====================== signaux bouton rotation =======================
  g_signal_connect (bF, "clicked", G_CALLBACK (BrotationF), package);
  g_signal_connect (bR, "clicked", G_CALLBACK (BrotationR), package);
  g_signal_connect (bU, "clicked", G_CALLBACK (BrotationU), package);
  g_signal_connect (bB, "clicked", G_CALLBACK (BrotationB), package);
  g_signal_connect (bL, "clicked", G_CALLBACK (BrotationL), package);
  g_signal_connect (bD, "clicked", G_CALLBACK (BrotationD), package);
  g_signal_connect (bFi, "clicked", G_CALLBACK (BrotationFi), package);
  g_signal_connect (bRi, "clicked", G_CALLBACK (BrotationRi), package);
  g_signal_connect (bUi, "clicked", G_CALLBACK (BrotationUi), package);
  g_signal_connect (bBi, "clicked", G_CALLBACK (BrotationBi), package);
  g_signal_connect (bLi, "clicked", G_CALLBACK (BrotationLi), package);
  g_signal_connect (bDi, "clicked", G_CALLBACK (BrotationDi), package);
  //======================================================================

  gtk_builder_connect_signals (builder, NULL);
  gtk_widget_show (MainWindow);
  gtk_main ();
  g_object_unref (G_OBJECT (builder));

  return EXIT_SUCCESS;
}
