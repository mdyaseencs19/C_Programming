/******************************************************************************
    C Program To Multiply an Integer By 4 Without Using the '*' Operator.
*******************************************************************************/

/*******************************************************************************************************************************************************************************************

----------------------------- 
    Pseudocode: 
-----------------------------

    Collect the input from the User.
    Left Shift the given input By 2. (Left Shift By 1 {i.e., a = a<<1 } is nothing but Multiplication by 2, Similarly Left Shift By 3 is nothing but Multiplication by 8 and so on). 
    Finally Print the Result.
    
*******************************************************************************************************************************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf("Multiplication of an Integer By 4 Without Using '*' Operator : \n");
    printf("Enter an Integer : ");
    scanf("%d",&a);
    a = a << 2;   // Left Shift Twice [Multiplication By 4]
    printf("%d",a);
    return 0;
}

/*********************************************
-------------------------
Output:
-------------------------
Multiplication of an Integer By 4 Without Using '*' Operator :                                          
Enter an Integer : 5                                                                                  
20                                                                                                    
                                                                                                      
...Program finished with exit code 0                                                                  
Press ENTER to exit console

*********************************************/
