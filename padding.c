#include <stdio.h>
struct student //student ����ü ����
{
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
printf("[----- [���ؿ�] [2019038010] -----]\n");
struct student pst;//����ü pst
printf("size of student = %ld\n", sizeof(struct student));/*����ü�� ũ��� char 13bytes + pedding���� ������ 3bytes�� �߰� �Ҵ�
int 4bytes + short 2bytes �ؼ� 24 bytes ũ�Ⱑ ���´�.*/
printf("size of int = %ld\n", sizeof(int)); //int �ڷ����� ũ�� 4�� ���
printf("size of short = %ld\n", sizeof(short));//short �ڷ����� ũ�� 2�� ���
return 0;
}