#include <stdio.h>
#include <string.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 31:
Robot defense*/

int main(){
    int i, x=0, y=0;
    char S[100];

    scanf("%s", &S);
    for(i=0; i<strlen(S); i++){
        switch(S[i]){
            case 'R':
                x++;
                break;
            case 'L':
                x--;
                break;
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
            default:
                break;
        }
    }
    printf("%d %d", x, y);
    return 0;
}