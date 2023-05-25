/*#include <stdio.h>
int main()
{
	/*int a=10;
	double b=9.99;
	printf("%d\n",a&3);
	printf("%f\n",b/3);
	return 0;
	//0表示假
	//非0表示真 */
/*	int a=3,b=3;
	int c=a&&b;
	printf("%d\n",c);//运行结果为1 
	return 0;
	
}*/

/*#include <stdio.h>
int Max(int a,int b)
{
	if (a>b)
	return a;
	else
	return b;
}
int main()
{
	int a=10,b=20;
	int max=Max(a,b);
	printf("max=%d\n",max);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a=10;
	int b=20;
	int max=0;
	max=(a>b?a:b);
	printf("max=%d\n",max);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	printf("\\0\n");//\\为转义字符 
	printf("\0\n");//\0为字符串结束标志，输出什么都没有 
	return 0;
}*/

/*#include <stdio.h>
#define MAX(a,b) (a>b?a:b);
int main()
{
	int a=10;
	int b=20;
	int max=MAX(a,b);//此方法为#define定义宏 
	printf("max=%d\n",max);
	return 0;
}*/

/*#include <stdio.h> 
{
	int a=10;//4个字节
	int*p=&a;
	printf("%p\n",&a);//&a取地址 
	printf("%p\n",p);
	*p=20;
	printf("a=%d\n",a);
	return 0; 
}*/

/*#include <stdio.h>
int main()
{
char ch='w';
char*p=&ch;
*p='a';
printf("ch=%c\n",ch);
return 0;
}*/

#include <stdio.h>
int main()
{
	float f=3.1;
	float*p=&f;
	printf("%d\n",sizeof (p));
//	*p=3.2f;
//	printf("f=%f\n",f);
	return 0;
}








