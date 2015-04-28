#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
void encrypt(char cipher[], int shift);
void decrypt(char cipher[], int shift);
char pyc[2][53];
int main (void) {
	char cipher[50];
	int shift=3, sel, i, j;
	srand(time(0));
	for(i=0;i<52;i++)
		if(i<26)
			pyc[0][i]=65+i;
		else
		    pyc[0][i]=97+i-26;
	

	for(i=0;i<52;i++)
	{
		if(i<26)
		{
			pyc[1][i]=rand()%26+65;
		for(j=0;j<i;j++)
			if(pyc[1][i] == pyc[1][j])
			i--;
		}
		else
			{
			pyc[1][i]=rand()%26+97;
		for(j=0;j<i;j++)
			if(pyc[1][i] == pyc[1][j])
			i--;
		}

	}
	printf("%s \n",pyc[0]); 
	printf("%s \n",pyc[1]); 

	while(1)
	{
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(cipher); // ���� ��ü �Է�
	printf("1-��ȣȭ.\n");
	printf("2-��ȣȭ.\n");
	printf("��ȣ�� �����ϼ���.\n");
	scanf("%d",&sel);
	switch(sel)
	{
	case 1 : encrypt (cipher, shift);
		printf("��ȣȭ�� ���ڿ�: %s\n", cipher);
		return 0;
	case 2 : encrypt (cipher, shift);
  			 decrypt (cipher, shift); 
			 printf("��ȣȭ�� ���ڿ�: %s\n", cipher);
			 return 0;
	default : printf("�ٽ� �Է��Ͻÿ�\n ");
	}
	}
	return 0;
}

void encrypt (char cipher[], int shift) {
	int i = 0,j=0;
	for(i=0;i<strlen(cipher);i++){		
		for(j=0;j<52;j++)
		{
			if(cipher[i] == pyc[0][j])
			{
			cipher[i] = pyc[1][j];
			break;
			}
		}
	}

}

void decrypt (char cipher[], int shift) {
	int i = 0,j=0;
	for(i=0;i<strlen(cipher);i++){		
		for(j=0;j<52;j++)
		{
			if(cipher[i] == pyc[1][j])
			{
			cipher[i] = pyc[0][j];
			break;
			}
		}
	}
	
}

