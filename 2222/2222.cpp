#include <stdio.h>
int main()
{
    float x,y,z,a;
	printf("请输入三个数：");
	scanf("%f,%f,%f",&x,&y,&z);
	if(x<y)
	{
		a=x;
	    x=y;
		y=a;
	}	
	if(x<z)
	{		
		a=x;
	    x=z;
		z=a;
}	
	if(y<z)
	{
		a=y;
	    y=z;
		z=a;
	}
		printf("三个数从大到小排列为%f,%f,%f\n",x,y,z);
	return 0;
}