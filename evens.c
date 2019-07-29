#include <stdio.h>

int *evens();

int main()
{
    int *a;
    int k;

    a = evens();

    for(k=0; k<5; k++)
        printf("%i\n", a[k]);

    return 0;
}
int *evens()
{
    static int nums[5];
    int k, even=0;

    for (k=0; k<5; k++)
        nums[k] = even +=2;

    return nums;
}
