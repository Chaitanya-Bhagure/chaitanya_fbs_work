void main()
  {
    int n, temp, rem, sum = 0, i, fact;
 printf("enter the number : ");
 scanf("%d",&n);
    temp = n;
    while (n) {
        i = 1;
        fact = 1;
        rem = n % 10;
        while (i <= rem) {
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if (sum == temp)
        printf("number %d is a strong number", temp);
    else
       printf("number %d is not a strong number", temp);
}
