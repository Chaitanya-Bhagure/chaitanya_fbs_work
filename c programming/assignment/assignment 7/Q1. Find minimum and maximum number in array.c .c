#include <stdio.h>
#include <limits.h> 

int main(void)
 {
    int arr[5];
    int min = INT_MAX;
    int max = INT_MIN;

    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++)
	 {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}
