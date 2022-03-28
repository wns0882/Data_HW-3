#include<stdio.h>
#include<stdlib.h>
void main()
{
printf("[----- [박준용] [2019038010] -----]\n");
int **x; //이중포인터 변수 x 선언
printf("sizeof(x) = %lu\n", sizeof(x));//포인터의 크기는 자료형에 상관없이 크기가 4 ->32bit컴파일러를 사용하기 때문에 4바이트가 나온다.
printf("sizeof(*x) = %lu\n", sizeof(*x));//포인터의 크기는 자료형에 상관없이 크기가 4 ->32bit컴파일러를 사용하기 때문에 4바이트가 나온다.
printf("sizeof(**x) = %lu\n", sizeof(**x));//**x는 int형 이기때문에 int자료형의 크기 4byte가 나온다.
}
