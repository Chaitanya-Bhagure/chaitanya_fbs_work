void main()
 {
    float price, discount = 0, final_amount;
    char student;
    printf("Enter the purchase price: ");
    scanf("%f", &price);
    printf("Are you a student? (y/n): ");
    scanf(" %c", &student); 
    if (student == 'y' || student == 'Y') {
        if (price > 500) {
            discount = 0.20 * price;
        } else {
            discount = 0.10 * price;
        }
    } else {
        if (price > 600) {
            discount = 0.15 * price;
        } else {
            discount = 0.0;
        }
    }
    final_amount = price - discount;
    printf("Discount: %.2f\n", discount);
    printf("Final amount to pay: %.2f\n", final_amount);

    return 0;
}
