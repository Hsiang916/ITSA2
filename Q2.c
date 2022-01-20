#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        double b=(1.6)*a;
        printf("%.1f\n",b);
    }

    return 0;
}