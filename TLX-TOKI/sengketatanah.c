#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 82:
sengketa tanah*/
int main(){
    char s[10];
    int Xb1, Xb2, Yb1, Yb2, Xd1, Xd2, Yd1, Yd2;

    scanf("%s", &s);
    scanf("%d", &Xb1);
    scanf("%d", &Yb1);
    scanf("%d", &Xb2);
    scanf("%d", &Yb2);
    scanf("%d", &Xd1);
    scanf("%d", &Yd1);
    scanf("%d", &Xd2);
    scanf("%d", &Yd2);

    if(Xd2>Xb1 && Yd2>Yb1 && Xd1<Xb2 && Yd1<Yb2){
        printf("SENGKETA");
    }else{
        printf("DAMAI");
    }
    return 0;
}