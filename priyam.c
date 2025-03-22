// //  main(){
// // printf("I see\n I remember");
// // }

// // Programm ADDITION
// // written by PRIYAM
// main(){
//     int number;
//     float sum;

//     number=100;
    
//     sum=30.75 + 75.35;
//     printf("%d\n",number);
//     printf("%5.2f",sum);                //%5.2f indicates that complier that the output must be in floating value,with five places in all and two places to the right of the decimal point
//     }


// #include<stdio.h>
// void main(){
//     int a,b;
//     printf("Enter the first no:");
//     scanf("%d",&a);
//     printf("Enter the second no:");
//     scanf("%d",&b);   
//     a=b-a;
//     b=b-a;
//     a=a+b;

//     printf("After Swaping\n");
//     printf("The first number is:%d\n",a);
//     printf("The second number is:%d\n",b);

// }

// #include<stdio.h>
// void main(){
//     int age;
//     printf("Enter Your Age:");
//     scanf("%d",&age);
//     if(age<18 && age>0){
//         printf("You are minor.\nYou are not elligible to Vote.\n");
//     }else if(age>=18 && age<=65){
//         printf("You are Adult.\nYou are elligible to Vote.\n");
//     }else if(age>65){
//         printf("You are senior.\nYou are ellible to Vote.\n");
//     }else{
//         printf("INVLALID");
//     }
// }

// #include<stdio.h>
// void main(){
//     float a,b;
//     char cal;
//     printf("Enter the value of a:");
//     scanf("%f",&a);
//     printf("Select operator : ");
//     scanf(" %c",&cal);
//     printf("Enter the value of b:");
//     scanf("%f",&b);

//     switch(cal){
//         case '+':
//                 printf("The sum of two no is:%.2f",a+b);
//                 break;
//         case '-': 
//                 printf("The subtraction of two no is:%.2f",a-b);
//                 break;     
//         case '*': 
//                 printf("The multiplication of two no is:%.2f",a*b); 
//                 break;
//         case '/': 
//                  if(b!=0){
                    
//                     printf("The division of two no is:%.2f",a/b);
//                  }else{
//                     printf("Invalid");
//                  }
//                  break;
//         default:printf("Invalid");       

//     }
// }

// #include<stdio.h>
// void main(){
//         int num,sum=0;
//         printf("Enter the 3 digit no:");
//         scanf("%d",&num);
//         sum=sum+num%10;
//         num=num/10;
//         sum=sum+num%10;
//         num=num/10;
//         sum=sum+num%10;
//         printf("The sum of these digits are:%d\n",sum);

// }

// #include<stdio.h>
// void main(){
//         char i;
//         printf("Enter m if you are a member or c if you are a customer\n");
//         scanf(" %c",&i);
//         float price;
//          printf("Enter your price:");
//          scanf("%f",&price);
        
//         if(i=='m'){
//                 printf("you are member\n");               
//                 if(price>100){                     
//                         printf("You got 10 percent disount\n");                      
//                         printf("yor final price is:%f",price-(price*0.1));
//                 }else{
//                         printf("Sorry you not get any discount\n");
//                         printf("your final price is:%f\n",price);
//                 }
//         }else if(i=='c'){
//                 printf("you are a customer\n");                
//                 if(price>150){                      
//                         printf("You got 10 percent disount\n");                      
//                         printf("yor final price is:%f",price-(price*0.1));
//                 }else{
//                         printf("Sorry you not get any discount\n");
//                         printf("your final price is:%f\n",price);
//                 }
//         }else{          
//                 printf("you are not a customer\n");
//         }
// }

// #include<stdio.h>
// void main(){
//         int i=1,n;
//         printf("Enter a number:");
//         scanf("%d",&n);
//         printf("Table of %d is :\n",n);
//         while(i<=10){
//                 printf(" %d*%d=%d\n",n,i,n*i);
//                         i++;
//         }
// }

// #include<stdio.h>
// void main(){
//        int sq,sum=0;
//         for(int i=2;i<=100;i++){
//                 if(i%2==0){
//                         if(i%6!=0){
//                                 printf("%d\n",i);
//                                 sq=i*i;
//                                 sum=sum+sq;
//                         }
//                 }
//         }printf("\nsum is:%d\n",sum);

// }
// #include<stdio.h>
// void main(){
//         int n;
//         printf("Enter the value of n:");
//         scanf("%d",&n);
//         for(int i=0;i<=n;i++)
//         {
//                 for(int j=0;j<=n;j++)
//                 {
//                        if(i+j>n-1)
//                        {
//                         printf("*");
//                        }
//                        else
//                        {
//                         printf(" ");
//                        }
//                 }
//                 printf("\n");
//         }
// }

// #include<stdio.h>
// void main()
// {
//       int n,i;
//       printf("Prime numbers upto 100 are: \n");
//       for(n=2; n<=100; n++)
//       {
//             int isPrime=1;
//             for(i=2; i<=n/2; i++)
//             {
//                   if(n%i==0)
//                   {
//                         isPrime=0;
//                   }
//             }
//             if(isPrime)
//             {
//                   printf("%d\t",n);
//             }
//       }
// }

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
}

// #include<stdio.h>
// void main()
// {
//       int n,i,x,rev=0;
//       printf("Enter No. to check: ");
//       scanf("%d",&n);
//       x=n;
//       for(i=0; n>0; i++)
//       {
//             rev=(rev*10)+n%10;
//             n=n/10;
//       }
//       if(rev==x)
//       {
//             printf("The Given No. %d is a pallindrome No\n",x);
//       }
//       else
//       {
//             printf("The Given No. %d is not a pallindrome No\n",x);
//       }
// }

// #include<stdio.h>
// void main()
// {
//       int n,i,j;
//       printf("Enter the value of n: ");
//       scanf("%d",&n);
//       for(i=0; i<=n-1; i++)
//       {
//             for(j=0; j<2*n-1; j++)
//             {
//                   if(j>=n-i-1 && j<=n+i-1)
//                   {
//                         printf("*");
//                   }
//                   else
//                   {
//                         printf(" ");
//                   }
//             }
//             printf("\n");
//       }
// }

// #include<stdio.h>
// void main()
// {
//       int r,i,j;
//       printf("Enter the No of rows: ");
//       scanf("%d",&r);
//       for(i=1; i<=r; i++)
//       {
//             for(j=1; j<=i; j++)
//             {
//                   printf("*");
//             }
//             printf("\n");
//       }
// }

// #include<stdio.h>
// void main()
// {
//       int r,i,j;
//       printf("Enter the No of rows: ");
//       scanf("%d",&r);
//       for(i=1; r>0; r--)
//       {
//             for(j=1; j<=r; j++)
//             {
//                   printf("*");
//             }
//             printf("\n");
//       }
// }
// #include<stdio.h>
// void main()
// {
//       int r,i,j;
//       printf("Enter the No of rows: ");
//       scanf("%d",&r);
//       for(i=1; i<=r; i++)
//       {
//             for(j=1; j<=i; j++)
//             {
//                   printf("%d",j);
//             }
//             printf("\n");
//       }
// }

// #include<stdio.h>
// void main()
// {
//       int r,i,j,k=1;
//       printf("Enter the No of rows: ");
//       scanf("%d",&r);
//       for(i=1; i<=r; i++)
//       {
//             for(j=1; j<=i; j++)
//             {
//                   printf("%3d",k);
//                   k++;
//             }
//             printf("\n");
//       }
// }


// #include<stdio.h>
// void main()
// {
//       int r,i,j,k=1;
//       printf("Enter the No of rows: ");
//       scanf("%d",&r);
//       for(i=1; i<=r; i++)
//       {
//             for(j=1; j<=i; j++)
//             {
//                   printf("%3d",k);
//                   k++;
//             }
//             printf("\n");
//       }
// }


// #include<stdio.h>
// void main()
// {
//       int r,i,j,k,a=1;
//       printf("Enter the No of rows: ");
//       scanf("%d",&r);
//       for(i=1; i<=r; i++)
//       {
//             for(j=r; j>=i; j--)
//             {
//                   printf(" ");
//             }
//             for(k=1; k<=i; k++)
//             {
//                   printf("%d ",a);
//                   ++a;
//             }
//             printf("\n");
//       }
// }            
                 

//#include<stdio.h>
// void main()
// {
//       int r,i,j;
//       printf("Enter the No of rows: ");
//       scanf("%d",&r);
//       for(i=1; i<=r; i++)
//       {
//             for(j=1; j<=i; j++)
//             {
//                   if((i+j)%2==0)
//                   {
//                         printf("1");
//                   }
//                   else
//                   {
//                         printf("0");
//                   }
//             }
//             printf("\n");
//       }
// }

// #include<stdio.h>
// void main()
// {
//       int r,i,j,k,a,b,c;
//       printf("Enter the No of rows: ");
//       scanf("%d",&r);
//       b=r/2;
//       a=1;
//       c=(b+1);
//       for(i=1; i<(r+1); i++)
//       {
//             for(k=1; k<=b; k++)
//             {
//                   printf(" ");
//             }
//             for(j=1; j<=a; j++)
//             {
//                   printf("*");
//             }
//             if(i<c)
//             {
//                   b--;
//                   a+=2;
//             }
//             else
//             {
//                   b++;
//                   a-=2;
//             }
//             printf("\n");
//       }
// }

// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);

//     int fact=1;
//     for(int i=1; i<=n; i++)
//     {
//        fact = fact*i;
//     }
//     printf("final factorial is:%d\n",fact);
// }

// #include<stdio.h>
// void main()
// {
//     int n,i,sum=0;
//     printf("Enter the no of terms:");
//     scanf("%d",&n);
//     for(i=2; i<=2*n; i++)
//     {
//       if(i%2==0)
//       {
//             printf("%d\t",i);
//             sum=sum+i;
//       }
//     }
//    printf("\nsum is:%d\n",sum);
// }

// #include<stdio.h>
// void main()
// {
//       int i,n;
//       float sum=0.00;
//       printf("Enter the no of terms:");
//       scanf("%d",&n);
//       printf("The Harmonic of %d no. of terms:\n",n);
//       for(i=1; i<=n; i++)
//       {
//             printf("1/%d+ ",i);
//             sum=sum+((float)1/(float)i);
//       }
//       printf("=%f\n",sum);
// }

// #include<stdio.h>
// void main()
// {
//       int i,n,t=9,sum=0;
//       printf("Enter the value of n:");
//       scanf("%d",&n);
//       printf("The Series of multiple of 9 is:\n");
//       for(i=1; i<=n; i++)
//       {
//             printf("%d\n",t);
//             sum=sum+t;
//             t=(t*10)+9;
//       }
//       printf("sum is : %d\n",sum);
// }
     
// #include<stdio.h>
// void main()
// {
//       int n,i,sum=0;
//       printf("Enter the number for check:");
//       scanf("%d",&n);
//       for(i=1; i<n; i++)
//       {
//             if(n%i==0)
//             {
//                   sum=sum+i;
//             }    
//       }
//       if(n==sum)
//       {
//             printf("Yes,The no %d is a Perfect No",n);
//       }
//       else
//       {
//             printf("Not a Perfect No.");
//       }
// }  

// #include<stdio.h>
// void main()
// {
//       int i,x,sum=0;
//       printf("Enter number to check:");
//       scanf("%d",&i);
//       x=i;
//       while(i>0)
//       {
//             sum=sum+(i%10)*(i%10)*(i%10);
//             i=i/10;
//       }
//       if(sum==x)
//       {
//             printf("Yes,The Given no %d is a Armstrong No\n",x);
//       }
//       else
//       {
//             printf("Not Armstrong No");
//       }
// }

// #include<stdio.h>
// void main()
// {
//       int n,i,rev=0;
//       printf("Enter no: ");
//       scanf("%d",&n);
//       for(i=0; n>0; i++)
//       {
//             rev=(rev*10)+n%10;
//             n=n/10;
//       }
//       printf("Reverse No is %d",rev);
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("enter the no. : ");
//     scanf("%d",&n);
//     int digit=0;
//     int sum=0;
//     int count=0;
//     int original =n;
//     while(n!=0){
//    // digit=n%10;
//     n/=10;
//     count++;
//     }
//     n=original;
//     while(n!=0){
//     digit=n%10;
//     n/=10;
//     sum=sum+ pow(digit,count);
//     }
//     printf("%d\n",sum);
//     if(original==sum)printf("armstrong");
//     else printf("not armstrong");  
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// void main()
// {
//       int n;
//       printf("Enter the no to check:");
//       scanf("%d",&n);
//       int sum=0,digit=0,count=0,original=n;
//       while(n>0)
//       {
//             n=n/10;
//             count=count+1;
//       }
//       n=original;
//       while(n>0)
//       {
//             digit=n%10;
//             n=n/10;
//             sum=sum+ round(pow(digit,count));
//       }
//       printf("%d\n",sum);
//       if(original==sum)
//       {
//             printf("%d is Armstrong",n);
//       }
//       else
//       {
//             printf("Not Armstrong");
//       }
// }
// #include<stdio.h>
// #include<math.h>
// void main()
// {
//       int x,n,i,j,sum=0;
//       printf("Enter value of x:");
//       scanf("%d",&x);
//       printf("Enter no of terms:");
//       scanf("%d",&n);
//       for(i=1; i<=n; i++)
//       {
//             for(j=1; j<2*n; j+=2)
//             {
                  
//             }
//       }
// }


// #include<stdio.h>
// void main()
// {
//       int m,n,lcm;
//       printf("Enter the value of m and n: ");
//       scanf("%d%d",&m,&n);
//       if(m>n)
//       {
//             lcm=m;
//       }
//       else
//       {
//             lcm=n;
//       }
//       while(1)
//       {
//             if(lcm%m==0 && lcm%n==0)
//             {
//                   printf("LCM of %d and %d is %d",m,n,lcm);
//                   break;
//             }
//             lcm++;
//       }
// }


/*
#include<stdio.h>
void main()
{
    int A[3][3], B[3][3], C[3][3];
    //printf("Enter the values for the first matrix:");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter the elements for 2D array:");
            scanf("%d",&A[i][j]);
        }
    }
   //printf("Enter the values for the second matrix:");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter elements for 2D array:");
            scanf("%d",&B[i][j]);
        }
    }
    printf("First matrix is:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
           // C[i][j] = A[i][j] + B[i][j];
           C[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("Substraction of matrix is:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}

#include<stdio.h>
void main()
{
      int start,end,count=0,i,sum=0;
      printf("Enter start and end of the range:\n");
      scanf("%d%d",&start,&end);
      for(i=start; i<=end; i++)
      {
            if(i%2==0)
            {
                  count++;
            }
      }
      int even[count];
      int index=0;
      for(i=start; i<=end; i++)
      {
            if(i%2==0)
            {
                  even[index]=i;
                  index++;
            }
      }
      for(i=0; i<count; i++)
      {
            sum = sum + even[i]*even[i];
      }
      printf("The sum of the squares of even no in the given range is:%d\n",sum);
}
*/
/*
#include<stdio.h>
void main()
{
      int x,i;
      printf("Enter the no for table:");
      scanf("%d",&x);

      int table[10];
      for(i=0; i<10; i++)
      {
            table[i] = x*(i+1);
      }
      printf("Multiplication table of %d is:\n");
      for(i=0; i<10; i++)
      {
            printf("%d*%d = %d\n",x,(i+1),table[i]);
      }
}
*/
/*
#include<stdio.h>
void main()
{
      int n;
      printf("Enter the size of array:");
      scanf("%d",&n);
      int arr[n];
      printf("Enter the elements in array:");
      for(int i=0; i<n; i++)
      {
            scanf("%d",&arr[i]);
      }
      
      for(int i=0; i<n; i++)
      {
            printf("%d\t",arr[i]);
      }

      for(int i=0; i<n/2; i++)
      {
            int firstValue = arr[i];
            int secondValue = arr[n-i-1];
            arr[i] = secondValue;
            arr[n-i-1] = firstValue;
            
      }
      printf("\nAfter reversing the array\n");
      for(int i=0; i<n; i++)
      {
            printf("%d\t",arr[i]);
      }
     
      
}
*/
/*
#include<stdio.h>
void main()
{
      int arr[] = {3,4,5,2,3,6,9,2};
      int freq=0,check;
      printf("enter no :");
      scanf("%d",&check);
      for(int i=0; i<8; i++)
      {
            if(arr[i]==check)
            {
                  freq++;
            }
      }
      printf("%d",freq);
}
#include <stdio.h>

int main() {
    int n;
    
    // Input the number of elements
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    // Declare an array to store the elements
    int arr[n];
    
    // Input the elements into the array
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    // Count duplicate elements
    int count = 0; // Count of duplicate elements
    int visited[n]; // Array to mark visited elements
    
    // Initialize visited array
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        // Skip already visited elements
        if (visited[i] == 1) {
            continue;
        }
        
        // Check for duplicates
        int duplicate = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1; // Mark as visited
                duplicate = 1;
            }
        }
        
        if (duplicate) {
            count++;
        }
    }

    // Output the result
    printf("Total number of duplicate elements found in the array is : %d\n", count);
    
   // return 0;
}

#include <stdio.h>

int main() {
    int n;

    // Input the number of elements
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    // Check if the number of elements is valid
    if (n <= 0) {
        printf("Number of elements should be greater than 0.\n");
        return 1;
    }

    // Declare an array to store the elements
    int arr[n];
    
    // Input the elements into the array
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    // Arrays to mark duplicates
    int isDuplicate[n]; // To mark if an element is a duplicate
    int unique[n];      // To store unique elements
    int uniqueCount = 0; // Count of unique elements

    // Initialize arrays
    for (int i = 0; i < n; i++) {
        isDuplicate[i] = 0;
    }

    // Mark duplicates
    for (int i = 0; i < n; i++) {
        if (isDuplicate[i] == 1) {
            continue; // Skip already marked elements
        }
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                if (i != j) {
                    isDuplicate[j] = 1; // Mark as duplicate
                }
            }
        }
        if (count == 1) {
            unique[uniqueCount++] = arr[i]; // Store unique element
        }
    }

    // Print unique elements
    printf("The unique elements found in the array are:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
*/
// #include<stdio.h>
// void main()
// {
//    int n,i,j;
//    printf("enter size");
//    scanf("%d",&n);
//    int a[n];
//    for(i=0; i<n; i++){
//       printf("element-%d: ",i);
//       scanf("%d",&a[i]);
//    }
//    int b[n];
//    for(i=0; i<n; i++){
//       for(j=i+1; j<n; j++){
//          if(a[i]==a[j]){
//                    b[i]=a[i];
//                    b[j]=a[j];
//                    break;
//          }
//       }
//    }
//    printf("The unique elements found in the array are: \n");
//    for(i=0; i<n; i++){
//       if(a[i]!=b[i]){
//          printf("%d\t",a[i]);
//       }
//    }
// } 
// #include<stdio.h>
// int main()
// {
//     int arr[] = {3,5,8,7,1,11,43,4,98};
//     int i,max,min;
//     max = arr[0];
//     for(i=1; i<9; i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     min = arr[0];
//     for(i=1; i<9; i++)
//     {
//         if(arr[i]<min)
//         {
//             min=arr[i];
//         }
//     }
//     printf("%d is the maximum and %d is the minimum",max,min);
//     return 0;
// }

// #include<stdio.h>
// void main(){
//       int n;
//       printf("Input the number of elements to be stored in the array: ");
//       scanf("%d",&n);
//       int arr[n];
//        printf("Input %d elements in the array:\n", n);
//        for (int i = 0; i < n; i++) {
//             printf("element - %d : ", i);
//             scanf("%d", &arr[i]);
//        }
//        for(int i=0; i < n; i++){

//             if(arr[i]%2==0){   
//                   printf("even is:%d\n",arr[i]);
//             }else{
//                   printf("odd is:%d\n",arr[i]);
//             }

//        }
// }
/*
#include<stdio.h>
int main(){
    int n1,n2,hcf,min,i;
    printf("Enter the numbers:");
    scanf("%d %d",&n1,n2);

    if(n1>n2){
        min = n2;
        for(i=1; i<=min; i++){
            if(n1%i==0 && n2%i==0){
                hcf=i;
            }
            printf("Hcf is:%d\n",hcf);
        }
    }
    if(n2>n1){
        min = n1;
        for(i=1; i<=min; i++){
            if(n1%i==0 && n2%i==0){
                hcf=i;
            }
            printf("Hcf is:%d\n",hcf);
        }
    }
return 0;
}

#include<stdio.h>
#include<math.h>
void main(){
    int x,n,sum=0;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter the power:");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<2*n; j+=2){
            if(i%2==1){
                sum=sum+round(pow(x,j));
            }else{
                sum = sum - round(pow(x,j));
            }
        }
    }
    printf("%d",sum);
}*/
// #include<stdio.h>
// int main()
// {
//     int arr[7],i,freq=0,key;
//     printf("enter your elements:\n");
//     for(i=0; i<7; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Your array elements are:\n");
//     for(i=0; i<7; i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     printf("\nEnter No. to find frequency:");
//     scanf("%d",&key);
//     for(i=0; i<7; i++)
//     {
//         if(arr[i]==key)
//         {
//             freq++;
//         }
//     }
//     printf("The frequency of all elements of an array:\n");
//     printf("%d occurs %d times",key,freq);
//     return 0;

// }
/*
#include<stdio.h>
int main()
{
    int arr[] = {2,5,8,6,13,86,76,45,67};
    int i,j,t;
    for(i=0; i<8; i++)
    {
        for(j=i+1; j<9; j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("Array after sorting:");
    for(i=0; i<9; i++)
    {
         printf("%d\t",arr[i]);
    }
    return 0;
}
/*
#include<stdio.h>
void main(){
    int a[2][2],b[2][2],c[2][2];
    printf("Enter the elements in 1st matrix:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements in 2nd matrix:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&b[i][j]);
        }  
    }
    printf("The first matrix is:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("The multiplication of two matrices is:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            c[i][j] = 0;
            for(int k=0; k<2; k++){
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
/*
#include<stdio.h>
void main()
{
    int i,lcm,hcf,min,n1,n2;
    printf("Enter the numbers:");
    scanf("%d %d",&n1,n2);

    if(n1>n2){
        min = n2;
        for(i=1; i<=min; i++){
            if(n1%i==0 && n2%i==0){
                hcf=i;
            }
        }
    }
    if(n2>n1){
        min = n1;
        for(i=1; i<=min; i++){
            if(n1%i==0 && n2%i==0){
                hcf=i;
            }
        }
    }
    lcm = (n1*n2)/hcf;
    printf("%d",lcm);
}

#include<stdio.h>
void main()
{
    int n,t,r,count,fact,sum=0;
    printf("Enter no:");
    scanf("%d",&n);
    t=n;
    while(n){
        r = n % 10;
        count = 1;
        fact = 1;
        while(count <= r){
            fact = fact * count;
            count++;
        }
        printf("factorial of %d is %d\n",r,fact);
        sum = sum + fact;
        n = n / 10;
    }
    if(t == sum){
        printf("%d is a strong number\n",t);
    }
}
/*
#include<stdio.h>
void main(){
    int a,n,cd,t,i,sum=0;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    printf("Enter the first term:");
    scanf("%d",&a);
    printf("Enter the common difference:");
    scanf("%d",&cd);
    printf("The AP series is given below:");
    for(i=1; i<=n; i++){
        t = a + (i-1) * cd;
        if(i==1){
            printf("%d",t);
        }else{
            printf("+%d",t);
        }
        sum = sum + t;
    }
    printf("The sum of AP series is %d\n",sum);
}
/*
#include<stdio.h>
#include<math.h>
void main()
{
    int n,x,sum=0;
    printf("Enter x and n:");
    scanf("%d %d",&x,&n);
    for(int i=0; i<=n; i++){
        sum = sum + pow(x,i);
    }
    printf("Geometric Progession sum is %d\n",sum);
}*/

