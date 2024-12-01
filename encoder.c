#include <stdio.h>
#include <stdlib.h>

void load_frames(const char *filename, int bitrate, int *frames, int *count) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: No se pudo abrir el archivo.\n");
        *count = 0;
        return;
    }

    int frame;
    *count = 0;
    while (fscanf(file, "%d", &frame) != EOF && *count < bitrate) {
        frames[*count] = frame;
        (*count)++;
    }

    fclose(file);
}
