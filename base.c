#include <stdio.h>
#include <stdlib.h>
#include "base.h"

/*
 *  ERROR HANDLING
 */
void succeed (char *message) {
    printf ("%s\n", message);
}

void fail (char *message) {
    char err [100];
    sprintf (err, "ERROR: %s", message);
    fprintf (stderr, "%s\n", err);
    exit (1);
}

/*
 *  MAIN
 */
int baseMain () {
    succeed ("Base module OK");
    return 0;
}