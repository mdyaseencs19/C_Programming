/************************************************************************************************************
  A prime number is a whole number greater than 1, which is only divisible by 1 and itself. 
  First few prime numbers are : 2 3 5 7 11 13 17 19 23 ...
************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int i,flag=1;
    printf("Enter An Integer : ");
    scanf("%d",&n);
    if(n <= 0)
    {
        printf("Enter a Non Zero Value.");
        exit;
    }
    else
    {
        for(i=2;i<sqrt(n);i++)
        {
            if(n%i == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("\n%d is a Prime Number...",n);
        }
        else
        {
            printf("\n%d is Not a Prime Number.",n);
        }
    }
    return 0;
}
