#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 47:
angka 1*/
int main(){
    int n, i, m=1, h=0;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        h=h+m;
        printf("%d\n", h);
        m++;
    }
    return 0;
}