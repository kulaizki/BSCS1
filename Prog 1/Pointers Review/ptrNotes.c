#include <stdio.h>

int main()
{
    int a = 1025;
    int *p = &a;

    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);

    char *p0 = (char*)p; // typecasting
    printf("Size of char is %d bytes\n", sizeof(char));
    printf("Address = %d, value = %d\n", p0, *p0); 
    // 1025 = 00000000 00000000 00000100 00000001 1 byte (char) byte[0]
    //            3       2        1        0
    printf("Address = %d, value = %d\n", p0+1, *(p0+1)); 
    // 1025 = 00000000 00000000 00000100 00000001 1 byte (char) byte[1]
    //            3       2        1        0

}