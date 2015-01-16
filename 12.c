// 题目：判断101-200之间有多少个素数，并输出所有素数。
// 1.程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，
// 		如果能被整除，则表明此数不是素数，反之是素数。 　　　　　　
// 2.程序源代码：
#include "math.h"
int main(){
	int m,i,k,h=0,leap=1;
	printf("\n");
	for(m=101;m<=200;m++){
		k=sqrt(m+1);
		for(i=2;i<=k;i++)
			if(m%i==0){
				leap=0;break;
			}
			if(leap){
				printf("%-4d",m);
				h++;
				if(h%10==0)
					printf("\n");
			}
		leap=1;
	}
	printf("\nThe total is %d",h);
	return 0;
}