#include <stdio.h>
#define MAX_SIZE 100 //전역변수 선언
float sum(float [], int);//sum 함수 선언
float input[MAX_SIZE], answer;//크기가 100인 배열 선언, answer변수 선언
int i;//전역변수 선언
void main(void)
{
printf("[----- [박준용] [2019038010] -----]\n");
for(i=0; i < MAX_SIZE; i++)//배열에 0~99까지 대입하는 반복문
{
    input[i] = i; //배열에 0~9까지 대입
}
/* for checking call by reference */
printf("address of input = %p\n", input);//input의 주소를 출력
answer = sum(input, MAX_SIZE); //answer에 리턴값 4950을 대입
printf("The sum is: %f\n", answer);//answer값 출력
}
float sum(float list[], int n)
{
printf("value of list = %p\n", list);//list의 값을 출력 -> list는 input의 주소를 받았기 때문에 list의 값은 input의 주소
printf("address of list = %p\n\n", &list);//list의 주소를 출력
int i;
float tempsum = 0;
for(i = 0; i < n; i++) //n=100 list배열의 합을 구한다 -> 0~99의 합 4950
tempsum += list[i];//배열의 인덱스값을 다 더한다
return tempsum; //4950을 리턴
}