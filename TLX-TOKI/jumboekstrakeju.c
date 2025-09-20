#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 74:
jumbo ekstra keju*/
int main(){
    int N, h;

    scanf("%d", &N);
    h=(N-9)/10;
    if(h<=99){
        printf("%d", h);
    }else{
        printf("9");
    }
    return 0;
}