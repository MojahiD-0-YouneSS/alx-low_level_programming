#include <stdio.h>

void set_string(char **s, char *to) {
    // Free the memory if the pointer is already pointing to a string
    if (*s != NULL) {
        free(*s);
    }

    // Allocate memory for the new string
    *s = (char*) malloc((strlen(to) + 1) * sizeof(char));

    // Copy the contents of 'to' into the newly allocated memory
    strcpy(*s, to);
}
