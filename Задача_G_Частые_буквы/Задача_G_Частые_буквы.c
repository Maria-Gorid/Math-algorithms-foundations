#include <stdio.h>

int main(int argc, char* argv[])
{
    char inputString[100] = { 0 };
    int letterCount[25] = { 0 };
    int count;
    gets_s(inputString, 100);
    scanf_s("%d", &count);
    for (int i = 0; inputString[i] != 0; i++)
        letterCount[(int)(inputString[i] - 'a')]++;
    for (int i = 0; i < 25; ++i)
        if (letterCount[i] >= count)
            printf("%c ", (char)(i + 'a'));
    return 0;
}
