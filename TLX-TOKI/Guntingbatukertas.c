#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 103:
gunting-batu-kertas*/
int main(){
    int N, h;

    scanf("%d", &N);
    char sa[N], sb[N];

    scanf("%s", &sa);
    scanf("%s", &sb);
    int r1=0, p1=0, s1=0, r2=0, p2=0, s2=0;
    for(int i=0; i<N; i++){
        if(sa[i]=='G'){
            s1++;
        }else if(sa[i]=='B'){
            r1++;
        }else if(sa[i]=='K'){
            p1++;
        }
    }
    for(int i=0; i<N; i++){
        if(sb[i]=='G'){
            s2++;
        }else if(sb[i]=='B'){
            r2++;
        }else if(sb[i]=='K'){
            p2++;
        }
    }
    if(s1<=p2){
        h=s1;
    }else{
        h=p2;
    }
    if(r1<=s2){
        h+=r1;
    }else{
        h+=s2;
    }
    if(p1<=r2){
        h+=p1;
    }else{
        h+=r2;
    }
    printf("%d", h);
    return 0;
}