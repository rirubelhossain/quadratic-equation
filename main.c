#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    ///printf("Hello world!\n");
    /**
    double a, b, c, determinat, root1, root2, realpart,impart;

    scanf("%lf%lf%lf", &a,&b,&c);

    determinat = b*b-4*a*c;

    if(determinat > 0)
        {
            root1 = (-b+sqrt(determinat));

            root2 = (-b-sqrt(determinat));


            printf("root1 = %2.lf and root2 = %2.lf",root1,root2);
        }
    else if( determinat == 0)
        {
            root1 = root1 = -b/2*a;

            printf("root1 = root2= %2.lf",root1);

        }
    else
    {
        realpart = -b/(2*a);
        impart = sqrt(-determinat)/(2*a);

        printf("root1 = %.2lf + %.2lfi and root2 = %.2f - %.2fi",realpart,impart,realpart,impart);
    }
    **/
    long long n;

    int count = 0;



    scanf("%lld", &n);



    while( n != 0){


        n = n / 10;
        count++;
    }

    printf("your count is %d",count);
    return 0;
}
