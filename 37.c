//题目：对10个数进行排序
//1.程序分析：可以利用选择法，即从后9个比较过程中，
//	选择一个最小的与第一个元素交换，下次类推，
//	即用第二个元素与后8个进行比较，并进行交换。 　　　　　　 
//2.程序源代码：
#include <stdio.h>
#define N 10

int main(int argc, char *argv[]) {
	int i,j,min,tem,a[N];
	/*input data*/
	printf("please input ten num:\n");
	for(i=0;i<N;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");
	/*sort ten num*/
	for(i=0;i<N-1;i++){
		min=i;
		for(j=i+1;j<N;j++)
			if(a[min]>a[j]) min=j;
				tem=a[i];
		a[i]=a[min];
		a[min]=tem;
	}
	/*output data*/
	printf("After sorted \n");
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	return 0;
}