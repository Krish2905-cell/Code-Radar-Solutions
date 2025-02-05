#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i;i=2;i++){
        if(a%i==0)printf("Not Prime");
        break
        else printf("Prime");
    }
    
}