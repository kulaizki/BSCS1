#include <stdio.h>

void reverseString(char string[], int start, int end);

int main()
{
    char string[128];
    int start = 0, end = 0;

    printf("Enter a string: ");
    gets(string);

    while (string[end])
    {
        for (end = start; string[end] && string[end] != ' '; end++);
        reverseString(string, start, end - 1);
        start = end + 1;
    }

    puts(string);

    return 0;
}

void reverseString(char string[], int start, int end)
{
    char temp;
    
    while (start < end)
    {
        temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        start++;
        end--;
    }
}