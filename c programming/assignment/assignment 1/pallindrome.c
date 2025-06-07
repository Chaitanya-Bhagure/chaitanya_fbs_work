void main()
{
	int no=128;
	int r1,r2,r3,q1,org;
	org=no;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	int rev = r1*100+r2*10+r3;
	printf("org no: %d\n",no);
	rev==org;
	if(org==rev)
	{
		printf("no is pallindrome");
	
}else
printf("no is not pallindrome");
}
