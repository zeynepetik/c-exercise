#include <stdio.h>
#include <math.h>
typedef struct{
    double width, height;
}Rectangle;
typedef struct{
    double radius;
}Circle;
typedef struct{
    double side1, side2,side3; 
}Triangle;
void calculate_area(Rectangle rec,Circle circle, Triangle triangle, double arr[]){
    double pi=3.14;
    arr[0]=(rec.height)*(rec.width);
    arr[1]=pow(2.0,circle.radius)*pi;
    double s=(triangle.side1+triangle.side2+triangle.side3)/2;
    //double sq=s*(s-triangle->side1-1)*(s-triangle->side2)*(s-triangle->side3);
    arr[2]=sqrt(s*(s-triangle.side1)*(s-triangle.side2)*(s-triangle.side3));
}
int main(){
    double array[3];
    Rectangle rectangle ={5.0,3.0};
    Circle circle={2.0};
    Triangle triangle={3.0,4.0,5.0};
    calculate_area(rectangle, circle, triangle,array);
    for(int i=0;i<3;i++){
        printf("%.2lf\n", array[i]);
    }
    //printf("%lf", array[2]);
}