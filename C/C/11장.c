//11
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int k;
void merge(int *A,int *B, int *C, int size);
int main()
{	int i,j,m,temp;int x=0;
	int A[4]={0};
	int B[4]={0};
	int C[8]={0};
	    
	srand((unsigned)time(0));
	for(m=0;m<4;m++)
	{
		A[m]=rand()%10;
		for(x=0;x<m;x++)
			if(A[m]==A[x])
				m--;
	}
	for(m=0;m<4;m++)
	{
		B[m]=rand()%10;
		for(x=0;x<m;x++)
			if(B[m]==B[x])
				m--;
	}
	for(i=0;i<3;i++)// A정렬
	{
		for(j=i+1;j<4;j++)
		{
			if(A[i]>A[j])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)// B정렬
	{
		for(j=i+1;j<4;j++)
		{
			if(B[i]>B[j])
			{
				temp=B[i];
				B[i]=B[j];
				B[j]=temp;
			}
		}
	}



	merge(A,B,C,8);
	for(i=0;i<4;i++)
		printf("%d ",A[i]);
	printf("\n");
	for(i=0;i<4;i++)
		printf("%d ", B[i]);
	printf("\n");
for(i=0;i<k;i++)
		printf("%d ", C[i]);
	printf("\n");
}
void merge(int *A,int *B, int *C, int size)
{	
	int i=0,j=0;int a,b;
	for(k=0;k<size;k++)
	{
		if(A[i]>B[j])
		{	C[k]=B[j];
			j++;
		}
		else if(A[i]<B[j])
		{
			C[k]=A[i];
			i++;
		}
		else
		{
			C[k]=A[i];
			i++;
			j++;
		}
		if(i>3 || j>3)
		{	
			k++;
			break;
		}
	}
	for(a=i;a<4;a++)
	{
		C[k++]=A[a];
	}
	for(b=j;b<4;b++)
	{
		C[k++]=B[b];
	}
}


/*//10
#include <stdio.h>

void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd);
int main()
{
	int x,y,p_lcm,p_gcd;
	 scanf("%d %d", &x,&y);
	 get_lcm_gcd(x,y, &p_lcm,&p_gcd);
	printf("최대공약수: %d 최소공배수: %d\n",p_gcd,p_lcm );

	return 0;
}
void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd)
{
	int r,a,b;
	a=x,b=y;
	while(y!=0)
	{
		r=x%y;
		x=y;
		y=r;
	}
	*p_gcd=x;
	*p_lcm=(a*b)/ *p_gcd;
}
*/

/*//9
#include <stdio.h>

int search(int *A,int size, int search_value);
int main()
{
	int A[10]={123,456,789,200,234,656,233,221,456,334};

	printf("%d\n", search(A,10,200));
	return 0;
}
int search(int *A,int size, int search_value)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		if(A[i]==search_value)
		{
			return i;
		}
	}
}
*/



/*//8
#include <stdio.h>

int array_sum(int *A,int size);
int main()
{
	int A[10]={123,456,789,465,234,656,233,221,456,334};


	printf("%d\n",array_sum(A,10));

	return 0;
}
int array_sum(int *A,int size)
{
	int i,sum=0;
	for(i=0;i<size;i++)
	{
		sum += A[i];
	}
	return sum;
}
*/

/*//7
#include <stdio.h>

void array_add(int *A, int *B, int *C, int size);
int main()
{
	int i;
	int A[10]={123,456,789,465,234,656,233,221,456,334};
	int B[10]={1,2,3,4,5,6,7,8,9,10};
	int C[10]={0};

	array_add(A,B,C,10);
	for(i=0;i<10;i++)
	{
		printf("%d ", C[i]);
	}

	return 0;
}
void array_add(int *A, int *B, int *C, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		C[i]= A[i]+ B[i];
	}
}
*/



/*//6
#include <stdio.h>

void array_copy(int *A, int *B, int size);
int main()
{
	int i;
	int A[10]={1,2,3,4,5,6,7,8,9,10};
	int B[10]={0};

	array_copy(A,B,10);

	for(i=0;i<10;i++)
	{
		printf("%d ", B[i]);
	}

	return 0;
}
void array_copy(int *A, int *B, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		B[i]=A[i];
	}
}
*/

/*//5
#include <stdio.h>


void convert(double *grades, double *scores, int size);
int main()
{
	int i;
	double grades[10]={3.2, 4.1, 2.3, 2.7, 1.5, 1.7, 3.9, 2.5, 4.3, 3.0};
	double scores[10]={0};
	convert(grades,scores,10);
	
	
	return 0;
}
void convert(double *grades, double *scores, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		scores[i]=grades[i]*100/4.3;
	}
	for(i=0;i<10;i++)
	{
		printf("%.4lf ", scores[i]);
	}
}
*/

/*//4
#include <stdio.h>

void array_print(int *A, int size);
int main()
{
	int A[10]={1,2,3,4,5,6,7,8,9,10};
	array_print(A,10);
	return 0;
}
void array_print(int *A, int size)
{
	int i;
	printf("A[10] = {");
	for(i=0;i<size;i++)
	{
		printf("%d ",A[i]);
	}
	printf("}\n");
}
*/


/*//3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int *A, int size);
int main()
{
	int A[5]={0};int i=0;
	
	 array_fill(A,5);

	 for(i=0;i<5;i++)
		printf("%d ",A[i]);

	return 0;
}
void array_fill(int *A, int size)
{
	int i;
	srand((unsigned)time(NULL));
	for(i=0;i<size;i++)
	{
		A[i]=rand();
	}
}
*/

/*//2
#include <stdio.h>

void get_sum_diff(int x, int y, int *p_sum, int *p_diff);
int main()
{
	int x,y,p_sum,p_diff;
	scanf("%d %d",&x,&y);
	get_sum_diff(x,y,&p_sum,&p_diff);

	printf("합:%d 차:%d\n",p_sum,p_diff);

	return 0;
}
void get_sum_diff(int x, int y, int *p_sum, int *p_diff)
{
	*p_sum= x+y;
	*p_diff=x-y;
	
}
*/

/*//1
#include <stdio.h>

int main(void)
{
	int x= 0x12345678;
	unsigned char *xp = (char *)&x;
	printf("바이트 순서: %x %x %x %x\n", xp[0],xp[1],xp[2],xp[3]);

	return 0;
}
*/



/*#include <stdio.h>


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
*/