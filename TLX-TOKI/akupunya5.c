#include <stdio.h>
#include <math.h>

int main(){
    int N, h, m, false, true;

    scanf("%d", &N);
    h=N+((pow(5, 22)-1)/4);
    while(h>=5){
        if(h%5==3){
            m=false;
            break;
        }else if(h%5==4){
            m=false;
            break;
        }else{
            h/=5;
        }
    }
    if(m!=false){
        if((h%5==1)||(h%5==2)){
            printf("YES");
        }else{
            printf("NO");
        }
    }else{
        printf("NO");
    }
    return 0;
}