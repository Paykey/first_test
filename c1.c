///Jiseong Kim / 202000982 / 컴퓨터전자시스템공학부
#include <stdio.h>

int main()
{
    int a,b,c;
    int* pa=&a, *pb=&b, *pc=&c;

    *pa = 10, *pb = 20;
    *pc=*pa+*pb;

    printf("%d %d %d", a, b, c);

    return 0;
}
