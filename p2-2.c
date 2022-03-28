#include <stdio.h>
void print1 (int *ptr, int rows);//print1 함수 선언
int main()
{
printf("[----- [박준용] [2019038010] -----]\n");
int one[] = {0, 1, 2, 3, 4}; //배열에 0~4를 대입
printf("one = %p\n", one);//배열의 이름은 배열의 주소 -> 주소를 출력
printf("&one = %p\n", &one);//배열one의 주소 출력
printf("&one[0] = %p\n", &one[0]);//배열 one의 주소 출력
printf("\n");
print1(&one[0], 5);//print1 함수에 &one[0],5 값을 넘겨준다
return 0;
}
void print1 (int *ptr, int rows) //print1의 함수 정의
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)
printf("%p \t %5d\n", ptr + i, *(ptr + i));/*포인터 변수 prt이 one배열의 주소를 대입 받았으므로 ptr은 배열의 주소를 나타내고,
*ptr은 배열의 인덱스값에 접근한다, 즉 one[0]~one[4]의 주소와 one[0]~one[4]의 값을 출력하는 반복문이다*/
printf("\n");
}