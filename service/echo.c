/* service/echo.c */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>    //strlen
#include<unistd.h>    //write

void print(char *buf)
{
    printf(buf);
}

void interact()
{
    char buf[128];
    gets(buf);
    print(buf);
}

void call_system(char *cmd) {
    system(cmd);
}

int main()
{
    call_system("echo 'Welcome to echo server!'");
    while (1)
    {
        interact();
        fflush(stdout);
    }
    return 0;
}
