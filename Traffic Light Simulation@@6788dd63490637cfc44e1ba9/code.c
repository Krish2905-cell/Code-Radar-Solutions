#include<stdio.h>
int main(){
    char s;
    scanf("%c",&s);
    s=="R"?printf("Stop"):(s=="G"?printf("Go"):(s=="Y"?printf("Slow Down"):printf("Invalid Input")));
}