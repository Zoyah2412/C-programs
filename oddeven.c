#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    int e=0,o=0;
    for (int j=0;j<10;j++){
        if(arr[j]!=0){
            if(arr[j]%2==0)
                e=e+1;
            else
                o=o+1;
        }
    }
    printf("Number of even elements = %d\n",e);
    printf("Number of odd elements = %d",o);
}