/*********************************************************************************************************************
Insertion:

Input the array elements, the position of the new element to be inserted and the new element.
Insert the new element at that position and shift the rest of the elements to right by one position.
*********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100000],i;
    int n,pos,ele;
    int ch;
    printf("Enter The Size Of The Array : ");
    scanf("%d",&n);
    printf("\nEnter %d Elements : \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("\nEnter The Index At Which You Want To Insert The Element in The Array : ");    
    scanf("%d",&pos);
    if(pos>n+1)
        printf("\nInvalid Index.");    
    else
    {
        printf("\nEnter The Element To Be Inserted : ");
        scanf("%d",&ele);
        for(i=n-1;i>=pos-1;i--)
            A[i+1] = A[i];
        A[pos-1] = ele;    
        printf("\nInserted At Index %d Successfully,..!",pos);
    }
    printf("\nEnter 1 To Display The Contents Of The Array : ");
    scanf("%d",&ch);
        if(ch == 1)
        {
            for(i=0;i<=n;i++)
                printf("\n%d",A[i]);
        }
    return 0;    
}
