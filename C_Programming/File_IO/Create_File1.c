#include<stdio.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>  // File control header file

int main()
{
    int fd = 0;

    fd = creat("Demo.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create the file\n");
        return -1;
    }
    else
    {
        printf("File gets created with fd : %d\n",fd);
    }

    return 0;
}