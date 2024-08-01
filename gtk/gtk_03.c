#include <gtk/gtk.h>

void hello (GtkWidget *widget, void *data)
{
    g_print ("Hello World\n");
}

int main (int argc, char *argv [])
{
    GtkWidget *window;
    GtkWidget *button;

    gtk_init (&argc, &argv);

    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);

    gtk_container_set_border_width (GTK_CONTAINER (window), 10);

    button = gtk_button_new_with_label ("Press Me");
    g_signal_connect (button, "clicked", G_CALLBACK (hello), NULL);

    gtk_container_add (GTK_CONTAINER (window), button);

    gtk_widget_show_all (window);
    
    gtk_main ();

    return 0;
}