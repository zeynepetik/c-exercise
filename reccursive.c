#include <stdio.h>
int count_char(char *str, char ch){
    int ans=0;
    if(*str=='\0')
        return ans;
    else if(*str==ch){
        ans++;
        return ans+count_char(str+1,ch);
    }
    else{
        return count_char(str+1, ch);
    }

}
int main(){
    char str[]="oh my oh my god ooowwvdndeıo";
    char ch='o';
    printf("%d", count_char(str, ch));
}
