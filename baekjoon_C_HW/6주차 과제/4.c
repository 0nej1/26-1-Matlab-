#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    int flag = 0;
    int tmp;
    int max, maxIdx;
    for (int i=1;i<=9;i++){
        scanf("%d",&tmp);
        if (flag == 0){
            max = tmp;
            maxIdx = i;
            flag = 1;
        }
        else if (max<tmp){
            max = tmp;
            maxIdx = i;
        }
    }
    printf("%d\n%d",max,maxIdx);

    return 0;
}