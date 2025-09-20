#include <stdio.h>
#include <string.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 33:
menyepuluh*/
int main(){
    char N[4];
    int i, m=0;

    scanf("%s", &N);

    for(i=0; i<strlen(N); i++){
        if(N[i]=='0'){
            m+=1;
        }
    }
    if(m!=0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}