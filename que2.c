#include <stdio.h>

int main() {
    int n, i;
    float average, sum = 0.0;

    
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int numbers[n];

  
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

   
    average = sum / n;

    
    printf("The average of the entered integers is: %.2f\n", average);

    return 0;
}
