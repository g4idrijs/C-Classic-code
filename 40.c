//题目：将一个数组逆序输出。
//1.程序分析：用第一个与最后一个交换。
//2.程序源代码：
#include <stdio.h>
#define N 5

int main(int argc, char *argv[]) {
	int a[N]={9,6,5,4,1},i,temp;
	printf("\n original array:\n");
	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	for(i=0;i<N/2;i++){
		temp=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=temp;
	}
	printf("\n sorted array:\n");
	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	return 0;
}