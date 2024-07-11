#include <stdio.h>
void drawStickman(int position, char armStatus){
    int i,j;
    for(i=0; i<5;i++){
            switch (i)
            {
            case 1:
                printf("o\n");
                break;
            case 2:
                printf("/|\\ \n");
                break;
            case 3:
                printf(" |\n");
                break;
            case 4:
                printf("/ \\ \n");
                break;
            }  
            for(j=0; j<5+position; j++){
                printf(" ");
            }          
        }
}
int moveStickman(int position, char move){
    int i,j;
    if(move=='d'){
        position++;
        for(i=0; i<4;i++){
           
            switch (i)
            {
            case 1:
                printf(" o\n");
                break;
            case 2:
                printf(" |\n");
                break;
            case 3:
                printf(" |\n");
                break;
            case 4:
                printf("/ \\ \n");
                break;
            } 
            for(j=0; j<5+position; j++){
                printf(" ");
            }          
        }
        return 0;
    }
    if(move=='a'){
        position--;
        for(i=0; i<2+position;i++){
            for(j=0; j<5+position; j++){
                printf("  ");
            }
            switch (i)
            {
            case 1:
                printf(" o\n");
                break;
            case 2:
                printf(" |\n");
                break;
            case 3:
                printf(" |\n");
                break;
            case 4:
                printf("/ \\ \n");
                break;
            default:
            break;
            }
        }
        return 0;
    }
    if(move=='s'){
        return -1;
    }
}
int main(){
    int position=0, newPosition=0;
    char armstatus='d', move='n';
    printf("**Welcome to Stickman Animation\n");
    printf("Use 'a' to move lef, 'd' to move right, 's' to switch arms and 'e' to exit\n" );
    while(move!='e'){
        printf("Enter your move: ");
        scanf("%c", &move);
        newPosition=moveStickman(position, move);
        if(newPosition!=1){
            moveStickman(position, move);
        }
        else{

            drawStickman(position, armstatus);
        }
        drawStickman(position, armstatus);
    }
    printf("Exitting Stickman Animation\n");
    return 0;
}