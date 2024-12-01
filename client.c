#include <stdio.h>
#include <string.h>
#include "streamer.c"

int main() {
    char command[10];
    int bitrate = MEDIUM_BITRATE;
    const char *video_file = "video.txt";

    printf("Bienvenido a Redflix\n");
    printf("Comandos disponibles: play, pause, stop, low, medium, high, exit\n");

    while (1) {
        printf("Ingrese un comando: ");
        scanf("%s", command);

        if (strcmp(command, "play") == 0) {
            printf("Iniciando reproducción...\n");
            start_streaming(video_file, bitrate);
        } else if (strcmp(command, "pause") == 0) {
            printf("Reproducción pausada (simulado).\n");
        } else if (strcmp(command, "stop") == 0) {
            printf("Reproducción detenida.\n");
            break;
        } else if (strcmp(command, "low") == 0) {
            bitrate = LOW_BITRATE;
            printf("Bitrate cambiado a LOW.\n");
        } else if (strcmp(command, "medium") == 0) {
            bitrate = MEDIUM_BITRATE;
            printf("Bitrate cambiado a MEDIUM.\n");
        } else if (strcmp(command, "high") == 0) {
            bitrate = HIGH_BITRATE;
            printf("Bitrate cambiado a HIGH.\n");
        } else if (strcmp(command, "exit") == 0) {
            printf("Saliendo de Redflix. ¡Gracias por usar el servicio!\n");
            break;
        } else {
            printf("Comando no reconocido. Intente nuevamente.\n");
        }
    }

    return 0;
}
