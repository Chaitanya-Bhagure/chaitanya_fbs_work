void main() 
    {
    int num, i = 2, n = 1; 
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num <= 1) {
        n = 0; 
    }
    while (i < num) {
        if (num % i == 0) {
            n = 0; 
        }
        i++;
    }
    if (n == 1)
        printf("Number is prime = %d\n", num);
    else
        printf("Number is not prime = %d\n", num);
    return 0;
}
