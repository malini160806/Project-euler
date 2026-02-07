#include <stdio.h>
#include <string.h>

int isTriangle(int num)
{
    int n = 1;
    int triangle;

    while(1)
    {
        triangle = n * (n + 1) / 2;

        if(triangle == num)
            return 1;

        if(triangle > num)
            return 0;

        n++;
    }
}

int wordValue(char word[])
{
    int sum = 0;

    for(int i = 0; word[i] != '\0'; i++)
    {
        sum += (word[i] - 'A' + 1);
    }

    return sum;
}

int main()
{
    FILE *fp;
    char word[50];
    int count = 0;

    fp = fopen("words.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while(fscanf(fp, "\"%[A-Z]\",", word) == 1)
    {
        int value = wordValue(word);

        if(isTriangle(value))
            count++;
    }

    fclose(fp);

    printf("Triangle Words Count = %d", count);

    return 0;
}

