#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h> 
#include <ctype.h>
#include <string.h>
#define WORDS 5

void encrypt(char cipher[],int shift);
int main()
{	
	int i; char j='a';int k=0;
	char a[2][26]={0};
	char cipher[100];

	srand((unsigned)time(0));

	for(i=0;i<26;i++)
	{	
		a[0][i]=j;
		j++;
	}
	for(i=0;i<26;i++)
	{	
		a[1][i]=rand()%26+97;
		for(j=0;j<i;j++)
		{	
			if(a[1][i]==a[1][j])
				i--;
		}
	}

	for(i=0;i<26;i++)
		printf("%c",a[0][i]);

	printf("\n");

	for(i=0;i<26;i++)
		printf("%c", a[1][i]);

	printf("\n문자열을 입력하시오: ");
	gets(cipher);
		
	return 0;
}
void encrypt(char cipher[],int shift)
{

}


/*
int check(char s[], char a[], char ch);
int main()
{
	char solution[100]="meet at midnight";
	char answer[100]="____ __ ________";
	char ch;

	while(1)
	{
		printf("문자열을 입력하시오: %s \n",answer);
		printf("글자를 추측하시오: ");
		ch=getchar();
		if(check(solution,answer,ch)==1)
			break;
		fflush(stdin);
	}

	return 0;
}
int check(char s[], char a[], char ch)
{
	int i;

	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]==ch)
			a[i]=ch;
	}
	if(strcmp(s,a)==0)	return 1;
	else return 0;
}
*/

/*
void encrypt(char cipher[],int shift);
void decrypt(char cipher[], int shift);
int main()
{
	char cipher[100];
	int shift=3;

	printf("문자열을 입력하시오: ");
	gets(cipher);
	encrypt(cipher,shift);
	decrypt(cipher,shift);
	return 0;
}
void encrypt(char cipher[],int shift)
{
	int i=0;

	while(cipher[i]!='\0')
	{
		if(islower(cipher[i])!=0)
		{
			cipher[i]+=shift;
			if(cipher[i]>'z')
				cipher[i]-=26;
		}
		i++;
	}
	printf("암호화된 문자열: %s\n", cipher);

}
void decrypt(char cipher[], int shift)
{
	int i=0;
	while(cipher[i]!='\0')
	{
		if(islower(cipher[i])!=0)
		{
			cipher[i]-=shift;
			if(cipher[i]<'a')
				cipher[i]+=26;
		}
		i++;
	}
	printf("복호화된 문자열: %s\n",cipher);
}
*/


/*
int main()
{
	int i,index;
	char dic[WORDS][2][30]={
		{"book","책"},
		{"boy","소년"},
		{"computer","컴퓨터"},
		{"language","언어"},
		{"rain","비"}
	};
	char word[30];
	printf("단어를 입력하시오:");
	scanf("%s",word);

	index=0;
	for(i=0;i<WORDS;i++)
	{
		if(strcmp(dic[index][0],word)==0)
		{
			printf("%s: %s\n",word,dic[index][1]);
			return 0;
		}
		index++;
	}
	printf("사전에서 발견되지 않았습니다.\n");
	return 0;
}
*/





/*
int main()
{
	int i;
	char menu[5][10]={
		"init",
		"open",
		"close",
		"read",
		"write"
	};
	for(i=0;i<5;i++)
		printf("%d 번째 메뉴: %s \n", i,menu[i]);

	return 0;
}
*/






/*
void strcpy2(char dst[],char src[]);	//문자열 복사 함수
int strlen2(char src[]);	//문자열 길이 함수
int strcmp2(char src[],char dst[]);//문자열 비교 함수

int main(void)
{
	char src[]="the worst things to eat before you sleep";
	char dst[100];
	
	strcpy2(dst,src);
	printf("원본 문자열=%s\n",src);
	printf("복사된 문자열=%s\n",dst);
	printf("%s의 문자열의 길이는 %d입니다.\n", src,strlen2(src));

	if(strcmp2(src,dst)==0)
		printf("두 배열은 같다\n");
	else if(strcmp2(src,dst)>0)
		printf("첫 번째 배열이 더 크다\n");
	else
		printf("두 번 째 배열이 더 크다\n");
	
	return 0;
}
void strcpy2(char dst[],char src[])	//문자열 복사 함수
{
	int i;
	for(i=0;src[i]!=NULL;i++)
		dst[i]=src[i];
	dst[i]=NULL;
}
int strlen2(char src[])	//문자열 길이 함수
{
	int i=0;
	while(src[i]!=NULL)
		i++;

	return i;
}
int strcmp2(char src[],char dst[])		//문자열 비교 함수
{
	int i=0;
	while(1)
	{
		if(src[i]>dst[i])
			return 1;
		else if(src[i]<dst[i])
			return -1;

		if(src[i]==NULL &&dst[i]==NULL)
			return 0;
		i++;
	}
	
	

}
*/