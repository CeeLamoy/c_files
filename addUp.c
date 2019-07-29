# include <stdio.h>

int addUp(int *a, int num);

int main()
{
    int orders[5] = {100, 220, 37, 16, 98};

    printf("Total orders is %i\n", addUp(orders, 5));

    return 0;
}
int addUp(int *a, int num)
{
    int k, total=0;

    for (k=0; k<num; k++)
        total += a[k];
    return total;
}
