// 

// #include<stdio.h>
// int f(int n){
//     //stop condition
//     if(n ==0 || n == 1){
//         return 1;
//     }
//     //recursive condition
//     else{
//         return n*f(n-1);
//     }
// }
// //main function
// int main(){
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     printf("Factorial of %d is: %d",n,f(n));
//     return 0;
//}

// #include<stdio.h>
// int fact(int n);

// int main(){
//      int n;
//      printf("Enter n:");
//      scanf("%d",&n);
//      printf("factorial of %d is: %d",n,fact(n));
//      return 0;
// }
// int fact(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1 * n;
//     return factN;
// }

// #include<stdio.h>
// int fib(int n);

// int main(){
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     printf("%d",fib(n));
//     return 0;
// }
// int fib(int n){
//     if(n == 0 ){
//         return 0;
//     }
//     if(n == 1){
//         return 1;
//     }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     return fibN;
// }
/*
#include<stdio.h>
void main()
{
      int a,b,c,n,i;
      printf("Enter the value of n: ");
      scanf("%d",&n);
      printf("The Fabonacci series upto %dth terms is: \n",n);
       a=0;
       b=1;
      for(i=1; i<=n; i++)
      {   
            printf("%2d,",a);
            c=a+b;
            a=b;
            b=c;
      }
}*/

#include<stdio.h>
int fib(int n);
int main(){
    int n;
    // 
    scanf("%d",&n);
   // int fibN;
  // printf("%d",fib(n));
    fib(n);
    return 0;
}
int fib(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;

    printf("%d\n",fibN);
        return fibN;
}