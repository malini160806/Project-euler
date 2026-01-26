#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 6000
#define LEN 20

int compare(const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);
}

int nameValue(char *name)
{
    int sum = 0;
    for (int i = 0; name[i]; i++)
        sum += name[i] - 'A' + 1;
    return sum;
}

int main()
{
    FILE *fp = fopen("names.txt", "r");

    char *names[MAX];
    int count = 0;

    char buffer[LEN];

    while (fscanf(fp, "\"%[A-Z]\",", buffer) == 1)
    {
        names[count] = malloc(strlen(buffer) + 1);
        strcpy(names[count], buffer);
        count++;
    }

    fclose(fp);

    qsort(names, count, sizeof(char *), compare);

    long long total = 0;

    for (int i = 0; i < count; i++)
    {
        total += (long long)(i + 1) * nameValue(names[i]);
    }

    printf("Total name score = %lld\n", total);

    return 0;
}
