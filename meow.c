#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(10);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
    }

    // while (true)
    //printf meow will make it meow forever

    //int i = 0;
    //while (i < 3)
    //{
        //printf("meow\n");
        //i++;
    //}

    // or we can do it this way