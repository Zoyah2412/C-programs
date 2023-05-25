#include <stdio.h>
int pwr(int b, int p){
    if (p!=0)
        return (b*pwr(b,p-1));
    else
        return 1;
}
int main(){
    int base, power;
    printf("Enter base number : ");
    scanf("%d", &base);
    printf("Enter a positive number as power : ");
    scanf("%d", &power);
    int ans = pwr(base,power);
    printf("%d^%d = %d", base, power, ans);
    return 0;
}