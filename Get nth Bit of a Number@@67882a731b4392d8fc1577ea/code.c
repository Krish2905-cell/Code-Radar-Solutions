#include<stdio.h>
int main(){
    int a,pos;
    scanf("%d %d",&a,&pos);
    printf("%d",(a>>pos)&1);
}