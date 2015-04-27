#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h> 

#define LEFT   75      // ��������Ű
#define RIGHT  77      // ��������Ű
#define UP     72      // ���ʹ���Ű
#define DOWN   80      // �Ʒ�����Ű
#define red_potion 101	//���� ����
#define blue_potion 102	//��� ����


void opening(void);		//���� ������ �Լ�
void move(void);		//�̵��Լ�
void battle(void);		//��Ʋ�Լ�
void game_over(void);	//���� ���� �Լ�
void treasure(void);	//�������� �Լ�
void inventory(void);	//�κ��丮 �Լ�
void HP_recover(int HP);//ü�� ȸ�� �Լ�

int item[5]={0};	//�κ��丮 �迭
int pc_HP=30;		//�� ü��

int main(void)
{	
	opening();
	move();	

	return 0;
}
void opening(void)	//���� ������ �Լ�
{	
	int select;	//����

	printf("GAME START\n\n");
	Sleep(1000);
	printf("ĳ���͸� �����ϼ���\n\n");
	Sleep(1000);
	printf("����(1) ����(2) ��ö(3) ����(4) ����(5) ����(6)\n");
	scanf("%d", &select);	fflush(stdin);

	printf("���� �Ϸ�\n\n");
	Sleep(1000);
	printf("�� 1�� ������ ����\n\n");
	Sleep(1000);
	system("cls");
	
}
void move(void)		//�̵��Լ�
{	
	int chance;	//Ȯ��
	static int x=0;	//x��ǥ
	static int y=0;	//y��ǥ
	char input;

	srand((unsigned)time(0));

	printf("****************���� ����****************\n");
	printf("��ǥ �̵�:����Ű   �κ��丮 ����:I\n");
	printf("*****************************************\n");
	
	while(1)
	{
		chance = rand()%10+1;	//1~10
		input= getch();//Ű���� �Է� �ޱ�

		system("cls");

		if(input=='i')	//I�� ������ �κ��丮 �Լ� ȣ��
		{
			inventory(); 
			continue;
		}	
		else if(input==72)
		{
			y++;
			printf("\n���� ��ġ: (%d,%d)\n", x,y);
		}
		else if(input==80)
		{
			y--;
			printf("\n���� ��ġ: (%d,%d)\n", x,y);
		}
		else if(input==75)
		{
			x--;
			printf("\n���� ��ġ: (%d,%d)\n", x,y);
		}
		else if(input==77)
		{
			x++;
			printf("\n���� ��ġ: (%d,%d)\n", x,y);
		}
		else
			continue;


		if(chance>=6)	//10% Ȯ���� �������� �Լ� ȣ��
		{
			treasure();
			continue;
		}	
		if(chance<=2)	//���� ���� Ȯ�� 20%
			battle();

	}
}
void battle(void)	//��Ʋ�Լ�
{	
	int select;		//����
	int mon_attack;	//���� ����
	int counterattack; //���� ��� ���� Ȯ��
	int mon_HP=3;	//���� ü��

	printf("\n�� �������̴�!!!!\n\n");

	while(1)
	{	
		Sleep(500);
		system("cls");
		printf("***************BATTLE***************\n");
		printf("�� ü��:%d   ���� ü��:%d\n",pc_HP, mon_HP);

		if(pc_HP==0)		//�� ü���� 0�Ǹ� ���� ���� �Լ� ȣ��
			game_over();

		if(mon_HP==0)		//���� ü���� 0�Ǹ� ��������
		{
			printf("\n***�̰���ϴ�***\n\n");
			Sleep(700);
			system("cls");
			break;
		}

		printf("����(1) ���(2) �κ��丮(3) ����");
		scanf("%d", &select);fflush(stdin);

		mon_attack=rand()%2+1;		//1 �Ǵ� 2
		counterattack=rand()%2;		//0 �Ǵ� 1

		if(select==1 && mon_attack==1)	//�Ѵ� ������ ��� �Ѵ� HP -1
		{	
			printf("\n������ ������ �ε��ƴ�!!!\n\n");
			pc_HP--;mon_HP--;
		}

		else if(select==2 && mon_attack==2)	//�Ѵ� ����� ��� �Ѵ� HP -1
		{	
			printf("\n�� �� ��� �¼��� ���ߴ�!!!\n\n");	
			pc_HP--;
			mon_HP--; 
		}

		else if(select==1 && mon_attack==2)	//���� ��� �� ��
		{	
			if(counterattack==0)
			{	
				printf("\n�ƽ� ���� ����!!\n\n");
				mon_HP--;
			}
			else 
			{	
				printf("\n���� �� ������ ���Ƴ��ٴ�!!!\n\n");
				pc_HP--;
			}
		}

		else if(select==2 && mon_attack==1)	//��� ���� �� ��
		{	
			if(counterattack==0)
			{	
				printf("\n�� �༮�� ������ ���Ƴ´�\n\n");
				mon_HP--;
			}
			else
			{	
				printf("\n����! ��� ����\n\n");
				pc_HP--;
			}
		}
		else if(select==3)
		{
			inventory();
		}
	}
}
void game_over(void) //���� ���� �Լ�
{
	printf("\n************* G A M E   O V E R *************\n\n");
	exit(0);
}
void treasure(void)		//�������� �Լ�
{	
	int chance,potion;int i=1;


	chance= rand()%2+1;	//1,2

	if(chance==1)
	{
		potion=red_potion;
		printf("red potion �߰�\n");
	}
	else
	{
		potion=blue_potion; 
		printf("blue potion �߰�\n");
	}

	while(1)
	{	
		if(item[0]==0)
		{
			item[0]=potion;
			break;
		}
		else if(item[i-1]!=0 &&item[i]==0)
		{
			item[i]=potion; 
			break;
		}
		else if(i>4)
		{
			printf("�κ��丮 ��������\n");
			break;
		}
		i++;
	}
}
void inventory(void)	//�κ��丮 �Լ�
{	
	int i;	
	char input; //����
	int emptyCount;
	printf("\n");
	printf("--------INVENTORY--------\n\n");
	emptyCount=0;

	for(i=0;i<=4;i++)
	{	
		switch(item[i])
		{	
			case 101:
				printf("red potion\n"); 
				break;
			case 102:
				printf("blue potion\n");	
				break;
			case 0:
				emptyCount++;
		}
	}

	if(emptyCount==5)
	{
		printf("�κ��丮�� ����ֽ��ϴ�.\n");
	}
	printf("\n");
	printf("-------------------------\n");
	printf("�κ��丮 �ݱ�:I \n");
	

	while(1)
	{	
		i=0;
		input= getch();//Ű���� �Է� �ޱ�
		if(input == 'i')
		{
			system("cls");
			break;
		}
		else if(input == 'r')
		{
			while(1)
			{
				if(i>4)
				{
					printf("red potion ����\n");
					break;
				}
				if(item[i]==101)
				{
					item[i]=0;
					HP_recover(10);
					break;
				}
				i++;
				
			}
		}
		else
		{
			continue;
		}
	}
}
void HP_recover(int HP)	//ü�� ȸ�� �Լ�
{
	pc_HP += HP;
	printf("HP %d ȸ��\n", HP);
	if(pc_HP>30)
	{
		pc_HP = 30;
	}
}
