#include <stdio.h>
#include <ctype.h>
int main(){
    char num;
    scanf("%c",&num);
    if(isalpha(num)){
        if(num=='a' || num=='e' || num=='i' || num=='o' || num=='u' || num=='A' || num=='E'|| num=='I'|| num=='O'|| num=='U') printf("Vowel");
        else printf("Consonant");
    }
    else if(isdigit(num))printf("Digit");
    else printf("Special Character");
 
}