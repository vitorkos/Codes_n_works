#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m, n, x, y;
    printf("\n apresente os valores de m, n, x e y\n ");
    scanf("%d",&m);
    scanf("%d", &n);
    scanf("%d", &x);
    scanf("%d", &y);

    int diferenca1, diferenca2;
    diferenca1 = m - n;
    diferenca2 = x - y;

    printf("\n a diferen�a de entre m e n � de: %d", diferenca1);
    printf("\n a diferen�a entre x e y � de : %d", diferenca2);

return 0;
}
