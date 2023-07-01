#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void clear() {
#ifdef _WIN32
    system("cls");
#else
    printf("\x1b[2J");
#endif
}

const int width = 160;
const int height = 44;
const int backgroundASCIICode = ' ';
float A, B, C;
float cubeWidth = 10;
float incrementSpeed = 0.6;

float calculateX(int i, int j, int k) {
    return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
           j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C);
}

float calculateY(int i, int j, int k) {
    return j * cos(A) * cos(C) + k * sin(A) * cos(C) -
           j * sin(A) * sin(B) + sin(C) + k * cos(A) * sin(B) * sin(C) -
           i * cos(B) * sin(C);
}

float calculateZ(int i, int j, int k) {
    return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
}


int main() {
char buffer[width * height];
float zBuffer[width * height];
    clear();
    while(1) {
        memset(buffer, backgroundASCIICode, sizeof(buffer));
        memset(zBuffer, 0, sizeof(buffer)*4);
    }
    return 0;
}
