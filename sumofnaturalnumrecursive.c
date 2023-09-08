#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1; // Base case: The sum of the first natural number is 1.
    } else {
        return n + sumOfNaturalNumbers(n - 1); // Recursively add n to the sum of (n-1) natural numbers.
    }
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = sumOfNaturalNumbers(n);
        printf("Sum of the first %d natural numbers is %d\n", n, sum);
    }
    
    return 0;
}
