#include<stdio.h>

//void cartesianProduct(int set_1_Elements[],int set_2_Elements[],int set_1_ElementNo, int set_2_ElementNo){

    //statements
//    int set_2_Elements[set_2_ElementNo];
//    printf("\nEnter elements of set B:\n");
//    for(int j=0;j<set_2_ElementNo;j++){
//        printf("Enter element %d: ",j+1);
//        scanf("%d",&set_2_Elements[j]);
//    }
//}

int main(){

    int set_1_ElementNo;
    int set_2_ElementNo;

    //statements
    printf("Program to print cartesian product of two sets\n\n");

    //ask no of elements of set 1
    printf("Enter no of elements of set A: ");
    scanf("%d",&set_1_ElementNo);

    //ask no of elements of set 2
    printf("Enter no of elements of set B: ");
    scanf("%d",&set_2_ElementNo);

    //ask elements of set 1
    int set_1_Elements[set_1_ElementNo];
    printf("\nEnter elements of set A:\n");
    for(int i=0;i<set_1_ElementNo;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&set_1_Elements[i]);
    }

    //ask elements of set 2
    int set_2_Elements[set_2_ElementNo];
    printf("\nEnter elements of set B:\n");
    for(int j=0;j<set_2_ElementNo;j++){
        printf("Enter element %d: ",j+1);
        scanf("%d",&set_2_Elements[j]);
    }

    //send two sets to the function and call it
    printf("\nCartesian product of elements of set A and set B are:\n");
    for(int i=0;i<set_1_ElementNo;i++){
        for(int j=0;j<set_2_ElementNo;j++){
            printf("(%d,%d) ",set_1_Elements[i],set_2_Elements[j]);
        }
    }

    return 0;
}
