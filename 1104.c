<<<<<<< HEAD
#include <stdio.h>

void swap(int a, int b)//void 不返回 *是个啥传值调用，不用它是没效果的
{
    int t = a;
    a = b;
    b = t;
    return;
}

int main()
{
    int x = 1, y = 9;

    printf("x=%d,y=%d\n", x, y);
    swap(x, y);
    printf("x=%d,y=%d\n", x, y);

    return 0;
=======
#include <stdio.h>

void swap(int a, int b)//void 不返回 *是个啥传值调用，不用它是没效果的
{
    int t = a;
    a = b;
    b = t;
    return;
}

int main()
{
    int x = 1, y = 9;

    printf("x=%d,y=%d\n", x, y);
    swap(x, y);
    printf("x=%d,y=%d\n", x, y);

    return 0;
>>>>>>> be9b868b94dda100b8f009499d4b3e27b5f14da9
}