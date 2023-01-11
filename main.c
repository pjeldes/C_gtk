#include <app.h>
#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *button2;
    // conteiner
    GtkWidget *hbox;

    gtk_init(&argc, &argv);

    hbox = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 10);

    //pantalla
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Ventana de ejemplo");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);


    //botones
    button = gtk_button_new_with_label("Haz clic aquí");
    g_signal_connect(button, "clicked", G_CALLBACK(gtk_main_quit), NULL);
    //posicionar con pack
    gtk_box_pack_start(GTK_BOX (hbox), button, TRUE, TRUE, 0);

    button2 = gtk_button_new_with_label("otro boton");
    g_signal_connect(button2, "clicked", G_CALLBACK(gtk_main_quit), NULL);
    //posicionar con pack
    gtk_box_pack_start(GTK_BOX (hbox), button2, TRUE, TRUE, 0);

    
    gtk_container_add(GTK_CONTAINER (window), hbox);

    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}
