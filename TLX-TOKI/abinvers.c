#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 49:
A+B (Inverse)*/
int main(){
    int N;

    scanf("%d", &N);
    if(N==1){
        printf("0 1");
    }else if(N%2==0){
        printf("%d %d", N/2, N/2);
    }else if(N%3==0){
        printf("%d %d", N/3, 2*(N/3));
    }else if(N%5==0){
        printf("%d %d", N/5, 4*(N/5));
    }else if(N%7==0){
        printf("%d %d", N/7, 6*(N/7));
    }else{
        printf("1 %d", N-1);
    }
    return 0;
}