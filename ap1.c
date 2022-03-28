#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [박준용] [2019038010] -----]\n");
int list[5];//크기가 5인 배열 선언
int *plist[5] = {NULL,};//크기가 5인 포인터 배열 선언
plist[0] = (int *)malloc(sizeof(int));//int의 크기만큼 포인터 배열을 동적 할당
list[0] = 1;//인덱스0에 1 대입
list[1] = 100;//인덱스1에 100 대입
*plist[0] = 200;//인덱스0에 200 대입
printf("value of list[0] = %d\n", list[0]);//list[0]값 1출력
printf("address of list[0] = %p\n", &list[0]);//list[0]의 주소 출력
printf("value of list = %p\n", list);//배열의 주소 출력-->배열의 이름은 배열의 시작 주소를 나타냄
printf("address of list (&list) = %p\n", &list);//배열의 주소를 출력
printf("----------------------------------------\n\n");
printf("value of list[1] = %d\n", list[1]);//list[1]의 값 100출력
printf("address of list[1] = %p\n", &list[1]);//list[1]의 주소 출력
printf("value of *(list+1) = %d\n", *(list + 1));//list[0]에 주소에서 4바이트 만큼 더한 후 값을 참조해서 list[1]의 값 100 출력
printf("address of list+1 = %p\n", list+1);//list[1]의 주소 출력
printf("----------------------------------------\n\n");
printf("value of *plist[0] = %d\n", *plist[0]);//*plist[0]=200을 대입했으므로 200출력
printf("&plist[0] = %p\n", &plist[0]);//plist[0]에 주소를 출력
printf("&plist = %p\n", &plist);//plist[0]에 주소를 출력
printf("plist = %p\n", plist);//plist[0]에 주소를 출력
printf("plist[0] = %p\n", plist[0]);/*malloc함수로 할당한 주소의 값이 plist[0]에 들어가서 plist[0]은 malloc으로 할당된 주소가 출력,
*plist[0]을 할경우 200이 나옴*/
printf("plist[1] = %p\n", plist[1]);//동적할당을 하지 않아서 값이 존재하지 않는다
printf("plist[2] = %p\n", plist[2]);//동적할당을 하지 않아서 값이 존재하지 않는다
printf("plist[3] = %p\n", plist[3]);//동적할당을 하지 않아서 값이 존재하지 않는다
printf("plist[4] = %p\n", plist[4]);//동적할당을 하지 않아서 값이 존재하지 않는다
free(plist[0]);//plist[0]에 동적할당 해제
}