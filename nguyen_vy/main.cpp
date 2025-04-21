#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main() {
    FILE* f = fopen("D:/Nguyen_Vy/audio.wav", "rb");
    if (!f) {
        printf("Khong the mo file WAV.\n");
        return 1;
    }

    char chunkID[5], format[5];
    uint32_t chunkSize, sampleRate;

    fseek(f, 0, SEEK_SET);
    fread(chunkID, 1, 4, f);
    chunkID[4] = '\0'; 

    fread(&chunkSize, sizeof(uint32_t), 1, f);
    fread(format, 1, 4, f);
    format[4] = '\0';

    if (strncmp(chunkID, "RIFF", 4) != 0 || strncmp(format, "WAVE", 4) != 0) {
        printf("Đay khong phai la file WAV hop le.\n");
        fclose(f);
        return 1;
    }

    fseek(f, 24, SEEK_SET);
    fread(&sampleRate, sizeof(uint32_t), 1, f);

    printf("Kich thuoc file (ChunkSize + 8): %u bytes\n", chunkSize + 8);
    printf("Sample rate: %u Hz\n", sampleRate);

    fclose(f);
   
}