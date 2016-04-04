#include"proc.h"

void proc()
{
    char str[_SIZE_];
    memset(str,' ',sizeof(str));
    str[0] = '[';
    str[_SIZE_-1] = '\0';
    str[_SIZE_-2] = ']';
    int i = 1;
    char star[5] = "-\\|/\0";
    while(i <= 100)
    {
        str[i] = '#';
        printf("%s[%d%% %c\r]",str,i,star[i%4]);
        //printf("%s[%d%%%c]",str,i,star[i%4]);
        fflush(stdout);
        i++;
        usleep(100000);
    }
    printf("\n");
}
