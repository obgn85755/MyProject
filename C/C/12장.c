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

	printf("\n���ڿ��� �Է��Ͻÿ�: ");
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
		printf("���ڿ��� �Է��Ͻÿ�: %s \n",answer);
		printf("���ڸ� �����Ͻÿ�: ");
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

	printf("���ڿ��� �Է��Ͻÿ�: ");
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
	printf("��ȣȭ�� ���ڿ�: %s\n", cipher);

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
	printf("��ȣȭ�� ���ڿ�: %s\n",cipher);
}
*/


/*
int main()
{
	int i,index;
	char dic[WORDS][2][30]={
		{"book","å"},
		{"boy","�ҳ�"},
		{"computer","��ǻ��"},
		{"language","���"},
		{"rain","��"}
	};
	char word[30];
	printf("�ܾ �Է��Ͻÿ�:");
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
	printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
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
		printf("%d ��° �޴�: %s \n", i,menu[i]);

	return 0;
}
*/






/*
void strcpy2(char dst[],char src[]);	//���ڿ� ���� �Լ�
int strlen2(char src[]);	//���ڿ� ���� �Լ�
int strcmp2(char src[],char dst[]);//���ڿ� �� �Լ�

int main(void)
{
	char src[]="the worst things to eat before you sleep";
	char dst[100];
	
	strcpy2(dst,src);
	printf("���� ���ڿ�=%s\n",src);
	printf("����� ���ڿ�=%s\n",dst);
	printf("%s�� ���ڿ��� ���̴� %d�Դϴ�.\n", src,strlen2(src));

	if(strcmp2(src,dst)==0)
		printf("�� �迭�� ����\n");
	else if(strcmp2(src,dst)>0)
		printf("ù ��° �迭�� �� ũ��\n");
	else
		printf("�� �� ° �迭�� �� ũ��\n");
	
	return 0;
}
void strcpy2(char dst[],char src[])	//���ڿ� ���� �Լ�
{
	int i;
	for(i=0;src[i]!=NULL;i++)
		dst[i]=src[i];
	dst[i]=NULL;
}
int strlen2(char src[])	//���ڿ� ���� �Լ�
{
	int i=0;
	while(src[i]!=NULL)
		i++;

	return i;
}
int strcmp2(char src[],char dst[])		//���ڿ� �� �Լ�
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