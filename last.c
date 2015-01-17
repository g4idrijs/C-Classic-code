【程序56】
题目：画图，学用circle画圆形。　　　
1.程序分析：
2.程序源代码：
/*circle*/
#include "graphics.h"
main()
{int driver,mode,i;
float j=1,k=1;
driver=VGA;mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(YELLOW);
for(i=0;i<=25;i++)
{
setcolor(8);
circle(310,250,k);
k=k+j;
j=j+0.3;
}
} 
==============================================================
【程序57】
题目：画图，学用line画直线。
1.程序分析：　　　　　　　　　　　
2.程序源代码：
#include "graphics.h"
main()
{int driver,mode,i;
float x0,y0,y1,x1;
float j=12,k;
driver=VGA;mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(GREEN);
x0=263;y0=263;y1=275;x1=275;
for(i=0;i<=18;i++)
{
setcolor(5);
line(x0,y0,x0,y1);
x0=x0-5;
y0=y0-5;
x1=x1+5;
y1=y1+5;
j=j+10;
}
x0=263;y1=275;y0=263;
for(i=0;i<=20;i++)
{
setcolor(5);
line(x0,y0,x0,y1);
x0=x0+5;
y0=y0+5;
y1=y1-5;
}
}
==============================================================
【程序58】
题目：画图，学用rectangle画方形。　　　
1.程序分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位。
2.程序源代码：
#include "graphics.h"
main()
{int x0,y0,y1,x1,driver,mode,i;
driver=VGA;mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(YELLOW);
x0=263;y0=263;y1=275;x1=275;
for(i=0;i<=18;i++)
{
setcolor(1);
rectangle(x0,y0,x1,y1);
x0=x0-5;
y0=y0-5;
x1=x1+5;
y1=y1+5;
}
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(150,40,"How beautiful it is!");
line(130,60,480,60);
setcolor(2);
circle(269,269,137);
}
==============================================================
【程序59】
题目：画图，综合例子。
1.程序分析：
2.程序源代码：
# define PAI 3.1415926
# define B 0.809
# include "graphics.h"
#include "math.h"
main()
{
int i,j,k,x0,y0,x,y,driver,mode;
float a;
driver=CGA;mode=CGAC0;
initgraph(&driver,&mode,"");
setcolor(3);
setbkcolor(GREEN);
x0=150;y0=100;
circle(x0,y0,10);
circle(x0,y0,20);
circle(x0,y0,50);
for(i=0;i<16;i++)
{
　a=(2*PAI/16)*i;
　x=ceil(x0+48*cos(a));
　y=ceil(y0+48*sin(a)*B);
　setcolor(2); line(x0,y0,x,y);}
setcolor(3);circle(x0,y0,60);
/* Make 0 time normal size letters */
settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
outtextxy(10,170,"press a key");
getch();
setfillstyle(HATCH_FILL,YELLOW);
floodfill(202,100,WHITE);
getch();
for(k=0;k<=500;k++)
{
　setcolor(3);
　for(i=0;i<=16;i++)
　{
　　a=(2*PAI/16)*i+(2*PAI/180)*k;
　　x=ceil(x0+48*cos(a));
　　y=ceil(y0+48+sin(a)*B);
　　setcolor(2); line(x0,y0,x,y);
　}
　for(j=1;j<=50;j++)
　{
　　a=(2*PAI/16)*i+(2*PAI/180)*k-1;
　　x=ceil(x0+48*cos(a));
　　y=ceil(y0+48*sin(a)*B);
　　line(x0,y0,x,y);
　}
}
restorecrtmode();
}
==============================================================
【程序60】
题目：画图，综合例子。　　　
1.程序分析：
2.程序源代码：
#include "graphics.h"
#define LEFT 0
#define TOP 0
#define RIGHT 639
#define BOTTOM 479
#define LINES 400
#define MAXCOLOR 15
main()
{
int driver,mode,error;
int x1,y1;
int x2,y2;
int dx1,dy1,dx2,dy2,i=1;
int count=0;
int color=0;
driver=VGA;
mode=VGAHI;
initgraph(&driver,&mode,"");
x1=x2=y1=y2=10;
dx1=dy1=2;
dx2=dy2=3;
while(!kbhit())
{
　line(x1,y1,x2,y2);
　x1+=dx1;y1+=dy1;
　x2+=dx2;y2+dy2;
　if(x1<=LEFT||x1>=RIGHT)
　dx1=-dx1;
　if(y1<=TOP||y1>=BOTTOM)
　　dy1=-dy1;
　if(x2<=LEFT||x2>=RIGHT)
　　dx2=-dx2;
　if(y2<=TOP||y2>=BOTTOM)
　　dy2=-dy2;
　if(++count>LINES)
　{
　　setcolor(color);
　　color=(color>=MAXCOLOR)?0:++color;
　}
}
closegraph();
}
【程序61】
题目：打印出杨辉三角形（要求打印出10行如下图）　　　
1.程序分析：
　　　 　　 1
　　　　　　1 　1
　　　　　　1 　2 　1
　　　　　　1　 3 　3　 1
　　　　　　1　 4　 6 　4 　1
　　　　　　1　 5　 10　10　5 　1　 
2.程序源代码：
main()
{int i,j;
int a[10][10];
printf("\n");
for(i=0;i<10;i++)
　{a[i][0]=1;
　a[i][i]=1;}
for(i=2;i<10;i++)
　for(j=1;j<i;j++)
　a[i][j]=a[i-1][j-1]+a[i-1][j];
for(i=0;i<10;i++)
　{for(j=0;j<=i;j++)
　printf("%5d",a[i][j]);
　printf("\n");
　}
}
==============================================================
【程序62】
题目：学习putpixel画点。
1.程序分析：　　　　　　　　　　　　
2.程序源代码：
#include "stdio.h"
#include "graphics.h"
main()
{
int i,j,driver=VGA,mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(YELLOW);
for(i=50;i<=230;i+=20)
　for(j=50;j<=230;j++)
　putpixel(i,j,1);
for(j=50;j<=230;j+=20)
　for(i=50;i<=230;i++)
　putpixel(i,j,1);
}
==============================================================
【程序63】
题目：画椭圆ellipse　　　
1.程序分析：
2.程序源代码：
#include "stdio.h"
#include "graphics.h"
#include "conio.h"
main()
{
int x=360,y=160,driver=VGA,mode=VGAHI;
int num=20,i;
int top,bottom;
initgraph(&driver,&mode,"");
top=y-30;
bottom=y-30;
for(i=0;i<num;i++)
{
ellipse(250,250,0,360,top,bottom);
top-=5;
bottom+=5;
}
getch();
}
==============================================================
【程序64】
题目：利用ellipse and rectangle 画图。
1.程序分析：
2.程序源代码：
#include "stdio.h"
#include "graphics.h"
#include "conio.h"
main()
{
int driver=VGA,mode=VGAHI;
int i,num=15,top=50;
int left=20,right=50;
initgraph(&driver,&mode,"");
for(i=0;i<num;i++)
{
ellipse(250,250,0,360,right,left);
ellipse(250,250,0,360,20,top);
rectangle(20-2*i,20-2*i,10*(i+2),10*(i+2));
right+=5;
left+=5;
top+=10;
}
getch();
}
==============================================================
【程序65】
题目：一个最优美的图案。　　　
1.程序分析：
2.程序源代码：
#include "graphics.h"
#include "math.h"
#include "dos.h"
#include "conio.h"
#include "stdlib.h"
#include "stdio.h"
#include "stdarg.h"
#define MAXPTS 15
#define PI 3.1415926
struct PTS {
int x,y;
};
double AspectRatio=0.85;
void LineToDemo(void)
{
struct viewporttype vp;
struct PTS points[MAXPTS];
int i, j, h, w, xcenter, ycenter;
int radius, angle, step;
double rads;
printf(" MoveTo / LineTo Demonstration" );
getviewsettings( &vp );
h = vp.bottom - vp.top;
w = vp.right - vp.left;
xcenter = w / 2; /* Determine the center of circle */
ycenter = h / 2;
radius = (h - 30) / (AspectRatio * 2);
step = 360 / MAXPTS; /* Determine # of increments */
angle = 0; /* Begin at zero degrees */
for( i=0 ; i<MAXPTS ; ++i ){ /* Determine circle intercepts */
rads = (double)angle * PI / 180.0; /* Convert angle to radians */
points[i].x = xcenter + (int)( cos(rads) * radius );
points[i].y = ycenter - (int)( sin(rads) * radius * AspectRatio );
angle += step; /* Move to next increment */
}
circle( xcenter, ycenter, radius ); /* Draw bounding circle */
for( i=0 ; i<MAXPTS ; ++i ){ /* Draw the cords to the circle */
for( j=i ; j<MAXPTS ; ++j ){ /* For each remaining intersect */
moveto(points[i].x, points[i].y); /* Move to beginning of cord */
lineto(points[j].x, points[j].y); /* Draw the cord */
} } }
main()
{int driver,mode;
driver=CGA;mode=CGAC0;
initgraph(&driver,&mode,"");
setcolor(3);
setbkcolor(GREEN);
LineToDemo();} 
==============================================================
【程序66】
题目：输入3个数a,b,c，按大小顺序输出。　　　
1.程序分析：利用指针方法。
2.程序源代码：
/*pointer*/
main()
{
int n1,n2,n3;
int *pointer1,*pointer2,*pointer3;
printf("please input 3 number:n1,n2,n3:");
scanf("%d,%d,%d",&n1,&n2,&n3);
pointer1=&n1;
pointer2=&n2;
pointer3=&n3;
if(n1>n2) swap(pointer1,pointer2);
if(n1>n3) swap(pointer1,pointer3);
if(n2>n3) swap(pointer2,pointer3);
printf("the sorted numbers are:%d,%d,%d\n",n1,n2,n3);
}
swap(p1,p2)
int *p1,*p2;
{int p;
p=*p1;*p1=*p2;*p2=p;
}
==============================================================
【程序67】
题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
1.程序分析：谭浩强的书中答案有问题。　　　　　　
2.程序源代码：
main()
{
int number[10];
input(number);
max_min(number);
output(number);
}
input(number)
int number[10];
{int i;
for(i=0;i<9;i++)
　scanf("%d,",&number[i]);
　scanf("%d",&number[9]);
}
max_min(array)
int array[10];
{int *max,*min,k,l;
int *p,*arr_end;
arr_end=array+10;
max=min=array;
for(p=array+1;p<arr_end;p++)
　if(*p>*max) max=p;
　else if(*p<*min) min=p;
　k=*max;
　l=*min;
　*p=array[0];array[0]=l;l=*p;
　*p=array[9];array[9]=k;k=*p;
　return;
}
output(array)
int array[10];
{ int *p;
for(p=array;p<array+9;p++)
　printf("%d,",*p);
printf("%d\n",array[9]);
}
==============================================================
【程序68】
题目：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
1.程序分析：
2.程序源代码：
main()
{
int number[20],n,m,i;
printf("the total numbers is:");
scanf("%d",&n);
printf("back m:");
scanf("%d",&m);
for(i=0;i<n-1;i++)
　scanf("%d,",&number[i]);
scanf("%d",&number[n-1]);
move(number,n,m);
for(i=0;i<n-1;i++)
　printf("%d,",number[i]);
printf("%d",number[n-1]);
}
move(array,n,m)
int n,m,array[20];
{
int *p,array_end;
array_end=*(array+n-1);
for(p=array+n-1;p>array;p--)
　*p=*(p-1);
　*array=array_end;
　m--;
　if(m>0) move(array,n,m);
}
==============================================================
【程序69】
题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
1. 程序分析：
2.程序源代码：
#define nmax 50
main()
{
int i,k,m,n,num[nmax],*p;
printf("please input the total of numbers:");
scanf("%d",&n);
p=num;
for(i=0;i<n;i++)
　*(p+i)=i+1;
　i=0;
　k=0;
　m=0;
　while(m<n-1)
　{
　if(*(p+i)!=0) k++;
　if(k==3)
　{ *(p+i)=0;
　k=0;
　m++;
　}
i++;
if(i==n) i=0;
}
while(*p==0) p++;
printf("%d is left\n",*p);
}
==============================================================
【程序70】
题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。　　　
1.程序分析：
2.程序源代码：
main()
{
int len;
char *str[20];
printf("please input a string:\n");
scanf("%s",str);
len=length(str);
printf("the string has %d characters.",len);
}
length(p)
char *p;
{
int n;
n=0;
while(*p!='\0')
{
　n++;
　p++;
}
return n;
}
【程序71】
题目：编写input()和output()函数输入，输出5个学生的数据记录。
1.程序分析：
2.程序源代码：
#define N 5
struct student
{ char num[6];
　char name[8];
　int score[4];
} stu[N];
input(stu)
struct student stu[];
{ int i,j;
　for(i=0;i<N;i++)
　{ printf("\n please input %d of %d\n",i+1,N);
　　printf("num: ");
　　scanf("%s",stu[i].num);
　　printf("name: ");
　　scanf("%s",stu[i].name);
　　　for(j=0;j<3;j++)
　　　{ printf("score %d.",j+1);
　　　　scanf("%d",&stu[i].score[j]);
　　　}
　　printf("\n");
　}
}
print(stu)
struct student stu[];
{ int i,j;
printf("\nNo. Name Sco1 Sco2 Sco3\n");
for(i=0;i<N;i++)
{ printf("%-6s%-10s",stu[i].num,stu[i].name);
　for(j=0;j<3;j++)
　　printf("%-8d",stu[i].score[j]);
　printf("\n");
}
}
main()
{
　input();
　print();
}
==============================================================
【程序72】
题目：创建一个链表。
1.程序分析：　　　　　　　　　　　
2.程序源代码：
/*creat a list*/
#include "stdlib.h"
#include "stdio.h"
struct list
{ int data;
struct list *next;
};
typedef struct list node;
typedef node *link;
void main()
{ link ptr,head;
int num,i;
ptr=(link)malloc(sizeof(node));
ptr=head;
printf("please input 5 numbers==>\n");
for(i=0;i<=4;i++)
{
　scanf("%d",&num);
　ptr->data=num;
　ptr->next=(link)malloc(sizeof(node));
　if(i==4) ptr->next=NULL;
　else ptr=ptr->next;
}
ptr=head;
while(ptr!=NULL)
{ printf("The value is ==>%d\n",ptr->data);
　ptr=ptr->next;
}
}
==============================================================
【程序73】
题目：反向输出一个链表。　　　
1.程序分析：
2.程序源代码：
/*reverse output a list*/
#include "stdlib.h"
#include "stdio.h"
struct list
{ int data;
　struct list *next;
};
typedef struct list node;
typedef node *link;
void main()
{ link ptr,head,tail;　
　int num,i;
　tail=(link)malloc(sizeof(node));
　tail->next=NULL;
　ptr=tail;
　printf("\nplease input 5 data==>\n");
　for(i=0;i<=4;i++)
　{
　　scanf("%d",&num);
　　ptr->data=num;
　　head=(link)malloc(sizeof(node));
　　head->next=ptr;
　　ptr=head;
　}
ptr=ptr->next;
while(ptr!=NULL)
{ printf("The value is ==>%d\n",ptr->data);
　ptr=ptr->next;
}}
==============================================================
【程序74】
题目：连接两个链表。
1.程序分析：
2.程序源代码：
#include "stdlib.h"
#include "stdio.h"
struct list
{ int data;
struct list *next;
};
typedef struct list node;
typedef node *link;
link delete_node(link pointer,link tmp)
{if (tmp==NULL) /*delete first node*/
　return pointer->next;
else
{ if(tmp->next->next==NULL)/*delete last node*/
　　tmp->next=NULL;
　else /*delete the other node*/
　　tmp->next=tmp->next->next;
　return pointer;
}
}
void selection_sort(link pointer,int num)
{ link tmp,btmp;
　int i,min;
　for(i=0;i<num;i++)
　{
　tmp=pointer;
　min=tmp->data;
　btmp=NULL;
　while(tmp->next)
　{ if(min>tmp->next->data)
　{min=tmp->next->data;
　　btmp=tmp;
　}
　tmp=tmp->next;
　}
printf("\40: %d\n",min);
pointer=delete_node(pointer,btmp);
}
}
link create_list(int array[],int num)
{ link tmp1,tmp2,pointer;
int i;
pointer=(link)malloc(sizeof(node));
pointer->data=array[0];
tmp1=pointer;
for(i=1;i<num;i++)
{ tmp2=(link)malloc(sizeof(node));
　tmp2->next=NULL;
　tmp2->data=array[i];
　tmp1->next=tmp2;
　tmp1=tmp1->next;
}
return pointer;
}
link concatenate(link pointer1,link pointer2)
{ link tmp;
tmp=pointer1;
while(tmp->next)
　tmp=tmp->next;
tmp->next=pointer2;
return pointer1;
}
void main(void)
{ int arr1[]={3,12,8,9,11};
　link ptr;
　ptr=create_list(arr1,5);
　selection_sort(ptr,5);
}
==============================================================
【程序75】
题目：放松一下，算一道简单的题目。
1.程序分析：
2.程序源代码：
main()
{
int i,n;
for(i=1;i<5;i++)
{ n=0;
　if(i!=1)
　n=n+1;
　if(i==3)
　n=n+1;
　if(i==4)
　n=n+1;
　if(i!=4)
　n=n+1;
　if(n==3)
　　printf("zhu hao shi de shi:%c",64+i);
　}
}
==============================================================
【程序76】
题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)
1.程序分析：
2.程序源代码：
main()
#include "stdio.h"
main()
{
float peven(),podd(),dcall();
float sum;
int n;
while (1)
{
　scanf("%d",&n);
　if(n>1)
　　break;
}
if(n%2==0)
{
　printf("Even=");
　sum=dcall(peven,n);
}
else
{
　printf("Odd=");
　sum=dcall(podd,n);
}
printf("%f",sum);
}
float peven(int n)
{
float s;
int i;
s=1;
for(i=2;i<=n;i+=2)
　s+=1/(float)i;
return(s);
}
float podd(n)
int n;
{
float s;
int i;
s=0;
for(i=1;i<=n;i+=2)
　s+=1/(float)i;
return(s);
}
float dcall(fp,n)
float (*fp)();
int n;
{
float s;
s=(*fp)(n);
return(s);
}
==============================================================
【程序77】
题目：填空练习（指向指针的指针）
1.程序分析：　　　　　
2.程序源代码：
main()
{ char *s[]={"man","woman","girl","boy","sister"};
char **q;
int k;
for(k=0;k<5;k++)
{　　　　　　　;/*这里填写什么语句*/
　printf("%s\n",*q);
}
}
==============================================================
【程序78】
题目：找到年龄最大的人，并输出。请找出程序中有什么问题。
1.程序分析：
2.程序源代码：
#define N 4
#include "stdio.h"
static struct man
{ char name[20];
int age;
} person[N]={"li",18,"wang",19,"zhang",20,"sun",22};
main()
{struct man *q,*p;
int i,m=0;
p=person;
for (i=0;i<N;i++)
{if(m<p->age)
　q=p++;
　m=q->age;}
printf("%s,%d",(*q).name,(*q).age);
}
==============================================================
【程序79】
题目：字符串排序。
1.程序分析：
2.程序源代码：
main()
{
char *str1[20],*str2[20],*str3[20];
char swap();
printf("please input three strings\n");
scanf("%s",str1);
scanf("%s",str2);
scanf("%s",str3);
if(strcmp(str1,str2)>0) swap(str1,str2);
if(strcmp(str1,str3)>0) swap(str1,str3);
if(strcmp(str2,str3)>0) swap(str2,str3);
printf("after being sorted\n");
printf("%s\n%s\n%s\n",str1,str2,str3);
}
char swap(p1,p2)
char *p1,*p2;
{
char *p[20];
strcpy(p,p1);strcpy(p1,p2);strcpy(p2,p);
}
==============================================================
【程序80】
题目：海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子凭据分为五份，多了一个，这只猴子把多的一个扔入海中，拿走了一份。第二只猴子把剩下的桃子又平均分成五份，又多了一个，它同样把多的一个扔入海中，拿走了一份，第三、第四、第五只猴子都是这样做的，问海滩上原来最少有多少个桃子？
1.程序分析：
2.程序源代码：
main()
{int i,m,j,k,count;
for(i=4;i<10000;i+=4)
{ count=0;
m=i;
for(k=0;k<5;k++)
{
　j=i/4*5+1;
　i=j;
　if(j%4==0)
　　count++;
　else
　　break;
}
　i=m;
　if(count==4)
　{printf("%d\n",count);
　　break;}
}
}
【程序81】
题目：809*??=800*??+9*??+1 其中??代表的两位数,8*??的结果为两位数，9*??的结果为3位数。求??代表的两位数，及809*??后的结果。
1.程序分析：
2.程序源代码：
output(long b,long i)
{ printf("\n%ld/%ld=809*%ld+%ld",b,i,i,b%i);
}
main()
{long int a,b,i;
a=809;
for(i=10;i<100;i++)
{b=i*a+1;
if(b>=1000&&b<=10000&&8*i<100&&9*i>=100)
output(b,i); }
}
==============================================================
【程序82】
题目：八进制转换为十进制
1.程序分析：　　　　　　　　　　　
2.程序源代码：
main()
{ char *p,s[6];int n;
p=s;
gets(p);
n=0;
while(*(p)!='\0')
{n=n*8+*p-'0';
p++;}
printf("%d",n);
}
==============================================================
【程序83】
题目：求0—7所能组成的奇数个数。
1.程序分析：
2.程序源代码：
main()
{
long sum=4,s=4;
int j;
for(j=2;j<=8;j++)/*j is place of number*/
{ printf("\n%ld",sum);
if(j<=2)
s*=7;
else
s*=8;
sum+=s;}
printf("\nsum=%ld",sum);
}
==============================================================
【程序84】
题目：一个偶数总能表示为两个素数之和。
1.程序分析：
2.程序源代码：
#include "stdio.h"
#include "math.h"
main()
{ int a,b,c,d;
scanf("%d",&a);
for(b=3;b<=a/2;b+=2)
{ for(c=2;c<=sqrt(b);c++)
if(b%c==0) break;
if(c>sqrt(b))
d=a-b;
else
break;
for(c=2;c<=sqrt(d);c++)
if(d%c==0) break;
if(c>sqrt(d))
printf("%d=%d+%d\n",a,b,d);
}
}
==============================================================
【程序85】
题目：判断一个素数能被几个9整除
1.程序分析：
2.程序源代码：
main()
{ long int m9=9,sum=9;
int zi,n1=1,c9=1;
scanf("%d",&zi);
while(n1!=0)
{ if(!(sum%zi))
n1=0;
else
{m9=m9*10;
sum=sum+m9;
c9++;
}
}
printf("%ld,can be divided by %d \"9\"",sum,c9);
}
==============================================================
【程序86】
题目：两个字符串连接程序
1.程序分析：
2.程序源代码：
#include "stdio.h"
main()
{char a[]="acegikm";
char b[]="bdfhjlnpq";
char c[80],*p;
int i=0,j=0,k=0;
while(a[i]!='\0'&&b[j]!='\0')
{if (a[i] { c[k]=a[i];i++;}
else
c[k]=b[j++];
k++;
}
c[k]='\0';
if(a[i]=='\0')
p=b+j;
else
p=a+i;
strcat(c,p);
puts(c);
}
==============================================================
【程序87】
题目：回答结果（结构体变量传递）
1.程序分析：　　　　　
2.程序源代码：
#include "stdio.h"
struct student
{ int x;
char c;
} a;
main()
{a.x=3;
a.c='a';
f(a);
printf("%d,%c",a.x,a.c);
}
f(struct student b)
{
b.x=20;
b.c='y';
}
==============================================================
【程序88】
题目：读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的＊。
1.程序分析：
2.程序源代码：
main()
{int i,a,n=1;
while(n<=7)
{ do {
　　　scanf("%d",&a);
　　　}while(a<1||a>50);
for(i=1;i<=a;i++)
　printf("*");
printf("\n");
n++;}
getch();
}
==============================================================
【程序89】
题目：某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下：每位数字都加上5,然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。
1.程序分析：
2.程序源代码：
main()
{int a,i,aa[4],t;
scanf("%d",&a);
aa[0]=a%10;
aa[1]=a%100/10;
aa[2]=a%1000/100;
aa[3]=a/1000;
for(i=0;i<=3;i++)
　{aa[i]+=5;
　aa[i]%=10;
　}
for(i=0;i<=3/2;i++)
　{t=aa[i];
　aa[i]=aa[3-i];
　aa[3-i]=t;
　}
for(i=3;i>=0;i--)
printf("%d",aa[i]);
}
==============================================================
【程序90】
题目：专升本一题，读结果。
1.程序分析：
2.程序源代码：
#include "stdio.h"
#define M 5
main()
{int a[M]={1,2,3,4,5};
int i,j,t;
i=0;j=M-1;
while(i {t=*(a+i);
*(a+i)=*(a+j);
*(a+j)=t;
i++;j--;
}
for(i=0;i printf("%d",*(a+i));
}
【程序91】
题目：时间函数举例1
1.程序分析：
2.程序源代码：
#include "stdio.h"
#include "time.h"
void main()
{ time_t lt; /*define a longint time varible*/
lt=time(NULL);/*system time and date*/
printf(ctime(<)); /*english format output*/
printf(asctime(localtime(<)));/*tranfer to tm*/
printf(asctime(gmtime(<))); /*tranfer to Greenwich time*/
}
==============================================================
【程序92】
题目：时间函数举例2
1.程序分析：　　　　　　　　　　　
2.程序源代码：
/*calculate time*/
#include "time.h"
#include "stdio.h"
main()
{ time_t start,end;
int i;
start=time(NULL);
for(i=0;i<3000;i++)
{ printf("\1\1\1\1\1\1\1\1\1\1\n");}
end=time(NULL);
printf("\1: The different is %6.3f\n",difftime(end,start));
}
==============================================================
【程序93】
题目：时间函数举例3
1.程序分析：
2.程序源代码：
/*calculate time*/
#include "time.h"
#include "stdio.h"
main()
{ clock_t start,end;
int i;
double var;
start=clock();
for(i=0;i<10000;i++)
{ printf("\1\1\1\1\1\1\1\1\1\1\n");}
end=clock();
printf("\1: The different is %6.3f\n",(double)(end-start));
}
==============================================================
【程序94】
题目：时间函数举例4,一个猜数游戏，判断一个人反应快慢。
1.程序分析：
2.程序源代码：
#include "time.h"
#include "stdlib.h"
#include "stdio.h"
main()
{char c;
clock_t start,end;
time_t a,b;
double var;
int i,guess;
srand(time(NULL));
printf("do you want to play it.('y' or 'n') \n");
loop:
while((c=getchar())=='y')
{
i=rand()%100;
printf("\nplease input number you guess:\n");
start=clock();
a=time(NULL);
scanf("%d",&guess);
while(guess!=i)
{if(guess>i)
{printf("please input a little smaller.\n");
scanf("%d",&guess);}
else
{printf("please input a little bigger.\n");
scanf("%d",&guess);}
}
end=clock();
b=time(NULL);
printf("\1: It took you %6.3f seconds\n",var=(double)(end-start)/18.2);
printf("\1: it took you %6.3f seconds\n\n",difftime(b,a));
if(var<15)
printf("\1\1 You are very clever! \1\1\n\n");
else if(var<25)
printf("\1\1 you are normal! \1\1\n\n");
else
printf("\1\1 you are stupid! \1\1\n\n");
printf("\1\1 Congradulations \1\1\n\n");
printf("The number you guess is %d",i);
}
printf("\ndo you want to try it again?(\"yy\".or.\"n\")\n");
if((c=getch())=='y')
goto loop;
}
==============================================================
【程序95】
题目：家庭财务管理小程序
1.程序分析：
2.程序源代码：
/*money management system*/
#include "stdio.h"
#include "dos.h"
main()
{
FILE *fp;
struct date d;
float sum,chm=0.0;
int len,i,j=0;
int c;
char ch[4]="",ch1[16]="",chtime[12]="",chshop[16],chmoney[8];
pp: clrscr();
sum=0.0;
gotoxy(1,1);printf("|---------------------------------------------------------------------------|");
gotoxy(1,2);printf("| money management system(C1.0) 2000.03 |");
gotoxy(1,3);printf("|---------------------------------------------------------------------------|");
gotoxy(1,4);printf("| -- money records -- | -- today cost list -- |");
gotoxy(1,5);printf("| ------------------------ |-------------------------------------|");
gotoxy(1,6);printf("| date: -------------- | |");
gotoxy(1,7);printf("| | | | |");
gotoxy(1,8);printf("| -------------- | |");
gotoxy(1,9);printf("| thgs: ------------------ | |");
gotoxy(1,10);printf("| | | | |");
gotoxy(1,11);printf("| ------------------ | |");
gotoxy(1,12);printf("| cost: ---------- | |");
gotoxy(1,13);printf("| | | | |");
gotoxy(1,14);printf("| ---------- | |");
gotoxy(1,15);printf("| | |");
gotoxy(1,16);printf("| | |");
gotoxy(1,17);printf("| | |");
gotoxy(1,18);printf("| | |");
gotoxy(1,19);printf("| | |");
gotoxy(1,20);printf("| | |");
gotoxy(1,21);printf("| | |");
gotoxy(1,22);printf("| | |");
gotoxy(1,23);printf("|---------------------------------------------------------------------------|");
i=0;
getdate(&d);
sprintf(chtime,"%4d.%02d.%02d",d.da_year,d.da_mon,d.da_day);
for(;;)
{
gotoxy(3,24);printf(" Tab __browse cost list Esc __quit");
gotoxy(13,10);printf(" ");
gotoxy(13,13);printf(" ");
gotoxy(13,7);printf("%s",chtime);
j=18;
ch[0]=getch();
if(ch[0]==27)
break;
strcpy(chshop,"");
strcpy(chmoney,"");
if(ch[0]==9)
{
mm:i=0;
fp=fopen("home.dat","r+");
gotoxy(3,24);printf(" ");
gotoxy(6,4);printf(" list records ");
gotoxy(1,5);printf("|-------------------------------------|");
gotoxy(41,4);printf(" ");
gotoxy(41,5);printf(" |");
while(fscanf(fp,"%10s%14s%f\n",chtime,chshop,&chm)!=EOF)
{ if(i==36)
{ getch();
i=0;}
if ((i%36)<17)
{ gotoxy(4,6+i);
printf(" ");
gotoxy(4,6+i);}
else
if((i%36)>16)
{ gotoxy(41,4+i-17);
printf(" ");
gotoxy(42,4+i-17);}
i++;
sum=sum+chm;
printf("%10s %-14s %6.1f\n",chtime,chshop,chm);}
gotoxy(1,23);printf("|---------------------------------------------------------------------------|");
gotoxy(1,24);printf("| |");
gotoxy(1,25);printf("|---------------------------------------------------------------------------|");
gotoxy(10,24);printf("total is %8.1f$",sum);
fclose(fp);
gotoxy(49,24);printf("press any key to.....");getch();goto pp;
}
else
{
while(ch[0]!='\r')
{ if(j<10)
{ strncat(chtime,ch,1);
j++;}
if(ch[0]==8)
{
len=strlen(chtime)-1;
if(j>15)
{ len=len+1; j=11;}
strcpy(ch1,"");
j=j-2;
strncat(ch1,chtime,len);
strcpy(chtime,"");
strncat(chtime,ch1,len-1);
gotoxy(13,7);printf(" ");}
gotoxy(13,7);printf("%s",chtime);ch[0]=getch();
if(ch[0]==9)
goto mm;
if(ch[0]==27)
exit(1);
}
gotoxy(3,24);printf(" ");
gotoxy(13,10);
j=0;
ch[0]=getch();
while(ch[0]!='\r')
{ if (j<14)
{ strncat(chshop,ch,1);
j++;}
if(ch[0]==8)
{ len=strlen(chshop)-1;
strcpy(ch1,"");
j=j-2;
strncat(ch1,chshop,len);
strcpy(chshop,"");
strncat(chshop,ch1,len-1);
gotoxy(13,10);printf(" ");}
gotoxy(13,10);printf("%s",chshop);ch[0]=getch();}
gotoxy(13,13);
j=0;
ch[0]=getch();
while(ch[0]!='\r')
{ if (j<6)
{ strncat(chmoney,ch,1);
j++;}
if(ch[0]==8)
{ len=strlen(chmoney)-1;
strcpy(ch1,"");
j=j-2;
strncat(ch1,chmoney,len);
strcpy(chmoney,"");
strncat(chmoney,ch1,len-1);
gotoxy(13,13);printf(" ");}
gotoxy(13,13);printf("%s",chmoney);ch[0]=getch();}
if((strlen(chshop)==0)||(strlen(chmoney)==0))
continue;
if((fp=fopen("home.dat","a+"))!=NULL);
fprintf(fp,"%10s%14s%6s",chtime,chshop,chmoney);
fputc('\n',fp);
fclose(fp);
i++;
gotoxy(41,5+i);
printf("%10s %-14s %-6s",chtime,chshop,chmoney);
}}} 
==============================================================
【程序96】
题目：计算字符串中子串出现的次数
1.程序分析：
2.程序源代码：
#include "string.h"
#include "stdio.h"
main()
{ char str1[20],str2[20],*p1,*p2;
int sum=0;
printf("please input two strings\n");
scanf("%s%s",str1,str2);
p1=str1;p2=str2;
while(*p1!='\0')
{
if(*p1==*p2)
{while(*p1==*p2&&*p2!='\0')
{p1++;
p2++;}
}
else
p1++;
if(*p2=='\0')
sum++;
p2=str2;
}
printf("%d",sum);
getch();} 
==============================================================
【程序97】
题目：从键盘输入一些字符，逐个把它们送到磁盘上去，直到输入一个#为止。
1.程序分析：　　　　　
2.程序源代码：
#include "stdio.h"
main()
{ FILE *fp;
char ch,filename[10];
scanf("%s",filename);
if((fp=fopen(filename,"w"))==NULL)
{printf("cannot open file\n");
exit(0);}
ch=getchar();
ch=getchar();
while(ch!='#')
{fputc(ch,fp);putchar(ch);
ch=getchar();
}
fclose(fp);
}
==============================================================
【程序99】
题目：有两个磁盘文件A和B,各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排列），输出到一个新文件C中。
1.程序分析：
2.程序源代码：
#include "stdio.h"
main()
{ FILE *fp;
int i,j,n,ni;
char c[160],t,ch;
if((fp=fopen("A","r"))==NULL)
{printf("file A cannot be opened\n");
exit(0);}
printf("\n A contents are :\n");
for(i=0;(ch=fgetc(fp))!=EOF;i++)
{c[i]=ch;
putchar(c[i]);
}
fclose(fp);
ni=i;
if((fp=fopen("B","r"))==NULL)
{printf("file B cannot be opened\n");
exit(0);}
printf("\n B contents are :\n");
for(i=0;(ch=fgetc(fp))!=EOF;i++)
{c[i]=ch;
putchar(c[i]);
}
fclose(fp);
n=i;
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(c[i]>c[j])
{t=c[i];c[i]=c[j];c[j]=t;}
printf("\n C file is:\n");
fp=fopen("C","w");
for(i=0;i<n;i++)
{ putc(c[i],fp);
putchar(c[i]);
}
fclose(fp);
}