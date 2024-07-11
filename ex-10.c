#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int search_forward(char **ptr, int col,int row, char *str){
    int i,j;
    while(i<=row){
        if((strstr(ptr[i],str))!=NULL){
            for(j=0;j<col;j++){
                ptr[i][j]=toupper(ptr[i][j]);
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    char str[20];
    char *search;
    printf("Welcome to the word search puzzle\n");
    printf("enter a .txt file for puzzle\n");
    scanf("%s", str);
    FILE *fp=fopen(str,"rt");
    int row, col;
    fscanf(fp,"%d %d", &row, &col);
    char **ptr, *line;
    search=(char*)malloc(sizeof(char)*col);
    ptr=(char **)malloc(sizeof(char*)*(row));
    for(int i=0;i<=row;i++){
        ptr[i]=(char *)malloc(sizeof(char)*(col+1));
    }
    int i=0,j=0;
    fgetc(fp);
    while(i<=row){
        fgets(ptr[i],row,fp);
        if(ptr[i][col]=='\n'){
            ptr[i][col]='\0';
        }
        i++;
    }
    int k,n=0;
    for(k=0;k<row;k++){
        for(n=0;n<col;n++){
            if(isupper(ptr[k][n])!=0){
                ptr[k][n]=tolower(ptr[k][n]);
                //ptr[k][n]='a'|'z';
            }
        }
            printf("%s",ptr[k]);
            printf("\n");
    }
    char menu;
    do{
        int m=0,flag=0;
        printf("Enter a word to search for\n");
        scanf("%s",search);
        search_forward(ptr,col,row,search);
        if((search_forward(ptr,col,row,search))==1){
            printf("could not find\n");
        }
        for(int a=0;a<row;a++){
            printf("%s",ptr[a]);
            printf("\n");
        }
    }while(strcmp(search, "exit")!=0);
    for(int i=0;i<=row;i++){
        free(ptr[i]);
    }
    free(ptr);
    free(search);
}
