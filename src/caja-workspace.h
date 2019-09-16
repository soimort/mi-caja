
void
caja_workspace_add_page (GtkNotebook *notebook,
               GtkWidget   *child,
               guint        page_num,
               gpointer     user_data) {
    printf(">>> page added: %lX %d\n", notebook, page_num); fflush(stdout);
}

void
caja_workspace_remove_page (GtkNotebook *notebook,
               GtkWidget   *child,
               guint        page_num,
               gpointer     user_data) {
    printf(">>> page removed: %lX %d\n", notebook, page_num); fflush(stdout);
}

void
caja_workspace_reorder_page (GtkNotebook *notebook,
               GtkWidget   *child,
               guint        page_num,
               gpointer     user_data) {
    printf(">>> page reordered: %lX %d\n", notebook, page_num); fflush(stdout);
}

void
caja_workspace_switch_page (GtkNotebook *notebook,
               GtkWidget   *page,
               guint        page_num,
               gpointer     user_data) {
    printf(">>> page switched: %lX %d\n", notebook, page_num); fflush(stdout);
}
