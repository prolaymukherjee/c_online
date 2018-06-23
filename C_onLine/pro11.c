//C Program to Check Whether a Character is Vowel or Consonant.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter The Charecter:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("This Character IS Vowel.");
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("This Character IS Consonant.");
    }
return 0;
}
