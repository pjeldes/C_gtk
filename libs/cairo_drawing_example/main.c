#include <gtk/gtk.h>
#include <math.h>

GtkWidget *window;
GtkWidget *layout;
GtkWidget *canvas;

GtkWidget   *image;
GtkWidget   *eventbox;

static gboolean on_window_draw (GtkWidget *da, GdkEventExpose *event, gpointer data)
{
    GdkWindow *window;
    GdkDrawingContext *drawingContext;
    cairo_region_t *cairoRegion;
    cairo_t *cr;

    cairoRegion = cairo_region_create();
    window = gtk_layout_get_bin_window(GTK_LAYOUT(layout)); 
    drawingContext = gdk_window_begin_draw_frame(window, cairoRegion);
    cr = gdk_drawing_context_get_cairo_context(drawingContext);

    cairo_set_line_width(cr, 9);  
    cairo_set_source_rgb(cr, 0.69, 0.19, 0);

    cairo_translate(cr, 300/2, 200/2);
    cairo_arc(cr, 0, 0, 50, 0, 2 * M_PI);
    cairo_stroke_preserve(cr);

    cairo_set_source_rgb(cr, 0.3, 0.4, 0.6); 
    cairo_fill(cr);

    gdk_window_end_draw_frame(window, drawingContext);
    cairo_region_destroy(cairoRegion);

    return FALSE;
}

int main ( int argc, char **argv) 
{   
    GtkWidget *button;

    gtk_init (&argc , &argv);
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_widget_set_size_request (window, 300, 200);
    g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit) , NULL);

    canvas = gtk_drawing_area_new ();
    layout = gtk_layout_new(NULL,NULL);
    gtk_container_add (GTK_CONTAINER (layout), canvas);
    gtk_container_add (GTK_CONTAINER (window), layout);

    button = gtk_button_new_with_label("I feel alone...");
    gtk_container_add(GTK_CONTAINER(layout), button);
    gtk_layout_move(GTK_LAYOUT(layout), button, 90, 50);
    g_signal_connect (canvas, "draw", (GCallback) on_window_draw, NULL);

    gtk_widget_show_all (window);
    gtk_main ();
    return 0;
}