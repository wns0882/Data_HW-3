#include <stdio.h>
void print1 (int *ptr, int rows);//print1 �Լ� ����
int main()
{
printf("[----- [���ؿ�] [2019038010] -----]\n");
int one[] = {0, 1, 2, 3, 4}; //�迭�� 0~4�� ����
printf("one = %p\n", one);//�迭�� �̸��� �迭�� �ּ� -> �ּҸ� ���
printf("&one = %p\n", &one);//�迭one�� �ּ� ���
printf("&one[0] = %p\n", &one[0]);//�迭 one�� �ּ� ���
printf("\n");
print1(&one[0], 5);//print1 �Լ��� &one[0],5 ���� �Ѱ��ش�
return 0;
}
void print1 (int *ptr, int rows) //print1�� �Լ� ����
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)
printf("%p \t %5d\n", ptr + i, *(ptr + i));/*������ ���� prt�� one�迭�� �ּҸ� ���� �޾����Ƿ� ptr�� �迭�� �ּҸ� ��Ÿ����,
*ptr�� �迭�� �ε������� �����Ѵ�, �� one[0]~one[4]�� �ּҿ� one[0]~one[4]�� ���� ����ϴ� �ݺ����̴�*/
printf("\n");
}