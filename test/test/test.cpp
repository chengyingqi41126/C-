#include <stdio.h>
typedef struct Student
{
    int id;
    float score;
    char * name;
} Student;
int main(void)
{
    Student stu = { 23052104 , 100 , "cyq" };
    printf("ѧ��=%d\t�ɼ�%.2f\t����%s", stu.id, stu.score, stu.name);
    return 0;
}