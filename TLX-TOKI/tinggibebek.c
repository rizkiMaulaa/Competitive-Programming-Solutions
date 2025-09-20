#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 78:
tinggi bebek*/
int main(){
    int m, n, o;

    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &o);
    if(m>n && m>o){
        if(n>o){
            printf("%d\n%d\n%d", o, m, n);
        }else{
            printf("%d\n%d\n%d", n, m, o);
        }
    }else if(n>m && n>o){
        if(m>o){
            printf("%d\n%d\n%d", o, n, m);
        }else{
            printf("%d\n%d\n%d", m, n, o);
        }
    }else{
        if(m>n){
            printf("%d\n%d\n%d", n, o, m);
        }else{
            printf("%d\n%d\n%d", m, o, n);
        }
    }
    return 0;
}