# include <stdio.h>

int main()
{
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;

    ptr=a;

    printf("%d %x\n ", *ptr, ptr);

    return 0;
}
