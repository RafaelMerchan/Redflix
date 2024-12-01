#include <stdio.h>
#include <unistd.h>
#include "encoder.c"

#define MAX_FRAMES 100
#define LOW_BITRATE 1
#define MEDIUM_BITRATE 10
#define HIGH_BITRATE 100

void start_streaming(const char *filename, int bitrate) {
    int frames[MAX_FRAMES];
    int count = 0;

    while (1) {
        load_frames(filename, bitrate, frames, &count);

        if (count == 0) {
            printf("No hay más frames para transmitir.\n");
            break;
        }

        printf("Transmitiendo %d frames (bitrate: %d):\n", count, bitrate);
        for (int i = 0; i < count; i++) {
            printf("Frame: %d\n", frames[i]);
            usleep(500000 / bitrate);
        }
    }
}
