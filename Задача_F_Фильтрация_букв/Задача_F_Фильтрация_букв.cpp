#include <stdio.h>

int isContain(char* str, char c)
{
    for (int i = 0; str[i] != 0; ++i)
        if (str[i] == c)
            return 1;
    return 0;
}

int main(int argc, char* argv[])
{
    char inputString1[100] = { 0 };
    char inputString2[100] = { 0 };
    gets_s(inputString1, 100);
    gets_s(inputString2, 100);
    for (int i = 0; inputString1[i] != 0; ++i)
        if (!isContain(inputString2, inputString1[i]))
            printf("%c", inputString1[i]);
    return 0;
}
