//题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。
//	已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，
//	c说他不和x,z比，请编程序找出三队赛手的名单。 
//1.程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，
//	则表明此数不是素数，反之是素数。 　　　　　　
//2.程序源代码：
#include <stdio.h>

int main(int argc, char *argv[]) {
	char i,j,k;/*i是a的对手，j是b的对手，k是c的对手*/
	for(i='x';i<='z';i++)
	for(j='x';j<='z';j++){
		if(i!=j)
		for(k='x';k<='z';k++){
			if(i!=k&&j!=k){
				if(i!='x'&&k!='x'&&k!='z')
					printf("order is a--%c\tb--%c\tc--%c\n",i,j,k);
			}
		}
	}
	return 0;
}