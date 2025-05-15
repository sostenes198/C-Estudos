//
// Created by soste on 17/01/2025.
//

#include <stdio.h>
#include "bermuda-rectangle-sample.h"

void go_south_east(int* lat, int* lon) {
    *lat = *lat - 1;
    *lon = *lon + 1;
}


void bermuda_rectangle_execute() {
    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude, &longitude);
    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
}
