void main()
    {
    int n, i = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Multiplication table for %d:\n", n);
    while (i <= 10) {
        printf("%d ", n * i);
        i++;
    }
    return 0;
}

