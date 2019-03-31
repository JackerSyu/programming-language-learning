#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isValid(char*);
int main(void)
{
    char *str = "{]";
    printf("%s\n", str);


    printf("%d\n", isValid(str));

    // for(int i = 0; i < (int)sizeof(stack); i++)
    // {
    //     printf("%c\n", stack[i]);
    // }
    // printf("\n");
    return 0;
}


int isValid(char* s) {
    
    int top = -1;
    int max;
    char *stack;

    int index = 0;
    stack = (char *)malloc(sizeof(char) * strlen(s));
    while (s[index] != '\0')
    {
        if(s[index] == '{' || s[index] == '[' || s[index] == '(')
        {
            top++;
            stack[top] = s[index];
        }
        else if(s[index] == '}')
        {
            if(stack[top] != '{')
            {
                printf("index = %d\n", index);
                printf("test1\n");
                return 0;
            }
            top--;
        }
        else if(s[index] == ']')
        {
            if(stack[top] != '[')
            {
                printf("test2\n");
                return 0;
            }
            top--;
        }
        else if(s[index] == ')')
        {   
            if(stack[top]!= '(')
            {
                printf("test3\n");
                return 0;
            }
            top--;
        }
        index++;
    }
    
    if(top!= -1)
    {
        return 0;
    }
    else
    {
        free(stack);
        return 1;
    }
    
    return 1;
}