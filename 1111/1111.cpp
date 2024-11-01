#include <stdio.h>
int main()
{
	float x,y,a;
	printf("请输入两个数：");
	scanf("%f,%f",&x,&y);
	a=x;
	x=y;
	y=a;
	printf("互换结果为：%f,%f\n",x,y);
	return 0;
}