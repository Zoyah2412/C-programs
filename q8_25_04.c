#include <stdio.h>
int main(){
    int n,m,index=0;
    printf("Enter start and end of range : ");
    scanf("%d %d",&n,&m);
    int arr[m-n];
    for(int i=n;i<=m;i++){
        int ctr=1,f=0;
        while(ctr<=i){
            if(i%ctr==0)
                f++;
            ctr++;
        }
        if(f==2){
            arr[index]=i;
            index++;
        }
    }
    printf("Array with prime numbers between %d and %d : \n",n,m);
    for(int i=0;i<index;i++)
        printf("%d \n",arr[i]);
}