#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 25:
toki idol*/

int main(){
    int a, b, c, h;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    h=a+b+c;
    if(a>=0 && a<=100 && b>=0 && b<=100 && c>=0 && c<=100){
        if(h>200){
            if(a>=50 && b>=50 && c>=50){
                printf("Lolos");
            }else{
                printf("Tidak Lolos");
            }
        }else{
            printf("Tidak Lolos");
        }
    }
    return 0;
}