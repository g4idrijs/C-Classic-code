//题目：学习使用external的用法。
//1.程序分析：
//2.程序源代码

#include <stdio.h>

int a,b,c;
void add(){
	int a;
	a=3;
	c=a+b;
}

int main(int argc, char *argv[]) {
	a=b=4;
	add();
	printf("The value of c is equal to %d\n",c);
	return 0;
}