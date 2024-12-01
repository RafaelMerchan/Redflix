# Proyecto: Redflix

Este proyecto simula un sistema de streaming básico que adapta la transmisión de video a diferentes niveles de bitrate. El sistema permite reproducir, pausar, detener y cambiar la calidad de la transmisión de manera manual.

---

## ¿Qué hace este programa?

1. **Encoder (encoder.c)**:
        Genera datos de video simulados según el nivel de bitrate seleccionado: Low, Medium, o High.
        Proporciona frames al streamer para su transmisión.

2. **Streamer (streamer.c)**:
        Se encarga de transmitir los frames al cliente.
        Responde a comandos básicos: play, pause, y stop.

3. **Cliente (client.c)**:
        Controla la reproducción enviando comandos al streamer.
        Permite cambiar el bitrate durante la transmisión.

## Instrucciones para usar el programa
### Paso 1: Preparar el archivo de video

Crea un archivo llamado video.txt en el mismo directorio que los programas. Este archivo debe contener una lista de números separados por espacios o saltos de línea, representando los frames del video. Ejemplo:

1 2 3 4 5 6 7 8 9 10

### Paso 2: Compilar los programas

Compila los archivos fuente con los siguientes comandos:

gcc encoder.c -o encoder
gcc streamer.c -o streamer
gcc client.c -o client

### Paso 3: Ejecutar los programas

    Iniciar el cliente:

    En una terminal, ejecuta:

    ./client

    El cliente comenzará la interacción.

## Cómo funciona

    El cliente inicia la reproducción con el comando play.

    Durante la transmisión, puedes:
        Pausar el video con pause.
        Detener la reproducción con stop.
        Cambiar la calidad de transmisión con los comandos low, medium, o high.

    El sistema adapta automáticamente el volumen de datos enviados según el bitrate seleccionado:
        Low: 1 frame/segundo.
        Medium: 10 frames/segundo.
        High: 100 frames/segundo.

    Para salir del programa, usa el comando exit.
