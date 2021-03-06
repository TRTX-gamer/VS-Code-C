/*
02-Fibonacci-Sequence
    功能
        循环输出斐波那契数，一行10个输出斐波那契数列,直到大于1,000,000,000
    目的
        1 学习for循环和while循环，do...while循环
*/

#include <stdio.h>
#include <windows.h>

int main(void)
{   
    int x = 1;
    int y = 0;
    int z = 0;
    
    printf("下面是for循环\n");
    for (; x <= 1000000000; z = x, x += y, y = z) // 空缺为真
    {
        printf("%d\n", x); // 输出: 1 1 2 3 5 ...的1
        // z = x;              保存x的值
        // x += y;             将x + y的值赋给x,x = 1 + 0 = 1
        // y = z;              y = x的保存值
    }

    printf("下面是while循环\n");
    x = 1;
    y = 0;
    z = 0;

    while (x <= 1000000000)
    {
        printf("%d\n", x);
        z = x;
        x += y;
        y = z;
    }

    printf("下面是do while循环\n");
    x = 1;
    y = 0;
    z = 0;

    do
    {
        printf("%d\n", x);
        z = x;
        x += y;
        y = z;
    } while (x <= 1000000000);
    
    system("pause");

    return 0;
}

/*输出结果
----------------------------------------------------------------------------------------------------
下面是for循环
1
1
2
3
5
8
13
21
34
55
89
144
233
377
610
987
1597
2584
4181
6765
10946
17711
28657
46368
75025
121393
196418
317811
514229
832040
1346269
2178309
3524578
5702887
9227465
14930352
24157817
39088169
63245986
102334155
165580141
267914296
433494437
701408733
下面是while循环
1
1
2
3
5
8
13
21
34
55
89
144
233
377
610
987
1597
2584
4181
6765
10946
17711
28657
46368
75025
121393
196418
317811
514229
832040
1346269
2178309
3524578
5702887
9227465
14930352
24157817
39088169
63245986
102334155
165580141
267914296
433494437
701408733
下面是do while循环
1
1
2
3
5
8
13
21
34
55
89
144
233
377
610
987
1597
2584
4181
6765
10946
17711
28657
46368
75025
121393
196418
317811
514229
514229
832040
832040
832040
1346269
2178309
3524578
5702887
9227465
14930352
24157817
39088169
63245986
102334155
165580141
267914296
433494437
701408733
----------------------------------------------------------------------------------------------------
*/

// 2021年2月21日21点43分