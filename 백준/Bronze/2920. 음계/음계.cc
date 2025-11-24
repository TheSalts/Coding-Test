#include <stdio.h>
#include <string.h>

int isEqual(int arr1[8], int arr2[8])
{
    for (int i = 0; i < 8; i++)
    {
        if (arr1[i] != arr2[i])
            return 0;
    }
    return 1;
}

int main()
{
    int inputs[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &inputs[i]);
    }

    int ascending[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int descending[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    if (isEqual(inputs, ascending))
        printf("ascending");
    else if (isEqual(inputs, descending))
        printf("descending");
    else
        printf("mixed");
    return 0;
}
