#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, r;
    while(scanf("%d %d", &a, &b)!=EOF){
        while (b != 0){//當其中一個數為0，另一個數就是兩數的最大公約數
            r = a%b;
            a = b;
            b = r;
        }
        printf("%d\n", a);
    }
    
    return 0;
}