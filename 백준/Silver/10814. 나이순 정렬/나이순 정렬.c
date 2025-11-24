#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int num;
    char name[101];
} Student;

int compare(const void *a, const void *b)
{
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;
    return studentA->num - studentB->num;
}

int main()
{
    int n;
    scanf("%d", &n);
    Student students[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &students[i].num, students[i].name);
    }

    qsort(students, n, sizeof(Student), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", students[i].num, students[i].name);
    }

    return 0;
}