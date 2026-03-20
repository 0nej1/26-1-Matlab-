#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    int max;
    if (a==b && b==c)printf("%d", 10000+a*1000);
    else if (a==b || b==c)printf("%d",1000+b*100);
    else if (a==c)printf("%d", 1000+a*100);
    else{
        if (a>b && a>c)max=a;
        else if(b>a && b>c)max=b;
        else max=c;
        printf("%d",100*max);
    }

    return 0;
}