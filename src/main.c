#include <show.h>
#include <swap.h>

int main()
{
int a = 10;
int b = 20;

    show(a, b);
    swap(&a, &b);
    show(a, b);

    return 0;
}
