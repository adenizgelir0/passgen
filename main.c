#include <stdio.h>
#include <sodium.h>

int main()
{
    for(int i=0; i<16; i++)
    {
        char randchar = randombytes_uniform('~'-'!'+1);
        putchar(randchar+'!');
    }
    putchar('\n');
}
