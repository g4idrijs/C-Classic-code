// 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
// 1.程序分析：利用辗除法。
// 2.程序源代码：
int main(){
	int a,b,num1,num2,temp;
	printf("please input two numbers:\n");
	scanf("%d,%d",&num1,&num2);
	if(num1){
		temp=num1;
		num1=num2;
		num2=temp;
	}
	a=num1;
	b=num2;
	while(b!=0){/*利用辗除法，直到b为0为止*/
		temp=a%b;
		a=b;
		b=temp;
	}
	printf("gongyueshu:%d\n",a);
	printf("gongbeishu:%d\n",num1*num2/a);
	return 0;
}
