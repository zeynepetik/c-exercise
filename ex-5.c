#include <stdio.h>
int sum(int);
int main(){
    printf("***CALCULATING SUM OF THE DIGITS OF A NUMBER***\n");
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    printf("RESULT=%d", sum(num));
}
int sum(int num){
    if(num==0)
        return 0;
    else{
        int remain=num%10;
        num=num/10;
        return remain+sum(num);
    }
}

#include <stdio.h>
int gcd(int, int);
int main(){
    printf("**calculating the GCD\n");
    int num1, num2;
    printf("enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("GCD of %d and %d: %d", num1, num2, gcd(num1,num2));
}
int gcd(int num1, int num2){
    if(num1==0)
        return num2;
    if(num2==0)
        return num1;
    else{
        return gcd(num2, num1%num2);
    }
}
