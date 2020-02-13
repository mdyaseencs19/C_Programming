/***********************************************************************************************************************
Deletion

Input the array elements, the position of the new element to be inserted and the new element.
Delete the element and shift the rest of the elements to left by one position.
************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100000],i;
    int n,pos;
    printf("Enter The Size Of The Array : ");
    scanf("%d",&n);
    printf("\nEnter %d Elements : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\nEnter The Index Of The ELement To Be Deleted : ");
    scanf("%d",&pos);
    if(pos>=n+1)
        printf("\nInvalid Index.!");
    else
    {
        for(i=pos-1;i<n-1;i++)
            A[i] = A[i+1];
        printf("\nAfter Deletion Contents Of Array is : ");
        for(i=0;i<n-1;i++)
            printf("\nA[%d] = %d",i+1,A[i]);
    }
    return 0;    
}
