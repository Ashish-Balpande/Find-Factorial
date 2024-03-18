#include <stdio.h>
#define CONG 3      // 1:Method-1  2:Method-2   3:Method-3

int factorial(int n){
    int res=1;
    if(n<=1){
        res *=1;
    }
    else{
        res = (n)*factorial(n-1);
    }
    return res;
}

int main(){
    int num;
    printf("Enter a number for fatorial : ");
    scanf("%d", &num);
    
    int result = 1;
    
#if CONG == 1
//Method-1
    printf("Method-1 used for solve Factorial\n");
    for(int i=num; i>0; i--){
        result = result * i;
    }
#endif

#if CONG == 2
//Method-2
    printf("Method-2 used for solve Factorial\n");
    for(int i=0; i<=num; i++){
        if(i==0){
            result *= 1;
        }
        else{
            result *= i;
        }
    }
#endif

#if CONG == 3
//Method-3
    printf("Method-3 used for solve Factorial\n");
    result = factorial(num);
#endif

    printf("Fatorial of %d is : %d", num, result);
    
    return 0;
}