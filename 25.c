//题目：求1+2!+3!+...+20!的和
//1.程序分析：此程序只是把累加变成了累乘。 
//2.程序源代码：
#include <stdio.h>

int main(int argc, char *argv[]) {
	float n,s=0,t=1;
	for(n=1;n<=20;n++){
		t*=n;
		s+=t;
	}
	printf("1+2!+3!...+20!=%e\n",s);
	return 0;
}