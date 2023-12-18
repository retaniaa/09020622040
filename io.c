#include <stdio.h>
#include <conio.h>

void main() {
    // Deklarasi Variabel
    int umur;
    char nama[20];
    float nilai;
    //clrscr;

    // Memasukkan data
    puts("Masukkan Nama Anda : "); gets(nama);
    puts("Masukkan Umur Anda : "); scanf("%d", &umur);
    puts("Masukkan Nilai Anda : "); scanf("%f", &nilai);

    // Menampilkan data
    printf("Nama Anda : %s\n", nama);
    printf("Umur Anda : %d\n", umur);
    printf("Anda memperoleh nilai %5.2f\n", nilai);

    getch();
}