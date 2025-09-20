#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 75:
selamat datang bonbon*/
int main(){
    long long int  X, Y, Z;

    scanf("%lld %lld %lld", &X, &Y, &Z);
    printf("%lld", ((X*(100-Y))/100)+(((X*(100-Y))/100)*Z)/100);
    return 0;
}