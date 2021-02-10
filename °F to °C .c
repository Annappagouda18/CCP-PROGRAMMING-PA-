/*Converting degree farhenheit to degree Celsius */
#include<stdio.h>
#include<conio.h>
int main()
{
    float c,f;
    printf("\nEnter the degree in farhenheit=");
    scanf("%f", &f);
    c=(f-32)*(5.0/9.0);
    printf("\nThe degrees in celcius is = %f °C",c);
    getch();
    return 0;
} 
