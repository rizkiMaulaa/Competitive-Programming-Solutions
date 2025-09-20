#include <stdio.h>
#include <string.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 39:
nama pengguna dan kompresi*/
int main(){
    int N, i, j;

    scanf("%d", &N);
    char S[N];
    scanf("%c", &S);
    for(i=0; i<N; i++){
        scanf("%c", &S[i]);
    }
    for(j=0; j<N; j++){
        if(S[j]!=S[j+1]){
            printf("%c", S[j]);
        }
    }
    return 0;
}