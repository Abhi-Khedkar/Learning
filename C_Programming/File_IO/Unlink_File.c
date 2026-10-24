#include<stdio.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>  // File control header file

int main()
{
    int ret = 0;

    ret = unlink("Demo.txt");

    if(ret == -1)
    {
        printf("Unable to delete file\n");
        return -1;
    }
    else
    {
        printf("File gets successfuly deleted\n");
    }

    return 0;
}