#include <gtk/gtk.h>
#include <stdio.h>

static void increment (GtkWidget *widget, void *data);

int main (int argc, char *argv [])
{
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *box;
    GtkWidget *label;

    gtk_init (&argc, &argv);

    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title (GTK_WINDOW (window), "My Title");
    gtk_window_set_default_size (GTK_WINDOW (window), 800, 600);
    gtk_window_set_position (GTK_WINDOW (window), GTK_WIN_POS_CENTER);
    g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);

    label = gtk_label_new ("0");

    button = gtk_button_new_with_label ("Click Me");
    gtk_widget_set_tooltip_text (button, "Press to show something");
    g_signal_connect (button, "clicked", G_CALLBACK (increment), label);


    box = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 10);
    gtk_container_add (GTK_CONTAINER (box), button);
    gtk_container_add (GTK_CONTAINER (box), label);
    gtk_container_add (GTK_CONTAINER (window), box);


    gtk_widget_show_all (window);

    gtk_main ();

    return 0;
}

static void increment (GtkWidget *widget, void *data)
{
    char buffer [30] = {0};
    static int count = 0;
    count++;

    snprintf (buffer, 29, "%d", count);
    gtk_label_set_text (GTK_LABEL (data), buffer);
}