//题目：学习使用register定义变量的方法。
//1.程序分析：
//2.程序源代码：
#include <stdio.h>

int main(int argc, char *argv[]) {
	register int i;
	int tmp=0;
	for(i=1;i<=100;i++)
		tmp+=i;
	printf("The sum is %d\n",tmp);
	return 0;
}