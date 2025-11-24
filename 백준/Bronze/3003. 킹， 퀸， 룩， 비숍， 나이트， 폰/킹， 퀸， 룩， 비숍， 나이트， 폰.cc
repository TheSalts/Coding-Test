#include <stdio.h>
#include <string.h>

int main()
{
    int inputs[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &inputs[i]);
    }
    int normals[] = {1, 1, 2, 2, 2, 8};
    char output[50] = "";

    for (int i = 0; i < 6; i++)
    {
        if (inputs[i] < normals[i])
        {
            sprintf(output + strlen(output), "%d ", normals[i] - inputs[i]);
        }
        else if (inputs[i] > normals[i])
        {
            sprintf(output + strlen(output), "%d ", normals[i] - inputs[i]);
        }
        else
        {
            sprintf(output + strlen(output), "0 ");
        }
    }
    printf("%s\n", output);
    return 0;
}