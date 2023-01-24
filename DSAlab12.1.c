//WAP to read an array of integers and search for an element using linear search.
#include <stdio.h> 
int main()
{
    int x,n,flag=0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements into the array ");
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("Enter number to be searched for : ");
    scanf("%d", &x);
    for(int i=0;i<n;i++){
        if (arr[i]==x) {
            flag=1;
            printf("%d is present at index %d", x,i);
            break;
        }
    }
    if (flag==0)
        printf("%d not found in the array",x);
    return 0;
}