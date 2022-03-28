#include <stdio.h>
struct student1 //구조체 선언
{
char lastName; //char형 변수 선언
int studentId;//int형 변수 선언
char grade;//char형 변수 선언
};
typedef struct //구조체 변수 정의
{
char lastName;//char형 변수 선언
int studentId;//int형 변수 선언
char grade;//char형 변수 선언
} student2;
int main() {
printf("[----- [박준용] [2019038010] -----]\n");
struct student1 st1 = {'A', 100, 'A'};//구조체st1에 lastname, studentid,grade를 대입
printf("st1.lastName = %c\n", st1.lastName); //st1.lastname 출력
printf("st1.studentId = %d\n", st1.studentId);//st1.studentid 출력
printf("st1.grade = %c\n", st1.grade);//st1.grade 출력
student2 st2 = {'B', 200, 'B'};/*구조체st2에 lastname, studentid,grade를 대입 , typedef struct로 구조체 이름을 선언하면 호출시 struct를
붙이지 않아도 된다*/
printf("\nst2.lastName = %c\n", st2.lastName);//st2.lastname 출력
printf("st2.studentId = %d\n", st2.studentId);//st2.studentid 출력
printf("st2.grade = %c\n", st2.grade);//st2.grade 출력
student2 st3;
st3 = st2; //st3에 st2의 정보를 대입
printf("\nst3.lastName = %c\n", st3.lastName);//st3.lastname 출력
printf("st3.studentId = %d\n", st3.studentId);//st3.studentid 출력
printf("st3.grade = %c\n", st3.grade);//st.grade 출력
/* equality test */
if(st3.lastName == st2.lastName &&st3.grade == st2.grade && st3.studentId==st2.studentId)
//st3의 정보와 st2의 정보를 비교한다
printf("equal\n");//같으면 equal 출력
else
printf("not equal\n");//다르면 not equal 출력
return 0;
}