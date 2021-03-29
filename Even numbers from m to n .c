#include<stdio.h>
#include<conio.h>

void check(int, int);

int main()
{
    int m,n;
    printf ("\n Enter starting number:");
    scanf ("%d", &m);
    printf ("\n Enter ending number:");
    scanf ("%d", &n);
    check(m, n);
    return 0;
}

void check(int a, int b)
{
    if (a>b)
        printf ("\n Error: Please try again.");

    else
    {
        int i;
        printf ("Even numbers from %d to %d are:\n" ,a, b);
        for(i=a; i<=b; i++)
        {
            if(i%2==0)
            printf("%d \t\n", i);
        }
    }
getch();
}
 