#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* strlen返回資源 */

char* longestCommonPrefix(char** strs, int strsSize);

int main(void)
{
    char* strs[8] = {"flowerasdsad","flowsadsadasdasda","floasfdight"};
    printf("%s\n",longestCommonPrefix(strs, 3));
    return 0;
}


char* longestCommonPrefix(char** strs, int strsSize) 
{
    // 一定要做的判斷
    if(strsSize==0)
    {
        return "";
    }
	else if(strsSize == 1)
    {
        return strs[0];
    }

    int index = 0;
    char *result;

    for(int i = 0; i < strlen(strs[0]); i++)
    {
        int same = 0;
        for(int j = 0; j < strsSize - 1; j++)
        {
            if(strs[j][i] == strs[j+1][i])
            {
                same = 1;
            }
            else
            {
                same = 0;
                break;
            }
        }
        if(same == 1)
        {
            index++;
        }
        else
        {
            break;
        }
    }
    // 沒有一樣的
    if(index == 0)
    {
        return "";
    }
    else
    {
        result = (char *)malloc (sizeof(char) * index + 1);
        for(int i = 0; i < index; i++)
        {
            result[i] = strs[0][i];
        }
        result[index] = '\0';
        return result;
    }
    return result;
}

