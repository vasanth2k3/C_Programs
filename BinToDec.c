#include<stdio.h>
#include<math.h>
int BinToDec(int s){
    int count=0,sum=0;
    while(s>0){
        int rem=s%10;
        sum+=rem*pow(2,count);
        count++;
        s=s/10;
    }
    return sum;

}
void main(){
    int a;
    scanf("%d",&a);
    printf("%d",BinToDec(a));
}