#include <stdio.h>
int main(){
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    cp>sp?printf("Loss"):(cp<sp? printf("Profit"):printf("No Profit No Loss"));
    // if(cp<sp)printf("Profit");
    // else if(sp<cp)printf("Loss");
    // else printf("No Profit No Loss");
}