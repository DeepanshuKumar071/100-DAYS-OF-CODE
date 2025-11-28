// Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Status
{
    SUCCESS = 10,
    FAILURE,
    TIMEOUT = 50,
    UNKNOWN
};

int main()
{
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);
    printf("UNKNOWN = %d\n", UNKNOWN);

    return 0;
}
