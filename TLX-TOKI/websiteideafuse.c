#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 28:
website ideafuse*/

int main(){
    int N;

    scanf("%d", &N);

    if(N>=2014 && N<= 2099){
        printf("http://ideafuse.mikroskil.ac.id/%d/", N);
    }
    return 0;
}