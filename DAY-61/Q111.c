// Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>

int main()
{
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k > n)
    {
        printf("Window size k cannot be greater than array size.\n");
        return 0;
    }

    printf("First negative elements in each subarray: ");

    for (int i = 0; i <= n - k; i++)
    {
        int firstNeg = 0;
        for (int j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                firstNeg = arr[j];
                break;
            }
        }
        printf("%d ", firstNeg);
    }

    printf("\n");
    return 0;
}
