///Jiseong Kim / 202000982 / 컴퓨터전자시스템공학부 / 01년생 23살
//첫 수정
//리퀘스트 테스트1 급하게 수정
//서브에서 수정중
//메인수정
//활발한
//업데이트
//서브8수정
//4주차 실습 수정
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
//메인 line22수정
