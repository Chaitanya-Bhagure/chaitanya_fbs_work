void main()
{
	int no=12342;
	int fdig,ldig,sum;
	ldig=no%10;
	while(no>0)
	{
		fdig=no%10;
		no=no/10;
	}
	sum=fdig+ldig;
	printf("%d",sum);
}
