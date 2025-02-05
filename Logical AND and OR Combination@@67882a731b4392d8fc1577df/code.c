#include <stdio.h>
int main(){
    int a,b;
    scanf("%d ",&a,&b);
    if (a>0 && b<0)printf("True");
    else if(a==b && b==0)printf("True");
    else printf("False");
}