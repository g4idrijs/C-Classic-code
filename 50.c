//题目：#include 的应用练习　　　
//1.程序分析：
//2.程序源代码：
#include <stdio.h>

#define LAG >
#define SMA <
#define EQ ==
//#include "test.h" /*内容为上面的宏定义*/

int main(int argc, char *argv[]) {
	int i=10;
	int j=20;
	if(i LAG j)
		printf("\40: %d larger than %d \n",i,j);
	else if(i EQ j)
		printf("\40: %d equal to %d \n",i,j);
	else if(i SMA j)
		printf("\40:%d smaller than %d \n",i,j);
	else
		printf("\40: No such value.\n");
	return 0;
}