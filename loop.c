/*
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i=i+1){
        printf("Hello World\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    for(int i=1;i<=100;i=i+1){
        printf("%d\n",i);
    }
    return 0;
}
/*
#include<stdio.h>
int main(){
    for(int i=10;i<=1;i=i-1){
        printf("%d\n",i);                   //recheck this code 
    }
    return 0;
}

#include<stdio.h>
int main(){
    for (int i=0;i<=10;i=i+1){
        printf("%d\n",i);
    }
    return 0;
}
#include<stdio.h>
int main(){
    
    //Post increment operator
    //i++
    int i=1;
    printf("%d\n",i++);         //pahle i hai mtlb pahle 1print hoga uske baad i+1 yaani ki 2 hoga 
    printf("%d\n",i);

   return 0; 
}
#include<stdio.h>
int main(){
    
    //Pre increment operator
    //++i
    int i=1;
    printf("%d\n",++i);         //esme pahle ++thas mtlb ki esne pahle hi i+1 kr diya 
    printf("%d\n",i);

   return 0; 
}
#include<stdio.h>
int main(){

    // Post decrement operator
    //i--
    int i=1;
    printf("%d\n",i--); `       // pahle i tha isiliyue 1 print hua uske baad -- ka operation lga
    printf("%d\n",i);

   return 0; 

}
#include<stdio.h>
int main(){

    //Pre decrement operator
    //--i
    int i=1;
    printf("%d\n",--i);         //pahle hi minus kr diya isiliye 0 print hua 
    printf("%d\n",i);
    return 0;
}
#include<stdio.h>
int main(){
    for(float i=1.0;i<=10.0;i++){
        printf("%f\n",i);
    }
    return 0;
}
#include<stdio.h>
int main(){
    for(char ch='a';ch<='z';ch++){
        printf("%c\n",ch);
    }
    return 0;


                            // WHILE LOOP//
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int i=0;
    while(i<=n){
        printf("%d\n",i);
              i++;
    }
    return 0;
}
                            //DO WHILE LOOP
#include<stdio.h>
int main(){
    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=10);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
     
     int sum=0;
     for(int i=1;i<=n;i=i+1){
        sum=sum+i;
     }
     printf("sum is %d\n",sum);
    
     for(int i=n; i>=1 ;i--){
        printf("%d\n",i);
     }
     return 0;
}
// above code ko hmlog ek for loop me bhi likh sakte hai

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int sum=0;
    for(int i=1, j=n; i<=n && j>=1; i++,j--){
        sum=sum+i;
        printf("%d\n",j);
    }
    printf("sum is %d\n",sum);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int sum=0;
    for(int  j=n; j>=1; j--){                   //here i ko hmne hataya b/c sum aage se kro ya piche se kro value to same hi aayega isiliye i ko delete maar do 
        sum=sum+j;
        printf("%d\n",j);
    }
    printf("sum is %d\n",sum);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        printf(" %d\n",n*i);
    }
    
    return 0;
} 
#include<stdio.h>
int main(){
    for(int i=0; i<=5; i++){
        if(i==4){
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter the value of n:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%2 !=0){
            break;
        }
    }while(1);
    printf("thank you");
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter the value of n:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%7 ==0){
            break;
        }
    }while(1);
    printf("thank you");
    return 0;
}
#include<stdio.h>
int main(){
    for(int i=0; i<=5; i++){
        if(i==3){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
                //practice questions
#include<stdio.h>
int main(){
    for(int i=1; i<=10; i++){
    if(i==6){
        continue;
    }
        printf("%d\n",i);
    }
    return 0;
}
#include<stdio.h>
int main(){
    for(int i=5; i<=50; i++){
        if(i%2 !=0){
           printf("%d\n",i);        //odd print krane ke liye hmko printf ko if ke andar hi likhna padega  agar if ke bahar likhte ho to even bhi print ho jayega 
        }      
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    printf("final factorial is %d\n",fact);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

     for(int i=10; i>=1; i--){
        printf("%d\n",n*i);
     }
     return 0;
}
#include<stdio.h>
int main(){
    int sum=0;
    for(int i=5; i<=50; i++){
        sum=sum+i;      
    }
     printf(" sum is %d\n",sum);
    return 0;
}*/
// #include<stdio.h>
// int main(){
//         int n ;
//         printf("enter number:");
//         scanf("%d",&n);

//         int check=0;
   
//         for(int i=2; i<=n/2; i++){
//                 if(n%i==0){
//                         check=1;
//                 }             
//         }
//         if(check==0){
//                 printf("prime\n");
//         }else{
//                 printf("not prime\n");
//         }
           
//         return 0;
// }

                                                        //lab assingment on loop//

#include<stdio.h>
// int main(){


//     int n,i,j;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//         for(j=1; j<=i; j++)
//         {
//             printf("%3d",j);
//         }
//         printf("\n");       
//     }
//     return 0;
// }


//     int n,i,j;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//         for(j=1; j<=i; j++)
//         {
//             printf("%3d",i);
//         }
//         printf("\n");       
//     }
//     return 0;
// }

//  int n,i,j,k=1;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//         for(j=1; j<=i; j++)
//         {
//             printf("%3d",k);
//             k++;
//         }
//         printf("\n");       
//     }
//     return 0;
// }

//  int n,i,j,k=65;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//         for(j=1; j<=i; j++)
//         {
//             printf("%3c",k);
//             k++;
//         }
//         printf("\n");       
//     }
//     return 0;
// }

int n,i,j;
printf("enter n: ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
    for(j=1; j<=n; j++)
    {
        if(i+j>=n+1)
        {
            printf("* ");
        }
        else
        {
            printf(" ");
        }
        
    }
    printf("\n");
    
}
  
























//  int n,i,j,k=1;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
     
//     for(i=1; i<=n; i++)
//     {
//         for(j=1; j<=n; j++)
//         { 
//            if(i+j>=n+1)
//            {
//              printf("%2d ",k);
//              k++;
//            }
//            else
//            {
//             printf(" ");
//            }
            
//         }
//         printf("\n");       
//     }
//     return 0;
// }
//   int main(){
//     int n;
//     printf("enter the value of n : ");
//     scanf("%d",&n);
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n;j++){
//                 if(i==n||j==n||i+j>=n+1) printf("* ");
//                 else printf(" ");
//             }
//             printf("\n");
//         }
//      for(int k=2 ;k<=n;k++){
//         for(int l=1;l<=n;l++){
//             if(l>=k) printf("* ");
//             else printf(" ");
//         }
//         printf("\n");
// //      }

//     return 0;
//   }
// void main(){
//     int n,i,j;
//     printf("enter the value of n : ");
//     scanf("%d",&n);
//     for(i=0;i<=n-1;i++)
//     {
//         for(j=0;j<2*n-1 ;j++)
//         {
//             if(j>=n-i-1 && j<=n+i-1)
//             {
//                 printf("*");
//             }
        
//         else
//         {
//             printf(" ");
//         }

//      }
//      printf("\n");
//     }
// }
int main()
{
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(int i=1 ;i<=n ;i++)
    {
        for(int j=1 ;j<=n;j++)
        {
            if(i+j>=n+1) printf("*");
            else printf(" ");
        }
          for(int k=2 ;k<=n ;k++)
          {
            if(k<=i) printf("*");
            else printf(" ");
          }
        printf("\n");
    }
    return 0;
}