#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, delta, x1, x2;
    printf("insira os valores de a, b e c: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == 0){
        printf("a equa��o n�o � de segundo grau");
    }

    else{
        delta = pow(b, 2) - (4 * a * c);
        x1 = (-b + (sqrt(delta))) / (2 * a);
        x2 = (-b - (sqrt(delta))) / (2 * a);
        printf("as raizes da equa��o s�o %d e %d", x1, x2);
    }
    return 0;
}
