#include <stdio.h>
#include <string.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 60:
koin asing*/
int main(){
    char S[8];
    int i;

    scanf("%s", &S);
    if(S[0]!=S[1]){
        if(S[2]==S[0]){
            printf("2");
        }else{
            printf("1");
        }
    }else{
        for(i=2; i<strlen(S); i++){
            if(S[0]!=S[i]){
                printf("%d", i+1);
                break;
            }
        }
    }
    return 0;
}