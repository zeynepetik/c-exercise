#include <stdio.h>
int main(){
    char city[3][15];
    for(int i=0;i<3;i++){
    scanf("%s", &city[i]);
    } 
    for(int j=0;j<3;j++){
    printf("%s",city[j]);
    printf(", ");
}  
}
#include <stdio.h>
int main(){
    int array[100];
    int your_array;
    printf("insert number of elements for your array: ");
    scanf("%d", &your_array);
    int sum=0;
    for(int i=0; i<your_array;i++){
        scanf("%d", &array[i]);
        sum=sum+array[i];
    }
    printf("sum of your array:%d", sum);
    printf("avarage:%d ", sum/your_array);
}


int main(){
    for(int i=0;i<5;i++){
        for(int k=0;k<5-i;k++){
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}


int main(){
    int array[2][2];
    array[0][0]=10;
    array[0][1]=20;
    array[1][0]=30;
    array[1][1]=40;
    for(int i=0; i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",array[i][j] );
        }
        printf("\n");
    }
}
#include <stdio.h>
int main(){
    int matris[2][3]={10,20,30,40,50,60};/*row by row.
    !!!first triple first row and second triple second row*/
}

/*puts and gets string
        stringlerde scanf kullanıldığı zaman spaceden sonrasını 
    bu yüzden scanf yerine puts ve gets fonksiyonları kullanılır 
    gets(almak) scanf yerine ; puts(koymak) printf yerine kullanılur.*/
int main(){
    char tmi[50];
    printf("insert the info: ");
    gets(tmi);
    puts(tmi);
}
/*%.3f ondalık sayının noktadan  sonra üç sayı göstereceğini belirtir
  %10s charla girilen bir verinin girilen veriyi 10 karaketere
  tamamlayacağını belritir(verinin önüne space basarak)*/
  int main(){
    char book[10];
    scanf("%s",&book);
    printf("%40s", book);
  }
  /*%s de snin önünde negatif bir sayı yazarsa sola dayalı bir şekilde
  yazım gerçekleşir yani veriyi yazar ve belirtilen kadar spacei 
  hafızaya null olarak kaydeder.*/
  int main(){
    char word[50];
    printf("***\n");
    gets(word);
    int length=strlen(word);
    printf("%d", length);
  }
  #include <stdio.h>
enum State {Working = 1, Failed = 0, Freezed = 0};

int main()
{
printf("%d, %d, %d", Working, Failed, Freezed);
return 0;
}


#include <stdio.h>//NICEEEE
enum day {sunday = 1, monday/*will be 2*/, tuesday = 5,
		wednesday/*will be 6*/, thursday = 10, friday/*will be 11*/, saturday};

int main()
{
    int weekday;
	printf("please enter a weekday: ");
    scanf("%d", &weekday);
    if(weekday==sunday)
    printf("lalala");
}

#include <stdio.h>
//#include <string.h>
typedef struct family{
    char name[30];
    int age;
    int birth 
}family;
int main(){
    family sis1={"nagihan", 23, 2001};
    family sis2={"neslihan", 15, 2009};
    family mom={"zeliha", 46,1978};
    printf("mom's name: %s, age: %d, birth date: %d", mom.name,mom.age, mom.birth );   
}

#include <stdio.h>
int main(){
    char name[20];
    gets(name);
    puts(name);
    return 0;
}

#include <stdio.h>
int main(){
    char text[25];
    FILE *ptr=fopen("hii.txt", "r+");
    if(ptr==NULL)
        printf("couldnt open");
    else{
        fprintf(ptr,"hello world",text);
    }
}