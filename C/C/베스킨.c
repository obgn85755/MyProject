#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h> 
#include <ctype.h>
#include <string.h>

int main()
{	
	int input,com,person,min=0;

	srand((unsigned)time(0));
	printf("마지막 데이터 입력 : ");
	scanf("%d",&input);
	
	while(1){
		if(input-min>4)
			com=rand()%3+1+min;
		else if((input-min)==4)
			com = min + 3;
		else if((input-min)==3)
			com = min + 2;
		else if((input-min)<=2)
			com = min + 1;

		printf("com : %d\n",com);
		min = com;

		if(com>=input){
			printf("사람 승 : %d \n",person);
			break;
		}
		printf("사용자 입력(%d부터 %d까지) : ",com+1,com+3);
		
		do{
			scanf("%d",&person);
			if(person-min>3 || person<=min){
				printf("다시 입력해주세요\n");
				printf("사용자 입력(%d부터 %d까지) : ",com+1,com+3);
			}
			else break;
		}while(1);

		min=person;
		if(person>=input){
			printf("컴퓨터 승 : %d \n",com);
			break;
		}
	}

	return 0;
}