#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9') 
	{
        printf("The character '%c' is a digit.\n", ch);
    } 
    
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
	{
        printf("The character '%c' is an uppercase vowel.\n", ch);
    } 
    
    else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
	{
        printf("The character '%c' is a lowercase vowel.\n", ch);
    } 

    else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
	{
        printf("The character '%c' is a consonant.\n", ch);
    } 
   
    else 
	{
        printf("The character '%c' is a special character.\n", ch);
    }

    return 0;
}

