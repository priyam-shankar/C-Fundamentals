// #include<stdio.h>
// int main(){
// int n,count;
// float y,x;
// printf("Enter the value of x and n: ");
// scanf("%f %d",&x, &n);
// y=1.0;
// count=1;
// while(count<=n)
// {
//     y=y*x;
//     count++;
// }
// printf("y=x to the bpower of n=%.2f",y)
 
//     return 0;
// }

// #include<stdio.h>

// int main(){
// int y,row,col;
// printf("                MULTIPLICATION TABLE        ");
// printf("\n  ----------------------------------------------\n");
// for(row=1; row<=10; row++)
// {
//     for(col=1; col<=12; col++)
//     {
//         y=row*col;
//         printf("%5d",y);
//     }
//     printf("\n");
// }
// printf("  ----------------------------------------------\n");
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int i,n,fact=1;
// printf("Enter n:");
// scanf("%d",&n);
// for(i=1; i<=n; i++)
// {
    
//     fact=fact*i;
// }
// printf("Final Factorial is %d",fact);
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int i,j,n;
// printf("Enter n:");
// scanf("%d",&n);
//  for(i=1; i<=n; i++)
//  {
//    for(j=1; j<=n; j++)
//    {
//     printf(" * ");
//    }
//    printf("\n");
//  }

//     return 0;
// }


// #include<stdio.h>
// int main(){
// int n;
// printf("Enter number:");
// scanf("%d",&n);
// int check=0;
// for(int i=0; i<n; i++)
// {
//     if(n%2==0)
//     {
//         check=1;
//     }
// }
// if(check==0)
// {
//     printf("prime\n");
// }
// else
// {
//     printf("not prime");
// }
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int n,r,rev;
// printf("Enter number:");
// scanf("%d",&n);
// rev=0;
//  while(n !=0)                                        //Q.No=1 book
//  {
//    r=n%10;
//    rev=rev*10+r;
//    n=n/10;
//  }
//  printf("Reversed No is :%d",rev);
//     return 0;
// }

/*
#include<stdio.h>
void main(){
    int n;
    printf("Enter the integer:");
    scanf("%d",&n);
     if(n>0 && n%5==0)
      {
         printf("%d is divisible by 5",n);
      }
     else
      {
         printf("Given Integer is not divisible by 5");
      }
}
*/

