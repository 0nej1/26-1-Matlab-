#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    int N;
    scanf("%d", &N);

    int flag = 0;
    int min, max;

    for (int i=0;i<N;i++){
        int tmp;
        scanf("%d",&tmp);

        if (flag == 0){
            min = tmp;
            max = tmp;
            flag = 1;
        }
        else{
            if(min>tmp)min=tmp;
            if(max<tmp)max=tmp;
        }
    }
    printf("%d %d", min, max);

    return 0;
}