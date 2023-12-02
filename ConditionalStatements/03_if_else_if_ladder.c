#include<stdio.h>

int main(){
    int a=0;
    if(a%2==0 && a!=0){
        printf("a is even");
    }
    else if (a==0){
        printf("a is zero");
    }
    else{
        printf("a is odd");
    }
    return 0;
}