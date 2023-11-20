#include<stdio.h>
//print multiplication of 5 using array of 10
int main (){
    int multi[10];
    for (int i = 0; i < 10; i++)
    {
        multi[i]=(i+1)*5;
        printf("%d*5 = %d\n", (i+1), multi[i]);
    }
    return 0;
}
