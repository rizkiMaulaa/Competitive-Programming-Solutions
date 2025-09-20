#include <stdio.h>
#include <string.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 57:
seberapa kuat password anda*/
int main(){
    char S[20];
    int i, j, n=0, m=0, o=0, k=0, l=0;

    scanf("%s", &S);
    for(i=0; i<=strlen(S); i++){
        if(S[i]>='0' && S[i]<='9'){
            n=1;
        }else if(S[i]>='A' && S[i]<='Z'){
            k=1;
            m++;
        }else if(S[i]>='a' && S[i]<='z'){
            l=1;
            m++;
        }else if(S[i]=='_'||S[i]=='!'||S[i]=='?'){
            o=1;
        }
    }
    if(n && k && l && m && o && strlen(S) >=8){
        printf("Kuat");
    }else if(m>12){
        printf("AgakKuat");
    }else{
        printf("Lemah");
    }
    return 0;
}