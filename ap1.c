#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [���ؿ�] [2019038010] -----]\n");
int list[5];//ũ�Ⱑ 5�� �迭 ����
int *plist[5] = {NULL,};//ũ�Ⱑ 5�� ������ �迭 ����
plist[0] = (int *)malloc(sizeof(int));//int�� ũ�⸸ŭ ������ �迭�� ���� �Ҵ�
list[0] = 1;//�ε���0�� 1 ����
list[1] = 100;//�ε���1�� 100 ����
*plist[0] = 200;//�ε���0�� 200 ����
printf("value of list[0] = %d\n", list[0]);//list[0]�� 1���
printf("address of list[0] = %p\n", &list[0]);//list[0]�� �ּ� ���
printf("value of list = %p\n", list);//�迭�� �ּ� ���-->�迭�� �̸��� �迭�� ���� �ּҸ� ��Ÿ��
printf("address of list (&list) = %p\n", &list);//�迭�� �ּҸ� ���
printf("----------------------------------------\n\n");
printf("value of list[1] = %d\n", list[1]);//list[1]�� �� 100���
printf("address of list[1] = %p\n", &list[1]);//list[1]�� �ּ� ���
printf("value of *(list+1) = %d\n", *(list + 1));//list[0]�� �ּҿ��� 4����Ʈ ��ŭ ���� �� ���� �����ؼ� list[1]�� �� 100 ���
printf("address of list+1 = %p\n", list+1);//list[1]�� �ּ� ���
printf("----------------------------------------\n\n");
printf("value of *plist[0] = %d\n", *plist[0]);//*plist[0]=200�� ���������Ƿ� 200���
printf("&plist[0] = %p\n", &plist[0]);//plist[0]�� �ּҸ� ���
printf("&plist = %p\n", &plist);//plist[0]�� �ּҸ� ���
printf("plist = %p\n", plist);//plist[0]�� �ּҸ� ���
printf("plist[0] = %p\n", plist[0]);/*malloc�Լ��� �Ҵ��� �ּ��� ���� plist[0]�� ���� plist[0]�� malloc���� �Ҵ�� �ּҰ� ���,
*plist[0]�� �Ұ�� 200�� ����*/
printf("plist[1] = %p\n", plist[1]);//�����Ҵ��� ���� �ʾƼ� ���� �������� �ʴ´�
printf("plist[2] = %p\n", plist[2]);//�����Ҵ��� ���� �ʾƼ� ���� �������� �ʴ´�
printf("plist[3] = %p\n", plist[3]);//�����Ҵ��� ���� �ʾƼ� ���� �������� �ʴ´�
printf("plist[4] = %p\n", plist[4]);//�����Ҵ��� ���� �ʾƼ� ���� �������� �ʴ´�
free(plist[0]);//plist[0]�� �����Ҵ� ����
}