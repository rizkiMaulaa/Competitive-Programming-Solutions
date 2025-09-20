#include <stdio.h>
#include <string.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 51:
perlombaan terakhir*/
int main(){
    char S[100], i, h=0;

    scanf("%s", &S);
    for(i=0; i<strlen(S); i++){
        if(S[i]=='O'){
            h++;
        }
    }
    if(h==1){
        printf("Ya");
    }else{
        printf("Tidak");
    }
    return 0;
}