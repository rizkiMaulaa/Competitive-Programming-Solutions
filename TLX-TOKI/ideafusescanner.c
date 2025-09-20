#include <stdio.h>
#include <string.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 53:
ideafuse scanner*/


int main(){
    char S[1000];
    char P[]="ideafuse";
    int i, j, h=-2;

    gets(S);
    for(i=0; i<strlen(S); i++){
        if(S[i]=='i'){
            h=0;
            for(j=0; j<strlen(P); j++){
                if(S[j+i]!=P[j]){
                    h-=1;
                    break;
                }
            }
            if(h!=-1){
                h=i;
                break;
            }
        }
    }
    if(h>=0){
        printf("%d", h+1);
    }else{
        printf("-1");
    }
    return 0;
}