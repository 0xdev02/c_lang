#include<stdio.h>
//Multiplication table 
//take value from user
int main (){
    int multi[10];
    int n;
    printf("Enter the Table you want");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        multi[i]=(i+1)*n;
        printf("%d X %d = %d\n", (i+1), n, multi[i]);
    }
    return 0;
}
