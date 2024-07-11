#include <stdio.h>
int isPrime(int num);
int main(){
    for(int i=2; i<=13; i++){
        if(isPrime(i)){
            printf("%d is a prime number\n", i);
        }
        else{
            printf("%d is not a prime number\n", i);
        }
    }
}
int isPrime(int num){
    if(num==2)
        return 1;
    for(int i=2; i<=num/2; i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}

#include <stdio.h>
#include <math.h>
//int powFun(int, int);
int main(){
    int num, con_num=0;
    printf("please enter a 4 digit number: ");
    scanf("%d", &num);
    int temp=num;
    for(int i=4; num=0; i--){
        printf("%d\n", con_num);
        int remain=num%10;
        num=num/10;
        con_num=con_num+ remain*pow(10, i);
    }
    num=temp;
    if(con_num==num)
        printf("%d is a polindrom number", num);
    else{
        printf("%d is not a polindrom number", num);
    }
}
/*int powFun(int base, int exp){
    int result;
    for(int i=0; i<exp; i++){
         result=1;
        result=base*result;
    }
    return result;
}*/

#include <stdio.h>
int fact(int n){
    if(n==1)
        return 1;
    else{
        return n*fact(n-1);
    }
}
