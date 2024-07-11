#include <stdio.h>
int main(){
    int dig1, dig2;
    for(int i=100; i<1000; i++){
        int temp=i;
        dig1=temp%10;
        temp=temp/10;
        dig2=temp%10;
        temp=temp/10;
        int dig3=temp%10;
        if(((dig1!=dig3)&&(dig1!=dig2)&&(dig2!=dig3)))
            printf("%d\n",i);
    }
}
#include <stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    printf("divisor of %d: ", number);
    for(int i=1; i<=number; i++){
        if(number%i==0){
            printf("%d\n", i);
        }
    }
}
#include <stdio.h>
int main(){
    int bacterium=1;
    for(int i=0; i<24; i++){
        bacterium=bacterium*2;
    }
        printf("%d", bacterium);
}
#include <stdio.h>
int main(){
    int dim;
    printf("please enter a number beside 0,1,2\n");
    scanf("%d", &dim);
    if(dim%2!=0){
       for(int i=0; i<dim; i++){
        if(i!=0)
        printf("\n");
        for(int j=0; j<dim; j++){
            if(j==dim/2)
            printf("1");
            if(j!=dim/2){
                printf("0");
            }
            if(i==dim/2){
                for(int k=0; k<=dim; k++){
                    printf("1");
                    break;
                }
            }
        }
       }
    }
    if(dim%2==0){
        for(int i=0; i<dim; i++){
        if(i!=0)
        printf("\n");
        for(int j=0; j<dim; j++){
            if((j==dim/2)||(j==dim/2 -1)){
                printf("1");
            }
            else{
                printf("0");
            }
            if((i==dim/2)||(i==dim/2 -1)){
                for(int k=0; k<=dim; k++){
                    printf("1");
                    break;
                }
            }
        }
    }
}
}
#include <stdio.h>
int prime(int num){
    for(int i=num; i>0; i--){
        int flag=0;
        for(int j=3; j<i; j++){
            if(i%j==0){
            flag=1;
            }

        }
        if(flag==0)
        return i;
    }
}
int main(){
    int num;
    printf("please insert a number: ");
    scanf("%d", &num);
    int a=prime(num);
    printf("%d", a);
}
#include <stdio.h>
int pow(int base, int exp){
    int result=1;
    if(exp==0)
     return 1;
    else{
        return base*pow(base, exp-1);
    }
}
int main(){
    int number;
    printf("please enter a number: ");
    scanf("%d", &number);
    for(int i=0; i<pow(2,i); i++){
        if(number<pow(2,i)){
            printf("%d is between %d and %d", number, i, i-1);
            break;
        }
    }
}
#include <stdio.h>
int fibonacci(int number){
    if((number==0)||(number==1))
    return 1;
    else{
        return fibonacci(number-2)+fibonacci(number-1);
    }
}
int main(){
    for(int i=0; i<3; i++){
        if(i!=0)
        printf("\n");
        printf("%d  ", fibonacci(i));
        for(int k=i+1; k<i+5; k++){
            printf("%d  ",fibonacci(k));
        }
    }
}
#include <stdio.h>
int main(){
    int prnum;
    printf("please insert a number: ");
    scanf("%d", &prnum);
    printf("%d consecutive prime numbers: ", prnum);
    int i=2;
    while(1){
        i++;
        int flag=0 ,counter=0;
        for(int j=2; j<i; j++){
            if(i==2){
            flag=0;
            printf("%d ",i);
            counter++;
        }
            if(i%j!=0)
            flag=1;
            
        }
        if(flag==0){
            counter++;
            printf("%d ",i);
        }
        if(prnum==counter)
        break;
    }
}