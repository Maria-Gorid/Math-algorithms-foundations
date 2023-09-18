#include <stdio.h>

int main(int argc, char* argv[])
{
    char inputString[100] = { 0 };
    int letterCount[25] = { 0 };
    int maxPos = 0;
    gets_s(inputString, 100);
    for (int i = 0; inputString[i] != 0; i++)
        letterCount[(int)(inputString[i] - 'a')]++;
    for (int i = 0; i < 25; ++i)
        if (letterCount[i] > letterCount[maxPos])
            maxPos = i;
    printf("%c", (char)(maxPos + 'a'));
    return 0;
}
