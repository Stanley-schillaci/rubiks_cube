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

int main () {

  GtkBuilder *builder;
  GtkWidget *MainWindow;

  gtk_init (NULL,NULL);

  builder = gtk_builder_new ();
  if (gtk_builder_add_from_file (builder, "logiciel.glade", NULL) == 0) {
    fprintf (stderr, "Erreur: ouverture du fichier GLADE\n") ;
    exit(EXIT_FAILURE);
  }
  MainWindow = GTK_WIDGET (gtk_builder_get_object (builder, "MainWindow"));

  struct pack * package = initpack();
  struct res *s = Solution();
  gigaClearSolution(s);
  char* scrambl = rubikScramble(10);
  executeAlgo(package->rubik,s,scrambl,10);

  easyFridrich(package->rubik,package->solution,0);
  infoSolution(package->solution);

  gtk_builder_connect_signals (builder, NULL);
  gtk_widget_show (MainWindow);
  gtk_main ();
  return EXIT_SUCCESS;
}
