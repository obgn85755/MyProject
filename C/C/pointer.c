#include <stdio.h>

void print_reverse(char a[], int n);
int main(void)
{	int i=0; 

	char a[100] = {0};
	scanf("%s", a);

	while(a[i]!=NULL)
		i++;
	
	print_reverse(a,i);
	return 0;
}
void print_reverse(char a[], int i)
{
	char *p = a +i-1;
	while(p>=a)
		printf("%c", *p--);
	printf("\n");


}