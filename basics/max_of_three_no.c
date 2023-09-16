#include<stdio.h>



int main(void)
{
    int x,y,z;
     printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    printf("Enter z:");
    scanf("%d",&z);
    if (x>y && x>z)
    {
         printf("The largest of three numbers is %d",x);
    }
    
    else if (y>x && y>z)
    {
        printf("The largest of three numbers is %d",y);
    }
    else if (z>x && y<z)
    {
        printf("The largest of three numbers is %d",z);
    }
    
    
} 
