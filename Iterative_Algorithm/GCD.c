#include<stdio.h>
void GCD(int A, int B);

int main(){
    int X, Y;
    printf("Enter the value of X and Y:-\n");
    scanf("%d %d", &X, &Y);
    GCD(X,Y);
    return 0;
}
void GCD(int a, int b){
        if(a==0){
            printf("B is GCD");
        }
        else if(b==0){
            printf("A is GCD");
        }
        else{
            while(b!=0){
                int R = a%b;
                a=b;
                b=R;
            }
            printf("A is GCD");
        }
}


