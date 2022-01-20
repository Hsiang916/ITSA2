#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,tmp,sum;
    while(scanf("%d",&n)!=EOF){
        sum=0;
        int ratio=n/3;
        for(int i=1;i<=ratio;i++){
            tmp = i*3;
            sum += tmp;
        }
        printf("%d\n",sum);
    }

    return 0;
}