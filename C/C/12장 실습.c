#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h> 
#include <ctype.h>
#include <string.h>

//16
int main()
{
	char s[50];int j,k,i=0;
	printf("�����ϰ� ���� �ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets(s);
	
	
		j=0;
		while(1){	
			Sleep(300);
			system("cls");
			if(j>strlen(s)-1)
				j=0;			
			for(i=j;i<strlen(s);i++)
				printf("%c",s[i]);
			if(strlen(s)-j<strlen(s)){
				for(k=0;k<j;k++)
					printf("%c",s[k]);
			}
			
			printf("\n");
			j++;
			
		}
	
	printf("\n");
	return 0;
}



/*//15
int main()
{
	char s[4];  int x,y;
	printf("������ �Է��Ͻÿ�:");
	scanf("%s %d %d",s,&x,&y);

	if(strcmp(s,"add")==0)
		printf("������ ���: %d\n",x+y);
	else if(strcmp(s,"sub")==0)
		printf("������ ���: %d\n",x-y);
	else if(strcmp(s,"mul")==0)
		printf("������ ���: %d\n",x*y);
	else if(strcmp(s,"div")==0)
		printf("������ ���: %d\n",x/y);

	return 0;
}
*/

/*//14
int main()
{
	char s[100]; char x[10]; char y[10]; char *token;
	printf("���ڿ��� �Է��Ͻÿ�:");
	gets(s);
	printf("ã�� ���ڿ�:");
	gets(x);
	printf("�ٲ� ���ڿ�");
	gets(y);
	token=strtok(s, " ");

	while(token!=NULL){
		if(strcmp(token,x)!=0)
			printf("%s ", token);
		else
			printf("%s ",y);
		token=strtok(NULL, " ");
	}

	return 0;
}
*/

/*//13
int str_chr(char *s,char c);
int main()
{
	char s[50]; char c; int num;
	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets(s);
	num=str_chr(s,'.')+str_chr(s,',');

	printf("�������� ������ %d�Դϴ�.\n",num);
	return 0;
}
int str_chr(char *s,char c)
{	
	int cnt=0;
	while(*s != NULL){
		if(*s++ == c)
			cnt++;
		
	}
	return cnt;
}
*/

/*//12
int main()
{	
	char s[50]; char *x[4]={""}; int i=0,j;
	printf("���� �̸��� �Է��Ͻÿ�: ");
	gets(s);

	while(s[i]!=NULL){
		if(isupper(s[i]))
			s[i]=tolower(s[i]);
		i++;
	}

	x[0] = strtok(s, " ");
	i=0;
	while(x[i]!=NULL){
		x[i+1]=strtok(NULL, " ");
		
		i++;
	}
	printf("%s %s, %s",x[1],x[2],x[0]);
	return 0;
}
*/

/*//11
int main()
{
	char s[100];  char *x[10]={""}; int i=0,j;
	printf("���ڿ��� �Է��Ͻÿ�:");
	gets(s);

	x[0] = strtok(s, " ");
	
	
	while(x[i]!=NULL){
		x[i+1]=strtok(NULL, " ");
		
		i++;
	}
	for(j=i-1;j>=0;j--){
		printf("%s ",x[j]);
	}
	return 0;
}
*/



/*//10
int main()
{
	char s[100]; int i=0; int cnt=0;
	printf("���ڿ��� �Է��Ͻÿ�:");
	gets(s);
	
	while(s[i]!=NULL){
		if(isupper(s[i]))
			s[i]=tolower(s[i]);
		i++;
	}
	i=0;
	
	while(i<=(strlen(s)/2)){
		if(s[i]==s[strlen(s)-1-i])
			cnt++;
		i++;
	}
	if(cnt==(strlen(s)/2)+1)
		printf("ȸ���Դϴ�.\n");
	else
		printf("ȸ���� �ƴմϴ�.\n");


	return 0;
}
*/


/*//9
int main()
{
	char s[100]=""; 
	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets(s);
	
	if(islower(s[0]))
		s[0]=toupper(s[0]);
	if(s[strlen(s)-1]!='.'){	
		s[strlen(s)]='.';
		s[strlen(s)+1]='\0';
	}
	printf("��� �ؽ�Ʈ ���: ");
	printf("%s\n",s);

	return 0;
}
*/


/*//8
int main()
{
	char s[100]; char *token;int cnt=0;
	printf("���ڿ��� �Է��Ͻÿ�:");
	gets(s);

	token=strtok(s," ");
	

	while(token!=NULL){
		token= strtok(NULL," ");
		cnt++;
	}
	printf("�ܾ��� ���� %d�Դϴ�.\n",cnt);
	return 0;
}
*/


/*//7
void get_response(char *prompt);
int main()
{
	char *prompt="������ �Ͻðڽ��ϱ�?";
	get_response(prompt);
	return 0;
}
void get_response(char *prompt)
{
	int i=0;
	char res[10];
	puts(prompt);
	gets(res);

	while(res[i]!=NULL){
		res[i] = tolower(res[i]);
		i++;
	}
	if(strcmp(res,"yes")==0||strcmp(res,"ok")==0)
		printf("�������� �亯\n");
	else if(strcmp(res,"no")==0)
		printf("�������� �亯\n");
}
*/

/*//6
void str_upper(char s[100]);
int main()
{
	char s[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(s);

	str_upper(s);
	return 0;
}
void str_upper(char s[100])
{
	int i=0;
	while(s[i]!=NULL){
		if(islower(s[i])!=0){
			s[i]=toupper(s[i]);
		}
		i++;
	}
	printf("��ȯ�� ���ڿ�:%s\n",s);
}
*/


/*//5
int main()
{
	char c;

	while(1){
		
		printf("\n���ڸ� �Է��Ͻÿ�:");
		c=getchar();	fflush(stdin);

		if(c=='.')
			break;
		else if(isalpha(c)==0){
			printf("�ٽ� �Է��Ͻÿ�");
			continue;
		}
		else if(islower(c)!=0)
			putchar(toupper(c));
		else if(isupper(c)!=0)
			putchar(tolower(c));
	}
	return 0;
}
*/

/*//4
int str_chr(char *s,char c);
int main()
{	int i=0;
	char *s;	char c;char str[100];
	s = str;
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(s);
	c= 'a';
	while(c>='a' && c<='z'){
		if((str_chr(s,c))>0){
			printf("%c: %d\n",c,str_chr(s,c));
		}
		c++;
		
	}
	return 0;
}
int str_chr(char *s,char c)
{	
	int cnt=0;
	while(*s != NULL){
		if(*s++ == c)
			cnt++;
		
	}
	return cnt;
}
*/


/*//3
int str_chr(char *s,char c);
int main()
{	
	char *s;	char c;char str[100];
	s = str;
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(s);
	
	printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c",&c);

	printf("%c�� ����:%d\n",c,str_chr(s,c));
	return 0;
}
int str_chr(char *s,char c)
{	
	int cnt=0;
	while(*s != NULL){
		if(*s++ == c)
			cnt++;
		
	}
	return cnt;
}
*/


/*//2
void str(char input[50],char str[50]);
int main()
{	
	int i;
	char input[50];char in[50];
	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�:");
	gets(input);

	str(input,in);
	return 0;
}
void str(char input[50],char str[50])
{	
	int i=0;int j=0;
	while(input[i]!=NULL){
		if(input[i]!=' ')
			str[j]=input[i];		
		else
			j--;
		
		j++;
		i++;
	}
	str[j]=NULL;
	puts(str);
}
*/


/*//1
int main()
{	
	char input;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &input);
	printf("�ƽ�Ű �ڵ� ��=%d\n",input);
	

	return 0;
}
*/