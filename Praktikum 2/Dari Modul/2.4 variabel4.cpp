#include <stdio.h>
#include <string.h>
int main()
{
    char nim[10];
    char nama[30];
    int nilai;

    strcpy(nim, "123321");
    strcpy(nama, "Nuur Rhamadhan");
    nilai = 85;

    printf("NIM \t: %s", nim);
    printf("\nNAMA \t: %s", nama);
    printf("\nNILAI \t: %i", nilai);

    return 0;
}