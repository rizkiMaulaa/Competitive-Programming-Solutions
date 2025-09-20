#include <stdio.h>

int main(){
    int a,b=1,c,r=0;
    
    scanf("%d", &a);
    
    if(a<=1){
    printf("NO", a);
    return 0;
    }
    
    for(b; b<=a; b++){
        c=a%b;
        if(c==0)
        r++;
    }
    if(r==2 && a<7){
        printf("YES", a);
    }else{
        printf("NO", a);
    }
    return 0;
}