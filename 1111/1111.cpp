#include <stdio.h>
int main()
{
	float x,y,a;
	printf("��������������");
	scanf("%f,%f",&x,&y);
	a=x;
	x=y;
	y=a;
	printf("�������Ϊ��%f,%f\n",x,y);
	return 0;
}