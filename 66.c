//题目：输入3个数a,b,c，按大小顺序输出。　　　
//1.程序分析：利用指针方法。
//2.程序源代码：
#include <stdio.h>
/*pointer*/
int main(int argc, char *argv[]) {
	int n1,n2,n3;
	int *pointer1,*pointer2,*pointer3;
	printf("please input 3 number:n1,n2,n3:");
	scanf("%d,%d,%d",&n1,&n2,&n3);
	pointer1=&n1;
	pointer2=&n2;
	pointer3=&n3;
	if(n1>n2) swap(pointer1,pointer2);
	if(n1>n3) swap(pointer1,pointer3);
	if(n2>n3) swap(pointer2,pointer3);
	printf("the sorted numbers are:%d,%d,%d\n",n1,n2,n3);
}

swap(p1,p2)
	int *p1,*p2;
	{
		int p;
		p=*p1;*p1=*p2;*p2=p;
	}