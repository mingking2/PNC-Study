#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int arr[15][14], a, b, k, n, t, i;

    scanf("%d", &t);

    for (i = 0; i < 14; i++)
    {
        arr[0][i] = i + 1;
    }
    for (i = 1; i <= 14; i++)
    {
        arr[i][0] = 1;
    }

    for (a = 1; a <= 14; a++)
    {
        for (b = 1; b <= 13; b++)
        {
            arr[a][b] = arr[a - 1][b] + arr[a][b - 1];
        }
    }
    for (i = 0; i < t; i++)
    {
        scanf("%d", &k);
        scanf("%d", &n);

        printf("%d \n", arr[k][n - 1]);
    }
    return 0;
}
