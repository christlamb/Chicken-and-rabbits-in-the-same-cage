#include<stdio.h>
int main(void)
{ 
	printf("����ͬ�������������ð棩\n"); 
	char rabbit_foot=4,chick_foot=2,all_foot,e_foot;//ÿֻ���õĽ��� 
	char rabbit,chick;//���� 
	char all_head,e_head,ez_head;//��ֻ�� 
	char rabbit_number,chick_number;//����ֻ�� 
	char fooot/**/,chick_rabbit,rabbit_chick/*���Ӽ���*/;
	int zhucema,a=0,b;
	
	printf("�������ܽ�����");
	scanf("%d",&all_foot);
	printf("��������ֻ����");
	scanf("%d",&all_head);
	rabbit_chick=rabbit_foot-chick_foot;
	chick_rabbit=chick_foot-rabbit_foot;
	while(1==1)
	{
		if(a>=1);
		{
			printf("ʹ�ô����ѵ���������ע���룺\n");
			scanf("%s",&zhucema);
			b=zhucema*10-zhucema+1;
			if(b==12) 
			{
				a=0;
			}
			else 
			{
				printf("ע������������ԣ�\n"); 
			}
		}
		
		if(rabbit_foot>chick_foot&&a<1)
		{
			e_head=rabbit_foot*all_head;
			ez_head=e_head-all_head;
			chick_number=ez_head/rabbit_chick;
			rabbit_number=all_head-chick_number;
			
			printf("����%dֻ����%dֻ",rabbit_number,chick_number);
			a=a++;
		}
		else
		{
			printf("qqq");
		}
	}	
}
