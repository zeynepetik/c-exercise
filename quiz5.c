#include <stdio.h>
int powfunc(int, int);/**/
int pol(int num, int digit)
{
    int head, tail, div;
    div = powfunc(10, digit - 1);
    if (digit < 3)
    {
        if(digit==2){
            head=num/div;
            tail=num%10;
            if(head==tail)return 1;
            if(head!=tail) return 0;
        }
        else{
            return 1;
        }
    }
    else
    {
        head = num / div;
        tail = num % 10;
        if (head != tail)
            return 0;
        else {
            num = (num % div) / 10;
            return pol(num, digit - 2);
        }
    }
}
int main()
{
    int num, con_num = 0, n;
    printf("****polindrome numbers****\n\n");
    printf("Write how many digits you want to enter: ");
    scanf("%d", &n);
    printf("Enter the number: ");
    scanf("%d", &num);
    /*int i = 1;
    while (num == 0)
    {
        i++;
        int last_digit = num % 10;
        int power = powfunc(10, i);
        con_num = con_num + last_digit * power;
        num = num / 10;
    }
    printf("%d", con_num);*/
    int result=pol(num,n);
    if (result==1)
        printf("%d is a polindrome number", num);
    else
    {
        printf("%d is not a polindrome number", num);
    }
}
int powfunc(int base, int exp) {
    if (exp == 0) {
        return 1; // Any number raised to the power of 0 is 1
    }
    return base * powfunc(base, exp - 1);
}