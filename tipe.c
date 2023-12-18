#include <stdio.h>
#define A 5 //Konstanta Preposesor

void main(){
//Konstanta dgn fungsi const
const double pi = 3.1415926535897932384;

//Deklarasi Variabel
int x, nilai;
float y;
char z;
double w;
int a;

//Inisialisasi Variabel

x = 10;
y = 9.45;
z = 'C';
w = 3.45E20;

//Menampilkan variabel x
printf("Nilai dari x adalah : %i\n", x);

//Menampilkan variabel y
printf("Nilai dari y adalah : %f\n", y);
printf("Nilai dari y adalah : %g\n", y);
printf("Nilai dari y adalah : %e\n", y);

//Menampilkan variabel z
printf("Nilai dari z adalah : %c\n", z);
printf("Nilai dari z adalah : %u\n", z);

//Penggunaan operator
printf("Nilai dari a+x adalah : %1\n", a+x);
printf("Nilai dari a-x adalah : %i\n", a-x);
printf("Nilai dari a*x adalah : %i\n", a*x);
printf("Nilai dari y/a adalah : %f\n", y/a);
printf("Sisa 9 bagi 4 adalah : %i\n", 9%4);

/*Perbedaan ++ diletakkan sebelum dan sesudah*/
nilai = ++x;
printf("x = %i, nilai = %i\n", x, nilai);
nilai = x++;
printf("x = %i, nilai = %i\n", x, nilai);
}