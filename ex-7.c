#include <stdio.h>
#define MAXIT 100
int hs(int nums[], int *cn, int maxit){
    if(nums[*cn]==1|| *cn==maxit){
        nums[*cn]=1;
        return 1;
    }
    else{
        
        if((nums[*cn])%2==0){
            nums[*cn+1]=nums[*cn]/2;
            (*cn)++;
            return hs(nums, cn, 100);
        }
        else{
            nums[*cn+1]=nums[*cn]*3+1;
            (*cn)++;
            return hs(nums, cn, 100);
        }
    }
}
int main(){
    int nums[MAXIT];
    int cn=1;
    printf("enter a number\n");
    scanf("%d", &nums[cn]);
    hs(nums, &cn,100);
    for(int i=0; i<=cn; i++){
        printf("%d\n", nums[i]);
    }
}

