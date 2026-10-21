#include<stdio.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>  // File control header file

int main()
{
    int fd = 0;

    fd = open("Hello.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File gets opened with fd : %d\n",fd);
        write(fd,"Jay Ganesh...",13);

        close(fd);
    }

    return 0;
}