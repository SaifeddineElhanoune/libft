#include<stdlib.h>
#include<stdio.h>
#include <string.h>
void *ft_memset(void *b, int c, size_t len)
{
    //Cast the first argument to an unsigned char
    unsigned char *ptr = (unsigned char*)b;
    //write len bytes of value c to the string b
    while (len > 0)
    {
        *ptr = c;
        ptr++;
        len--;
    }
    return b;
}

int main()
{
    printf("%s",ft_memset(strdup("saifeddine"),'&',3));



    return 0;
}