#include <stdio.h>
#include <string.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 36:
visi tahun baru*/
int main(){
    char S[100], T[100];
    int i;

    scanf("%s", &S);
    scanf("%s", &T);
    for(i=0; i<100; i++){
        if(S[i]>=65 && S[i]<=90){
            S[i]+=32;
        }
    }
    for(i=0; i<100; i++){
        if(T[i]>=65 && T[i]<=90){
            T[i]+=32;
        }
    }
    if(strcmp(S,T)==0){
        printf("20/20");
    }else{
        printf("x_x");
    }
}