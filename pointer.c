/*#include <stdio.h>

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Initialize array
    int (*p)= arr;  // Pointer to the entire array

    // Access elements via the pointer
    for (int i = 0; i < 10; i++) {
        printf("%d ", (p)[i]);
    }
    printf("\n");

    return 0;
}*/
/*#include<stdio.h>  
void main ()  
{  
    int a = 10;  
    int *p;  
    int **pp;   
    p = &a; // pointer p is pointing to the address of a  
    pp = &p; // pointer pp is a double pointer pointing to the address of pointer p  
    printf("address of a: %x\n",p); // Address of a will be printed   
    printf("address of p: %x\n",pp); // Address of p will be printed  
    printf("value stored at p: %d\n",*p); // value stoted at the address contained by p i.e. 10 will be printed  
    printf("value stored at pp: %d\n",**pp); // value stored at the address contained by the pointer stoyred at pp  
}  */
/*#include <stdio.h>  
struct student  
{  
   char a;  
   char b;  
   int c;  
};  
int main()  
{  
   struct student stud1; // variable declaration of the student type..  
   // Displaying the size of the structure student.  
   printf("The size of the student structure is %d", sizeof(stud1));  
   return 0;  
}  */
#include <stdio.h>  
union abc  
{  
    int a;  
    char b;  
};  
int main()  
{  
    union abc *ptr; // pointer variable declaration  
    union abc var;  
    var.b='c';
    var.a= 666;  
    ptr = &var;  
    printf("The value of a is : %d", ptr->a);  
    printf("The value of b is : %c", ptr->b);  
    return 0;  
}  /*
#include <stdio.h>
union Teacher {
  int ID;
  float salary;
} teacher1, teacher2;

int main() {
  teacher1.ID = 56;
  teacher1.salary = 8000;
  printf("Teacher1 ID = %d\n", teacher1.ID);
  printf("Teacher1 salary = %f\n", teacher1.salary);
  teacher2.ID = 56;
  printf("Teacher2 ID = %d\n", teacher2.ID);
  teacher2.salary = 8000;
  printf("Teacher2 salary = %f\n", teacher2.salary);
  return 0;
}*/