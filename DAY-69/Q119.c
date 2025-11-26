// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements (0 to n-2, one repeated): ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int xorArr = 0, xorRange = 0;

    for (int i = 0; i < n; i++)
        xorArr ^= arr[i];

    for (int i = 0; i < n - 1; i++)
        xorRange ^= i;

    int repeated = xorArr ^ xorRange;

    printf("Repeated element: %d\n", repeated);
    return 0;
}
