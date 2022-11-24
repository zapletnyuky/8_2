#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void trim_end(char *str, char ch)
{
    char *ptr = NULL;
    size_t size = strlen(str);
    ptr = str + size - 1;
 
    while (*ptr == ch && ptr >= str)
    {
        *ptr-- = '\0';
    }
}
 
size_t character_count(const char *str, const char ch)
{
    size_t count = 0u;
 
    while (str && *str)
    {
        if (*str++ == ch)
        {
            count++;
        }
    }
 
    return count;
}
 
int main()
{
    char str[BUFSIZ];
    const char ch = 'a';
    printf("Please enter string: ");
 
    if (fgets(str, BUFSIZ, stdin))
    {
        char *last_space = NULL;
        trim_end(str, '\n');
        
        last_space = strrchr(str, ' ');
 
        if (last_space == NULL)
        {
            last_space = str;
        }
        else
        {
            last_space++;
        }
 
        printf("'%c' = %u\n", ch, character_count(last_space, ch));
    }
    
    return 0;
}
