/************************************************************************************************************************
A prime number is a whole number greater than 1, which is only divisible by 1 and itself. 
First few prime numbers are : 2 3 5 7 11 13 17 19 23 …..
************************************************************************************************************************/

/*C Program To Print the nth Prime Number.*/
/*Input : A Non-negative Integer 'n'. */
/*Output : nth Prime Term.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    int i,num = 1,count = 0;
    printf("Enter The nth Term : ");
    scanf("%d",&n);
    if(n <= 0)
    {
        printf("Please Enter Positive Integer..!");
        exit;
    }
    if(n == 1)
    {
        printf("2");
    }
    else
    {
        while(count < n)
        {
            num = num+1;
            for(i=2;i<=num;i++)
            {
                if(num%i==0)
                break;
            }
            if(num == i)
            {
                count = count+1;
            }
        }
        printf("%d",num);
    }
    return 0;
}
