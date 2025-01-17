// Find the duplicates in an array**
#include <stdio.h>
int main()
{
    int a[10], i, j, k, temp;
    int n = 10;
    printf("Enter the Number of Array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
// ***OUTPUT***
// Enter the Number of Array:4
// 1
// 4
// 5
// 7
// 8
// 7
// 6
// 7
// 1
// 4 1 5 7 8 6 
