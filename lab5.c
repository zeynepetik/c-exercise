#include <stdio.h>
//girilen üç sayının karelerini büyükten küçüğe sıralama
int main(){
    int num1 ,num2, num3, max=0;
    printf("enter three numbers too compare  ");
    scanf("%d%d%d",&num1, &num2, &num3);
    num1=num1*num1;
    num2=num2*num2;
    num3=num3*num3;
    int temp1=num1;
    int temp2=num2;
    if(num3>num2){
        num2=num3;
        num3=temp2;
    }
    if(num2>num1){
        num1=num2;
        num2=temp1;
    }
    if(num3>num1){
        num1=num3;
        num3=temp1;
    }
    printf("%d > %d > %d", num1, num2, num3);
}


#include <stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("before changing their values x=%d , y=%d", x,y);
    int temp=x;   
    x=y;
    y=temp;
    printf("after chainging their values x=%d, y=%d",x,y);
}

#include <stdio.h>
int main(){
    int num, fact=1;
    scanf("%d", &num);
    for(int i=num; i>0; i--){
        fact*=i;
    }
    printf("%d", fact);
}

#include <stdio.h>
int main(){
    int n, fib=1, a=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int temp=fib;
        fib+=a;
        a=temp;
    }
    printf("%d", fib);
}