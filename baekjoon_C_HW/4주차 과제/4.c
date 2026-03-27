#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    unsigned int X, N;
    scanf("%u", &X);
    scanf("%u", &N);
    unsigned int sum=0;
    for (int i=0;i<N;i++){
        int price, num;
        scanf("%u %u",&price,&num);
        sum+=price*num;
    }
    if (sum==X)printf("Yes");
    else printf("No");

    return 0;
}