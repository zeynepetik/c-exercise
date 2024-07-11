#include <stdio.h>
int fact(int);
int main(){
    printf("***CALCULATING FACTORIAL***\n");
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("factorial of %d: %d", num, fact(num));
}
int fact(int num){
    if(num==1)
        return 1;
    else{
        return num*fact(num-1);
    }
}


#include <stdio.h>
int power(int base, int exp){
    if(exp==0)
        return 1;
    if(exp==1)
        return base;
    else{
        return base*power(base, exp-1);
    }
}
int main(){
    printf("///power with recursive functions///\n\n");
    printf("enter the base: ");
    int base, exp;
    scanf("%d", &base);
    printf("enter the exponential: ");
    scanf("%d", &exp);
    printf("result==%d", power(base,exp));
}

#include <stdio.h>
int fibo(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    printf("^^^fibonacci with recursive functions^^^");
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("result==%d", fibo(num));
}