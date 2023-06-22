/*3. Write a program to sum every alternate elements of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

Topics to be covered
- Arrays
- Loops
- Basic Operators*/


#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int size = sizeof(a) / sizeof(a[0]);
    int sum = 0;

    for (int i = 0; i < size; i += 2) {
        sum += a[i];
    }

    printf("Sum of alternate elements: %d\n", sum);

    return 0;
}