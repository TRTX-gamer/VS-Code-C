#include <stdio.h>

int main(void)
{
    int a[10];
    int i;
    int j;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++) // i的扫描
    {
        int min = i;                 // 初始化min为i，默认最小
        for (j = i + 1; j < 10; j++) // j的扫描，访问未知排序
        {
            if (a[j] < a[min]) // 如a j与a min比，小，则赋给min
            {
                min = j;
            }
        }
        if (min != i) // 如a min与a i不等，则排a min到a i的位置上,就是交换
        {
            int t;
            t = a[min];
            a[min] = a[i];
            a[i] = t;
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}