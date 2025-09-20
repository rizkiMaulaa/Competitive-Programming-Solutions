#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 61:
same square*/
int main(){
    int Sa[3], Sb[3];
    int i, m=0;

    for(i=0; i<3; i++){
        scanf("%s %s", &Sa[i], &Sb[i]);
    }
    for(i=0; i<3; i++){
        if(Sa[i]!=Sb[i]){
            m+=1;
        }
    }
    if(m==0){
        printf("Angguk-Angguk");
    }else{
        printf("Geleng-Geleng");
    }
    return 0;
}