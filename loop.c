/*Program daftar makanan di Bioskop*/
#include <stdio.h>

int main() {
    char c;
    int done;
    float total = 0;

    printf("Silahkan buat pilihan anda:\n");
    printf("1 - Minuman.\n");
    printf("2 - Permen.\n");
    printf("3 - Hot dog.\n");
    printf("4 - Popcorn.\n");
    printf("= - Selesai.\n");
    printf("Pilihan anda:\n");

    /* Memeriksa pilihan */
    done = 0;
    while (!done) {
        c = getchar();
        switch (c) {
            case '1':
                printf("Minuman\tRp.1500\n");
                total += 1500;
                break;
            case '2':
                printf("Permen\t\tRp.500\n");
                total += 500;
                break;
            case '3':
                printf("Hot dog\t\tRp.6000\n");
                total += 6000;
                break;
            case '4':
                printf("Popcorn\t\tRp.3000\n");
                total += 3000;
                break;
            case '=':
                printf("= Jumlah Rp.%.2f\n", total);
                printf("Silahkan bayar di kasir.\n");
                done = 1;
                break;
            default:
                printf("Pilihan tidak benar.\n");
        } /* end switch */
    } /* end while */

    return 0;
}