#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [박준용] [2019038010] -----]\n");
int list[5]; //크기가 5인 배열 선언
int *plist[5];//크기가 5인 포인터 배열 선언
list[0] = 10;//list[0]에 10 대입
list[1] = 11;//list[1]에 11대입
plist[0] = (int*)malloc(sizeof(int));//plist[0] int형 크기만큼 동적할당
printf("list[0] \t= %d\n", list[0]);//list[0]의 값 출력
printf("address of list \t= %p\n", list);//list의 주소 출력
printf("address of list[0] \t= %p\n", &list[0]);//list의 주소 출력
printf("address of list + 0 \t= %p\n", list+0);//list의 주소 출력
printf("address of list + 1 \t= %p\n", list+1);//list[1]의 주소 출력
printf("address of list + 2 \t= %p\n", list+2);//list[2]의 주소 출력
printf("address of list + 3 \t= %p\n", list+3);//list[3]의 주소 출력
printf("address of list + 4 \t= %p\n", list+4);//list[4]의 주소 출력
printf("address of list[4] \t= %p\n", &list[4]);//list[4]의 주소 출력
free(plist[0]);//plist[0] 동적할당 해제
}