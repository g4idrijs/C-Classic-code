//题目：学习使用按位异或 ^ 。　　　
//1.程序分析：0^0=0; 0^1=1; 1^0=1; 1^1=0
//2.程序源代码：
#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b;
	a=077;
	b=a^3;
	printf("\40: The a & b(decimal) is %d \n",b);
	b^=7;
	printf("\40: The a & b(decimal) is %d \n",b);
	return 0;
}