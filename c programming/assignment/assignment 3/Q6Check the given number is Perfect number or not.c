void main()
    {
    int number, i = 1, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    while (i < number) {
        if (number % i == 0) {
            sum += i;
        }
        i++;
    }
    if (sum == number) {
        printf("%d is a Perfect number\n", number);
    } else {
        printf("%d is not a Perfect number\n", number);
    }
}
