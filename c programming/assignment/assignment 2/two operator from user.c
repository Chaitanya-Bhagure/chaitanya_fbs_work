// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
 
int main()
{
	int no1,no2,sum;
	char ch;
	printf("enter the first number:");
	scanf("%d",&no1);
	printf("enter the second number:");
	scanf("%d",&no2);
	printf("enter the operators :");
	getchar();
	scanf("%c",&ch);
	if(ch=='+')
	{
	 sum=no1+no2;
		printf("%d",sum);
	}
	
	
	else if(ch=='-')
		{
		sum=no1-no2;
		printf("%d",sum);
		}
		else if(ch=='/')
		{
			 sum=no1/no2;
		printf("%d",sum);
		}
		else if('*')
		{
			 sum=no1*no2;
		printf("%d",sum);
		}
		else if('%')
		{
			 sum=no1%no2;
		printf("%d",sum);
		}
		else
		printf("operator not found");
	
}
