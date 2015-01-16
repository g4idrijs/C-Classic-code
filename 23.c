//题目：打印出如下图案（菱形）
//*
//***
//******
//********
//******
//***
//*
//1.程序分析：先把图形分成两部分来看待，前四行一个规律，
//	后三行一个规律，利用双重for循环，第一层控制行，第二层控制列。 
//2.程序源代码：
#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,j,k;
	for(i=0;i<=3;i++){
		for(j=0;j<=2-i;j++)
			printf(" ");
		for(k=0;k<=2*i;k++)
			printf("*");
		printf("\n");
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=i;j++)
			printf(" ");
		for(k=0;k<=4-2*i;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}