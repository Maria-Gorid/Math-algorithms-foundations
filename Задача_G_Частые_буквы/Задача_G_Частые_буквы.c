#include <stdio.h>

int main(int argc, char* argv[])
{
    char inputString[101] = { 0 };
    int letterCount[26] = { 0 };
    int count;
    gets_s(inputString, 101);
    scanf_s("%d", &count);
    for (int i = 0; inputString[i] != 0; i++)
        letterCount[(int)(inputString[i] - 'a')]++;
    for (int i = 0; i < 26; ++i)
        if (letterCount[i] >= count)
            printf("%c ", (char)(i + 'a'));
    return 0;
}
