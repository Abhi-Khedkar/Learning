#include<stdio.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>  // File control header file

int main()
{
    int fd = 0;
    char arr[20] = {'\0'};

    fd = open("Hello.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File gets opened with fd : %d\n",fd);
        read(fd,arr,13);

        printf("Data from file is : %s\n",arr);

        close(fd);
    }

    return 0;
}