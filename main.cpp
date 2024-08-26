#include<stdio.h>
int main(void)
{ 
	printf("鸡兔同笼计算器（试用版）\n"); 
	char rabbit_foot=4,chick_foot=2,all_foot,e_foot;//每只鸡兔的脚数 
	char rabbit,chick;//鸡兔 
	char all_head,e_head,ez_head;//总只数 
	char rabbit_number,chick_number;//鸡兔只数 
	char fooot/**/,chick_rabbit,rabbit_chick/*兔子减鸡*/;
	int zhucema,a=0,b;
	
	printf("请输入总脚数：");
	scanf("%d",&all_foot);
	printf("请输入总只数：");
	scanf("%d",&all_head);
	rabbit_chick=rabbit_foot-chick_foot;
	chick_rabbit=chick_foot-rabbit_foot;
	while(1==1)
	{
		if(a>=1);
		{
			printf("使用次数已到，请输入注册码：\n");
			scanf("%s",&zhucema);
			b=zhucema*10-zhucema+1;
			if(b==12) 
			{
				a=0;
			}
			else 
			{
				printf("注册码错误，请重试！\n"); 
			}
		}
		
		if(rabbit_foot>chick_foot&&a<1)
		{
			e_head=rabbit_foot*all_head;
			ez_head=e_head-all_head;
			chick_number=ez_head/rabbit_chick;
			rabbit_number=all_head-chick_number;
			
			printf("兔子%d只，鸡%d只",rabbit_number,chick_number);
			a=a++;
		}
		else
		{
			printf("qqq");
		}
	}	
}
