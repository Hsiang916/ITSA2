#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char sign[10];
        scanf("%s",sign);
        int a1,a2,b1,b2,c1,c2;
        scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

        if(strcmp(sign,"+")==0){
            c1=a1+a2;
            c2=b1+b2;
        }

        else if(strcmp(sign,"-")==0){
            c1=a1-a2;
            c2=b1-b2;
        }

        else if(strcmp(sign,"*")==0){
            if(b1==0 || b2==0){
                c1=(a1*a2);
                c2=(a1*b2)+(a2*b1);
            }

            else if(b1!=0 && b2!=0){
                c1=(a1*a2)+((-1)*(b1*b2));
                c2=(a1*b2)+(a2*b1);
            }
        }

        printf("%d %d\n",c1,c2);
    }

    return 0;
}