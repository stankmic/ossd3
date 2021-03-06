#include <stdlib.h>
#include <stdio.h>
#include "datatypes.h"

void free_message(message_t *msg) {
  if (msg != NULL) {
    /* Free the text message */
    if (msg->text != NULL && msg->type != MESSAGE_TYPE_LOGIN) {
      free(msg->text);
    }

    /* Free the struct */
    free(msg);
  }
}

void print_message(message_t *msg) {
  if (msg != NULL) {
    printf("Msg id(%d): type = '%d', text = \"%s\"\n", msg->id, msg->type, msg->text);
  }
}
