#include <stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    int temp=a;
    int sum=0;
    while(a>0){
        int rem=a%10;
        sum=sum+(rem*rem*rem);
        a=a/10;
    }
    if(sum==temp)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

}
