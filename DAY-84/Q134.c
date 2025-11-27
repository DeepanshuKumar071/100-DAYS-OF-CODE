// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

enum Status
{
    SUCCESS = 1,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status s = TIMEOUT;

    switch (s)
    {
    case SUCCESS:
        printf("Operation Successful\n");
        break;

    case FAILURE:
        printf("Operation Failed\n");
        break;

    case TIMEOUT:
        printf("Operation Timed Out\n");
        break;
    }

    return 0;
}
