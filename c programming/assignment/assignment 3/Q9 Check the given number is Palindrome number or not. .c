void main()
    {
    int number, temp, reversed = 0, digit;
    printf("Enter the number: ");
    scanf("%d", &number);
    temp = number;
    while (temp > 0) {
        digit = temp % 10;        
        reversed = reversed * 10 + digit;
        temp = temp / 10;             
    }
    if (number == reversed) {
        printf("number %d is a Palindrome number\n", number);
    } else {
        printf("number %d is NOT a Palindrome number\n", number);
    }
}
