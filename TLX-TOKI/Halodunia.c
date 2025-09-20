#include <stdio.h>
#include <ctype.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 97:
halo dunia*/
int main(){
    char S[10], c[]="halo dunia";
    int i, m=0;

    scanf("%[^\n]", &S);
    for(i=0; i<10; i++){
        S[i]=tolower(S[i]);
        if(S[i]==c[i]){
            m++;
        }
    }
    printf("%d", m);
    return 0;
}