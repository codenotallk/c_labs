#include <gtk/gtk.h>

int main (int argc, char *argv [])
{
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *align;

    gtk_init (&argc, &argv);

    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title (GTK_WINDOW (window), "My Title");
    gtk_window_set_default_size (GTK_WINDOW (window), 800, 600);
    gtk_window_set_position (GTK_WINDOW (window), GTK_WIN_POS_CENTER);
    g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);

    button = gtk_button_new_with_label ("Click Me");
    gtk_widget_set_tooltip_text (button, "Press to show something");
    g_signal_connect (button, "clicked", G_CALLBACK (gtk_main_quit), NULL);

    align = gtk_alignment_new (0, 0, 0, 0);
    gtk_container_add (GTK_CONTAINER (align), button);
    gtk_container_add (GTK_CONTAINER (window), align);

    gtk_widget_show_all (window);

    gtk_main ();

    return 0;
}