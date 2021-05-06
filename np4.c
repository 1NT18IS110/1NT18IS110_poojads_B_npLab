#include <math.h>
#include <stdio.h>
//int pow(int x,int y);
int binary_to_decimal(long long n);
int main() {
    long long poly;
    long long data;
    printf("Enter a polynomial ");
    scanf("%lld", &poly);
    printf("enter the data ");
    scanf("%lld",&data);
    int polynomial=binary_to_decimal(poly);
    int dat=binary_to_decimal(data);
    if(dat%polynomial==0){
    printf("error not detected\n");
    }
    else{
    printf("error detected\n");
    }
  
    return 0;
}

int binary_to_decimal(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

