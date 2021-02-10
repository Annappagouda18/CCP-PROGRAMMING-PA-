/*Finding area of triangle given its sides as input using functions*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float area(float, float, float);
int main()
{ 
   float x,y,z;
       printf("\nFinding the area of triangle"); 
       printf("\nEnter the length of the three sides of the Triangle="); 
       scanf("%f %f %f", &x, &y, &z); 
       printf("\nThe area of the triangle is = %f sq. units", area(x,y,z)); 
  return 0;
}
    float area(float p, float q, float r)
{ 
       float s = (p+q+r)/2; 
       float m = sqrt(s * (s-p) * (s-q) * (s-r)); 
     return m;
}