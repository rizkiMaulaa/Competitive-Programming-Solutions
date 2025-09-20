#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 85:
segitiga terakhir*/
int main(){
    int X, Y, Z;
    
    scanf("%d %d %d", &X, &Y, &Z);
    if(X>0 && Y>0 && Z>0){
        if(X==Y && (Z-Y)==1 && X>1){
            printf("Ya");
        }else if(Y==Z && (X-Z)==1 && Y>1){
            printf("Ya");
        }else if(Z==X && (Y-X)==1 && Z>1){
            printf("Ya");
        }else{
            printf("Tidak");
        }
    }else{
        printf("Tidak");
    }
    return 0;
}