#include<stdio.h>
#include<stdlib.h>
void main()
{
printf("[----- [���ؿ�] [2019038010] -----]\n");
int **x; //���������� ���� x ����
printf("sizeof(x) = %lu\n", sizeof(x));//�������� ũ��� �ڷ����� ������� ũ�Ⱑ 4 ->32bit�����Ϸ��� ����ϱ� ������ 4����Ʈ�� ���´�.
printf("sizeof(*x) = %lu\n", sizeof(*x));//�������� ũ��� �ڷ����� ������� ũ�Ⱑ 4 ->32bit�����Ϸ��� ����ϱ� ������ 4����Ʈ�� ���´�.
printf("sizeof(**x) = %lu\n", sizeof(**x));//**x�� int�� �̱⶧���� int�ڷ����� ũ�� 4byte�� ���´�.
}
