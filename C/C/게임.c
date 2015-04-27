#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h> 

#define LEFT   75      // 좌측방향키
#define RIGHT  77      // 우측방향키
#define UP     72      // 위쪽방향키
#define DOWN   80      // 아래방향키
#define red_potion 101	//레드 포션
#define blue_potion 102	//블루 포션


void opening(void);		//게임 오프닝 함수
void move(void);		//이동함수
void battle(void);		//배틀함수
void game_over(void);	//게임 오버 함수
void treasure(void);	//보물상자 함수
void inventory(void);	//인벤토리 함수
void HP_recover(int HP);//체력 회복 함수

int item[5]={0};	//인벤토리 배열
int pc_HP=30;		//내 체력

int main(void)
{	
	opening();
	move();	

	return 0;
}
void opening(void)	//게임 오프닝 함수
{	
	int select;	//선택

	printf("GAME START\n\n");
	Sleep(1000);
	printf("캐릭터를 선택하세요\n\n");
	Sleep(1000);
	printf("성민(1) 진성(2) 윤철(3) 형규(4) 용은(5) 학재(6)\n");
	scanf("%d", &select);	fflush(stdin);

	printf("선택 완료\n\n");
	Sleep(1000);
	printf("제 1장 모험의 시작\n\n");
	Sleep(1000);
	system("cls");
	
}
void move(void)		//이동함수
{	
	int chance;	//확률
	static int x=0;	//x좌표
	static int y=0;	//y좌표
	char input;

	srand((unsigned)time(0));

	printf("****************조작 설명****************\n");
	printf("좌표 이동:방향키   인벤토리 열기:I\n");
	printf("*****************************************\n");
	
	while(1)
	{
		chance = rand()%10+1;	//1~10
		input= getch();//키보드 입력 받기

		system("cls");

		if(input=='i')	//I를 누르면 인벤토리 함수 호출
		{
			inventory(); 
			continue;
		}	
		else if(input==72)
		{
			y++;
			printf("\n나의 위치: (%d,%d)\n", x,y);
		}
		else if(input==80)
		{
			y--;
			printf("\n나의 위치: (%d,%d)\n", x,y);
		}
		else if(input==75)
		{
			x--;
			printf("\n나의 위치: (%d,%d)\n", x,y);
		}
		else if(input==77)
		{
			x++;
			printf("\n나의 위치: (%d,%d)\n", x,y);
		}
		else
			continue;


		if(chance>=6)	//10% 확률로 보물상자 함수 호출
		{
			treasure();
			continue;
		}	
		if(chance<=2)	//몬스터 출현 확률 20%
			battle();

	}
}
void battle(void)	//배틀함수
{	
	int select;		//선택
	int mon_attack;	//몬스터 공격
	int counterattack; //공격 방어 성공 확률
	int mon_HP=3;	//몬스터 체력

	printf("\n헐 슬라임이다!!!!\n\n");

	while(1)
	{	
		Sleep(500);
		system("cls");
		printf("***************BATTLE***************\n");
		printf("내 체력:%d   몬스터 체력:%d\n",pc_HP, mon_HP);

		if(pc_HP==0)		//내 체력이 0되면 게임 오버 함수 호출
			game_over();

		if(mon_HP==0)		//몬스터 체력이 0되면 빠져나옴
		{
			printf("\n***이겼습니다***\n\n");
			Sleep(700);
			system("cls");
			break;
		}

		printf("공격(1) 방어(2) 인벤토리(3) 선택");
		scanf("%d", &select);fflush(stdin);

		mon_attack=rand()%2+1;		//1 또는 2
		counterattack=rand()%2;		//0 또는 1

		if(select==1 && mon_attack==1)	//둘다 공격일 경우 둘다 HP -1
		{	
			printf("\n서로의 공격이 부딪쳤다!!!\n\n");
			pc_HP--;mon_HP--;
		}

		else if(select==2 && mon_attack==2)	//둘다 방어일 경우 둘다 HP -1
		{	
			printf("\n둘 다 방어 태세를 취했다!!!\n\n");	
			pc_HP--;
			mon_HP--; 
		}

		else if(select==1 && mon_attack==2)	//공격 방어 일 때
		{	
			if(counterattack==0)
			{	
				printf("\n아싸 공격 성공!!\n\n");
				mon_HP--;
			}
			else 
			{	
				printf("\n젠장 내 공격을 막아내다니!!!\n\n");
				pc_HP--;
			}
		}

		else if(select==2 && mon_attack==1)	//방어 공격 일 때
		{	
			if(counterattack==0)
			{	
				printf("\n저 녀석의 공격을 막아냈다\n\n");
				mon_HP--;
			}
			else
			{	
				printf("\n으악! 방어 실패\n\n");
				pc_HP--;
			}
		}
		else if(select==3)
		{
			inventory();
		}
	}
}
void game_over(void) //게임 오버 함수
{
	printf("\n************* G A M E   O V E R *************\n\n");
	exit(0);
}
void treasure(void)		//보물상자 함수
{	
	int chance,potion;int i=1;


	chance= rand()%2+1;	//1,2

	if(chance==1)
	{
		potion=red_potion;
		printf("red potion 발견\n");
	}
	else
	{
		potion=blue_potion; 
		printf("blue potion 발견\n");
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
			printf("인벤토리 공간부족\n");
			break;
		}
		i++;
	}
}
void inventory(void)	//인벤토리 함수
{	
	int i;	
	char input; //선택
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
		printf("인벤토리가 비어있습니다.\n");
	}
	printf("\n");
	printf("-------------------------\n");
	printf("인벤토리 닫기:I \n");
	

	while(1)
	{	
		i=0;
		input= getch();//키보드 입력 받기
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
					printf("red potion 없음\n");
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
void HP_recover(int HP)	//체력 회복 함수
{
	pc_HP += HP;
	printf("HP %d 회복\n", HP);
	if(pc_HP>30)
	{
		pc_HP = 30;
	}
}
