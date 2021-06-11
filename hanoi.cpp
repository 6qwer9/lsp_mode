#include<stdio.h>
int k=0;
int main()
{
	void hanoi(int n,char one,char two,char three);
	int m;
	scanf("%d",&m);
	hanoi(m,'A','B','C');
	printf("\n%d",k); 
	return 0;
}

void hanoi(int n,char one,char two,char three) //将n个盘子从one借助two移动到three 
{
	void move(char x,char y);
	if(n==1) 
		move(one,three);
	else
	{
		hanoi(n-1,one,three,two);
		move(one,three);
		hanoi(n-1,two,one,three);
	}
}

void move(char x,char y ) //将x移动到y 
{
	k++;
}
