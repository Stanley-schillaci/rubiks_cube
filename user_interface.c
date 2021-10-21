#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "pixel_operations.h"
#include "filtre.h"
#include "Otsu.h"
#include "grayscale.h"
#include "segmentation.h"
#include "rotation.h"
#include "backprop.h"

typedef struct UserInterface
{
  GtkWindow* window;             // Main window
  GtkButton* open_button;        // Open button
  GtkButton* close_button;       // Close button
  GtkButton* median_button;      //Median button
  GtkButton* average_button;     //Average button
  GtkButton* end_button;         //End button
  GtkButton* no_filter_button;   //No filter Button

  SDL_Surface* image_surface;    //image we will apply ocr on
  GtkBuilder* builder;           //just to save the builder
  GtkWidget* file_dialog;        //widget to choose a file to open
  GtkWidget* image;              //the image gtk will display, it is the same that we will apply ocr on

} UserInterface;

// Signal handler for the "clicked" signal of the buttons.
void on_open(GtkButton *button,gpointer ui)
{
    UserInterface* i = ui;
    (void)button;
    GtkWidget* dialog = i->file_dialog;
    i->image = GTK_WIDGET(gtk_builder_get_object(i->builder,"image_print"));
    switch(gtk_dialog_run(GTK_DIALOG(dialog)))
      {
        case GTK_RESPONSE_ACCEPT:
          {
            gchar *filename = gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog));
            gtk_image_set_from_file(GTK_IMAGE(i->image),filename);
            gtk_widget_show(i->image);

            init_sdl();
            i->image_surface = load_image(filename);

            gtk_widget_set_visible(GTK_WIDGET(i->open_button),FALSE);
            gtk_widget_set_sensitive(GTK_WIDGET(i->open_button),FALSE);

            gtk_widget_set_visible(GTK_WIDGET(i->median_button),TRUE);
            gtk_widget_set_visible(GTK_WIDGET(i->average_button),TRUE);
            gtk_widget_set_visible(GTK_WIDGET(i->close_button),TRUE);
            gtk_widget_set_visible(GTK_WIDGET(i->no_filter_button),TRUE);

            gtk_widget_set_sensitive(GTK_WIDGET(i->close_button),TRUE);
            gtk_widget_set_sensitive(GTK_WIDGET(i->median_button),TRUE);
            gtk_widget_set_sensitive(GTK_WIDGET(i->average_button),TRUE);
            gtk_widget_set_sensitive(GTK_WIDGET(i->no_filter_button),TRUE);

            break;
          }
        default:
          {
            break;
          }
      }
    gtk_widget_hide(dialog);
}

void on_close(GtkButton *button,gpointer ui)
{
  UserInterface* i = ui;
  (void)button;

  gtk_widget_hide(i->image);
  SDL_FreeSurface(i->image_surface);

  gtk_widget_set_visible(GTK_WIDGET(i->median_button),FALSE);
  gtk_widget_set_visible(GTK_WIDGET(i->average_button),FALSE);
  gtk_widget_set_visible(GTK_WIDGET(i->close_button),FALSE);
  gtk_widget_set_visible(GTK_WIDGET(i->no_filter_button),FALSE);

  gtk_widget_set_sensitive(GTK_WIDGET(i->close_button),FALSE);
  gtk_widget_set_sensitive(GTK_WIDGET(i->median_button),FALSE);
  gtk_widget_set_sensitive(GTK_WIDGET(i->average_button),FALSE);
  gtk_widget_set_sensitive(GTK_WIDGET(i->no_filter_button),FALSE);

  gtk_widget_set_visible(GTK_WIDGET(i->open_button),TRUE);
  gtk_widget_set_sensitive(GTK_WIDGET(i->open_button),TRUE);
}

void complete_ocr(UserInterface* ui)
{
  gtk_widget_set_visible(GTK_WIDGET(ui->close_button),FALSE);
  gtk_widget_set_sensitive(GTK_WIDGET(ui->close_button),FALSE);

  unsigned long threshold = calc_threshold(ui ->image_surface);
  int* binary_matrix = otsu_bin(ui->image_surface,threshold);

  /*int taille_chaine =*/
  find_line(binary_matrix,(size_t)ui->image_surface->h,(size_t)ui->image_surface->w);
  free(binary_matrix);

  /*FILE* file_pointer = fopen("output_result.txt","r");
  char chaine[taille_chaine];
  fgets(chaine, taille_chaine, file_pointer);
  fclose(file_pointer);

  gchar* txt = chaine;
  GtkTextBuffer* text_buffer = gtk_text_buffer_new(NULL);
  gtk_text_buffer_set_text(text_buffer,txt,taille_chaine);
  GtkWidget* text_viewer = gtk_text_view_new_with_buffer(text_buffer);
  ui->image = text_viewer;
  gtk_widget_hide(ui->image);
  gtk_widget_show(text_viewer);*/

}

void no_filter(GtkButton *button, gpointer ui)
{
  UserInterface* i = ui;
  (void)button;

  grayscaling(i->image_surface);

  complete_ocr(i);

  gtk_widget_set_visible(GTK_WIDGET(i->median_button),FALSE);
  gtk_widget_set_visible(GTK_WIDGET(i->average_button),FALSE);

  gtk_widget_set_visible(GTK_WIDGET(i->no_filter_button),FALSE);
  gtk_widget_set_visible(GTK_WIDGET(i->end_button),TRUE);

  gtk_widget_set_sensitive(GTK_WIDGET(i->median_button),FALSE);
  gtk_widget_set_sensitive(GTK_WIDGET(i->average_button),FALSE);

  gtk_widget_set_sensitive(GTK_WIDGET(i->no_filter_button),FALSE);
  gtk_widget_set_sensitive(GTK_WIDGET(i->end_button),TRUE);
}

void on_median(GtkButton *button,gpointer ui)
{
  UserInterface* i = ui;
  (void)button;

  grayscaling(i->image_surface);
  median_filter(i->image_surface,i->image_surface);

  complete_ocr(i);

  gtk_widget_set_visible(GTK_WIDGET(i->median_button),FALSE);
  gtk_widget_set_visible(GTK_WIDGET(i->average_button),FALSE);

  gtk_widget_set_visible(GTK_WIDGET(i->no_filter_button),FALSE);
  gtk_widget_set_visible(GTK_WIDGET(i->end_button),TRUE);

  gtk_widget_set_sensitive(GTK_WIDGET(i->median_button),FALSE);
  gtk_widget_set_sensitive(GTK_WIDGET(i->average_button),FALSE);

  gtk_widget_set_sensitive(GTK_WIDGET(i->no_filter_button),FALSE);
  gtk_widget_set_sensitive(GTK_WIDGET(i->end_button),TRUE);
  }

void on_average(GtkButton *button,gpointer ui)
{
  UserInterface* i = ui;
  (void)button;

  grayscaling(i->image_surface);
  average_filter(i->image_surface,i->image_surface);

  complete_ocr(i);

  gtk_widget_set_visible(GTK_WIDGET(i->median_button),FALSE);
  gtk_widget_set_visible(GTK_WIDGET(i->average_button),FALSE);

  gtk_widget_set_visible(GTK_WIDGET(i->no_filter_button),FALSE);
  gtk_widget_set_visible(GTK_WIDGET(i->end_button),TRUE);

  gtk_widget_set_sensitive(GTK_WIDGET(i->median_button),FALSE);
  gtk_widget_set_sensitive(GTK_WIDGET(i->average_button),FALSE);

  gtk_widget_set_sensitive(GTK_WIDGET(i->no_filter_button),FALSE);
  gtk_widget_set_sensitive(GTK_WIDGET(i->end_button),TRUE);
}

// Main function.
int main()
{
    // Initializes GTK.
    gtk_init(NULL, NULL);
    Init_nn();

    // Loads the UI description and builds the UI.
    // (Exits if an error occurs.)
    GtkBuilder* builder = gtk_builder_new();
    GError* error = NULL;
    if (gtk_builder_add_from_file(builder, "user_interface.glade", &error) == 0)
    {
        g_printerr("Error loading file: %s\n", error->message);
        g_clear_error(&error);
        return 1;
    }

    // Gets the widgets.
    GtkWindow* window = GTK_WINDOW(gtk_builder_get_object(builder, "org.gtk.OCR"));

    GtkButton* open_button = GTK_BUTTON(gtk_builder_get_object(builder, "open_button"));
    GtkButton* close_button = GTK_BUTTON(gtk_builder_get_object(builder, "close_button"));
    GtkButton* median_button = GTK_BUTTON(gtk_builder_get_object(builder, "median_button"));
    GtkButton* average_button = GTK_BUTTON(gtk_builder_get_object(builder, "average_button"));
    GtkButton* no_filter_button = GTK_BUTTON(gtk_builder_get_object(builder, "no_filter_button"));

    GtkButton* end_button = GTK_BUTTON(gtk_builder_get_object(builder, "end_button"));

    GtkFileFilter* filter = gtk_file_filter_new();
    GtkWidget* file_dialog = gtk_file_chooser_dialog_new("Open image",window,GTK_FILE_CHOOSER_ACTION_OPEN,"Open",GTK_RESPONSE_ACCEPT,"Cancel",GTK_RESPONSE_CANCEL,NULL);

    gtk_file_filter_add_pixbuf_formats(filter);
    gtk_file_chooser_add_filter(GTK_FILE_CHOOSER(file_dialog),filter);


    UserInterface ui=
      {
       .window = window,
       .open_button = open_button,
       .close_button = close_button,
       .median_button = median_button,
       .average_button = average_button,
       .no_filter_button = no_filter_button,
       .end_button = end_button,
       .file_dialog = file_dialog,
       .builder = builder,
      };

    // Connects signal handlers.
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    g_signal_connect(open_button, "clicked", G_CALLBACK(on_open), &ui);
    g_signal_connect(close_button, "clicked", G_CALLBACK(on_close), &ui);
    g_signal_connect(median_button, "clicked", G_CALLBACK(on_median), &ui);
    g_signal_connect(average_button, "clicked", G_CALLBACK(on_average), &ui);
    g_signal_connect(no_filter_button, "clicked", G_CALLBACK(no_filter), &ui);
    g_signal_connect(end_button, "clicked", G_CALLBACK(gtk_main_quit), NULL);

    // Runs the main loop.
    gtk_main();

    // Exits.
    return 0;
}
