#include <stdio.h>
#define C 0
#define M 1
#define B 2
union VehicleData{
    struct{
        int door, seat;
    }car;
    struct{
        int wheels, engine_power;
    }motor;
    struct{
        int wheels;
    }bicycle;
};
typedef struct {
    int type;
   union VehicleData vehicledata;
}Vehicle;
void modify_car_doors(Vehicle *car, int new_num_doors){
    printf("modify car doors\n");
    scanf("%d",&new_num_doors);
    (car)->vehicledata.car.door=new_num_doors;
}
int calculateMaxSpeed(Vehicle vehicle){
    int max_speed;
    switch(vehicle.type){
        case 0: //vehicle.VehicleData.car;
            return vehicle.vehicledata.car.door*20;
        break;
        case 1://vehicle.VehicleData.motor;
            
            return vehicle.vehicledata.motor.engine_power/2;
        break;
        case 2://vehicle.VehicleData.bicycle;
        max_speed=30;
            return max_speed;
        break;
    }
}
int main(){
    Vehicle v1,v2,v3;
    int new_door;
    
    v2.vehicledata.motor.wheels=2;
    v2.vehicledata.motor.engine_power=250;
    v3.vehicledata.bicycle.wheels=2;
    /*if(vehicle.type==0){
        printf("modify car doors\n");
        scanf("%d", new_door);
        modify_car_doors(&vehicle,new_door);
    }*/
    v1.type=C;
    v1.vehicledata.car.door=4;
    v1.vehicledata.car.seat=5;
    printf("car max speed: %d\n",calculateMaxSpeed(v1));
    v2.type=M;
    printf("motorcycle max speed: %d\n",calculateMaxSpeed(v2));
    v3.type=B;
    printf("bicycle max speed: %d\n",calculateMaxSpeed(v3));
    modify_car_doors(&v1, new_door);
    printf("modified max speed of car: %d",calculateMaxSpeed(v1));
}

