#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 16:
penemuan palu*/

int main(){
    int  X, Y;

    scanf("%d %d", &X, &Y);

    if(X>=1 && Y<=10000){
       if(X>Y){
           printf("YES");
       }else{
           printf("NO");
       }
    }else{
        printf("NO");
    }
    return 0;
}