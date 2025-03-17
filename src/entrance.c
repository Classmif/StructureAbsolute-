#include <stdio.h>
#include "entrance.h"

void handle_event(int event_code) {
    switch (event_code) {
        case 1:
            printf("Event 1 handled!\n");
            break;
        case 2:
            printf("Event 2 handled!\n");
            break;
        default:
            printf("Unknown event!\n");
            break;
    }
}
