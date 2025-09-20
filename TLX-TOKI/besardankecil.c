#include <stdio.h>
#include <string.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 63:
besar dan kecil*/
int main(){
    int T, i, j;
    char S[100];

    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%s", &S);
        for(j=0; j<strlen(S); j++){
            if(j%2==0){
                printf("%c", S[j]-32);
            }else{
                printf("%c", S[j]);
            }
        }
        printf("\n");
    }
    return 0;
}