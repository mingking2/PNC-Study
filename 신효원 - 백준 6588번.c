#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int array[1000001] = { 0, };

void find() 
{
    for (int i = 2; i * i <= 1000000; i++)
    {
        if (array[i] == 0) 
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                array[j] = 1;
            }
        }
    }
    array[2] = 1;
}

int main() 
{
    int n;

    find();

    while (1) 
    {
        scanf("%d", &n);

        if (n == 0) 
        {
            break;
        }

        int count = 0;

        for (int i = 2; i <= n / 2; i++) // n / 2를 하는 이유는 어짜피 i가 n / 2를 넘어서면 중복됨
        {
            if (array[i] == 0 && array[n - i] == 0) 
            {
                printf("%d = %d + %d\n", n, i, n - i);
                count = 1;
                break;
            }
        }

        if (count == 0)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }

    return 0;
}