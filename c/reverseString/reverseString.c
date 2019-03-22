#include <stdio.h>
#include <string.h>

void reverseString(char arrStr[]);

int main(void)
{
    char testString[] = "hi, I'm Tiomthy";
    reverseString(testString);

    return 0;
}


void reverseString(char aString[])
{   
    int lenString = strlen(aString);
    for(int i = lenString; i >= 0; i--)
    {
        printf("%c", aString[i]);
    }
    printf("\n");
}