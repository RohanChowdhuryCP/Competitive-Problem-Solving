#include<stdio.h>
int main()
{
    char name;
    double salary, valu;


    scanf("%s %lf %lf",&name, &salary, &valu);

    printf("TOTAL = R$ %.2f\n", salary + valu*.15);
    return 0;

}
