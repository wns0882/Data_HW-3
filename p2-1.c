#include <stdio.h>
#define MAX_SIZE 100 //�������� ����
float sum(float [], int);//sum �Լ� ����
float input[MAX_SIZE], answer;//ũ�Ⱑ 100�� �迭 ����, answer���� ����
int i;//�������� ����
void main(void)
{
printf("[----- [���ؿ�] [2019038010] -----]\n");
for(i=0; i < MAX_SIZE; i++)//�迭�� 0~99���� �����ϴ� �ݺ���
{
    input[i] = i; //�迭�� 0~9���� ����
}
/* for checking call by reference */
printf("address of input = %p\n", input);//input�� �ּҸ� ���
answer = sum(input, MAX_SIZE); //answer�� ���ϰ� 4950�� ����
printf("The sum is: %f\n", answer);//answer�� ���
}
float sum(float list[], int n)
{
printf("value of list = %p\n", list);//list�� ���� ��� -> list�� input�� �ּҸ� �޾ұ� ������ list�� ���� input�� �ּ�
printf("address of list = %p\n\n", &list);//list�� �ּҸ� ���
int i;
float tempsum = 0;
for(i = 0; i < n; i++) //n=100 list�迭�� ���� ���Ѵ� -> 0~99�� �� 4950
tempsum += list[i];//�迭�� �ε������� �� ���Ѵ�
return tempsum; //4950�� ����
}