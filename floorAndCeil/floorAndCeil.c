#include<stdio.h>

int floor(float number){
    int floorNo;
    if(number>=0){
        floorNo = number; //implicitly converting float to integer data type
    }
    else{
        floorNo = number;  //-2.14 ==> -2
        floorNo = floorNo-1;  //-2
    }
    return floorNo;
}

int ceil(float number){
    int ceilNo;
    if(number>=0){
        ceilNo = number+1; //implicitly converting float to integer data type
    }
    else{
        ceilNo = number;  //-2.14 ==> -2
    }
    return ceilNo;
}

int main(){

    int convertedFloorNo_1 = floor(-2.3);
    int convertedFloorNo_2 = floor(5.26);
    printf("Floor:\n");
    printf("Input: -2.3 Output: %d\n",convertedFloorNo_1);
    printf("Input: 5.26 Output: %d\n",convertedFloorNo_2);

    int convertedCeilNo_1 = ceil(-2.3);
    int convertedCeilNo_2 = ceil(5.26);
    printf("\nCeil:\n");
    printf("Input: -2.3 Output: %d\n",convertedCeilNo_1);
    printf("Input: 5.26 Output: %d\n",convertedCeilNo_2);

    return 0;
}
