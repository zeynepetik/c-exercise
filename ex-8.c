#include <stdio.h>
#include <string.h>
#define MAX 15
int poli(char str[], int *h, int *n){
        //printf("%d %d ;;",*h,*n);
        if(str[*h]!=str[*n]){
            return -1;
        }
        if(*n>=*h){
            return 0;
        }
        (*h)--;
        (*n)++;
        //printf("h=%d, n=%d;;",*h, *n);
        poli(str, h, n);
        }
int main(){
    char str[MAX];
    printf("enter a string\n");
    scanf("%s",str);
    //getchar();
    int h=strlen(str)-1;
    //fgets den ötürü -2 yapıyorsun 
    int n=0;
    //printf("%d %d ;;",h,n);
    int k=poli(str,&h,&n);
    if(k==0){
        printf("%s is polindrom \n", str);
    }
    else{
        printf("%s is not polindrom\n",str);
    }
}
