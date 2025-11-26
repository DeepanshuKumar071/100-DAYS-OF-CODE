// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("Enter array elements (0 to %d, one missing): ", n);
    for (int i = 0; i < n - 1; i++)
        scanf("%d", &arr[i]);

    int totalSum = n * (n + 1) / 2;

    int arrSum = 0;
    for (int i = 0; i < n - 1; i++)
        arrSum += arr[i];

    int missing = totalSum - arrSum;
    printf("Missing number: %d\n", missing);

    return 0;
}
