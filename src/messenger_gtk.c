/*
 * @author Tobias Frisch
 * @file messenger_gtk.c
 */

#include <gtk-3.0/gtk/gtk.h>
#include <gnunet/gnunet_chat_lib.h>

int main(int argc, char** argv) {
  gtk_init(&argc, &argv);

  GNUNET_CHAT_test("Hello world");
  return 0;
}
