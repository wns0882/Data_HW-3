#include <stdio.h>
struct student //student 구조체 선언
{
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
printf("[----- [박준용] [2019038010] -----]\n");
struct student pst;//구조체 pst
printf("size of student = %ld\n", sizeof(struct student));/*구조체의 크기는 char 13bytes + pedding으로 나머지 3bytes를 추가 할당
int 4bytes + short 2bytes 해서 24 bytes 크기가 나온다.*/
printf("size of int = %ld\n", sizeof(int)); //int 자료형의 크기 4를 출력
printf("size of short = %ld\n", sizeof(short));//short 자료형의 크기 2를 출력
return 0;
}