#include <stdio.h>
int sum(int a, int b){
    if (a<b)
        return a+sum(a+1,b);
    
}
int main(){
    int n1, n2;
    printf("Enter lower and upper bound of summation ");
    scanf("%d %d", &n1,&n2);
    printf("The summation is- %d",(2*sum(n1,n2)));
}