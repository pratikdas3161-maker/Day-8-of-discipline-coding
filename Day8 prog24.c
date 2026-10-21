/* C program to check whether a character is a vowel or consonant */
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(('A'== c) || ('E'==c) || ('I'==c) || ('O'==c) || ('U'==c) || ('a'==c) || ('e'==c) || ('i'==c) || ('o'==c) || ('u'==c))
    {
        printf("%c is a vowel",c);
    }
    else
    {
        printf("%c is a consonant",c);
    }
    return 0;
}