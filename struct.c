#include <stdio.h>
struct student1 //����ü ����
{
char lastName; //char�� ���� ����
int studentId;//int�� ���� ����
char grade;//char�� ���� ����
};
typedef struct //����ü ���� ����
{
char lastName;//char�� ���� ����
int studentId;//int�� ���� ����
char grade;//char�� ���� ����
} student2;
int main() {
printf("[----- [���ؿ�] [2019038010] -----]\n");
struct student1 st1 = {'A', 100, 'A'};//����üst1�� lastname, studentid,grade�� ����
printf("st1.lastName = %c\n", st1.lastName); //st1.lastname ���
printf("st1.studentId = %d\n", st1.studentId);//st1.studentid ���
printf("st1.grade = %c\n", st1.grade);//st1.grade ���
student2 st2 = {'B', 200, 'B'};/*����üst2�� lastname, studentid,grade�� ���� , typedef struct�� ����ü �̸��� �����ϸ� ȣ��� struct��
������ �ʾƵ� �ȴ�*/
printf("\nst2.lastName = %c\n", st2.lastName);//st2.lastname ���
printf("st2.studentId = %d\n", st2.studentId);//st2.studentid ���
printf("st2.grade = %c\n", st2.grade);//st2.grade ���
student2 st3;
st3 = st2; //st3�� st2�� ������ ����
printf("\nst3.lastName = %c\n", st3.lastName);//st3.lastname ���
printf("st3.studentId = %d\n", st3.studentId);//st3.studentid ���
printf("st3.grade = %c\n", st3.grade);//st.grade ���
/* equality test */
if(st3.lastName == st2.lastName &&st3.grade == st2.grade && st3.studentId==st2.studentId)
//st3�� ������ st2�� ������ ���Ѵ�
printf("equal\n");//������ equal ���
else
printf("not equal\n");//�ٸ��� not equal ���
return 0;
}