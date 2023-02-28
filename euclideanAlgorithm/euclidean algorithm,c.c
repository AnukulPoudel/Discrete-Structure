#include<stdio.h>
int euclideanAlgorithm(int a, int b) {
    while (a != 0){
        return euclideanAlgorithm(b%a, a);
    }
    return b;
}
int main(){

    int a,b;

    printf("Enter two number: ");
    scanf("%d %d",&a,&b);

    printf("%d",euclideanAlgorithm(a, b));

    return 0;
}
