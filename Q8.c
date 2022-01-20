#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,flag=0;
    while(scanf("%d",&num)!=EOF){
        if(num==0||num==1){
            printf("NO\n");
        }
        else if(num>=2&&num<8){
            for(int i=2;i<num;i++){
                if((num%i)==0){
                    flag=1;
                    printf("NO\n");
                    break;
                }
            }
        }
        else{
            for(int i=2;i<(num/2);i++){
                if((num%i)==0){
                    flag=1;
                    printf("NO\n");
                    break;
                }
            }
        }
        
        if(flag==0){
            printf("YES\n");
        }
        
    }

    return 0;
}