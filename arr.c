/*#include<stdio.h>
//Input and Output in Array
int main()
{
    int marks[3];
    scanf("%d%d%d",&marks[0],&marks[1],&marks[2]);
    printf("Your Given marks is: %d\t%d\t%d\t",marks[0],marks[1],marks[2]);
    return 0;
}*/

/*#include<stdio.h>
//Taking Input and Output
int main()
{
    int marks[3];
    printf("Enter phy: Enter Math: Enter chem: ");
    scanf("%d%d%d",&marks[0],&marks[1],&marks[2]);
    printf("phy = %d,math = %d,chem = %d",marks[0],marks[1],marks[2]);
    return 0;
}*/
/*
//C Program to print price of items with their GST
#include<stdio.h>
int main()
{
    float price[3];
    printf("enter the prices of the items\n");
    scanf("%f%f%f",&price[0],&price[1],&price[2]);
    printf("Your item's price on applying GST is: \n");
    printf("FinalPrice is: %.3f\n",price[0]+(0.18*price[0]));
    printf("FinalPrice is: %.3f\n",price[1]+(0.18*price[1]));
    printf("FinalPrice is: %.3f\n",price[2]+(0.18*price[2]));
    return 0;
} 
*/
/*
//Inititalization Of Array
#include<stdio.h>
int main()
{
    int check[4] = {12,23,52,53};
    printf("%d\n",check[0]);
    printf("%d\n",check[1]);
    printf("%d\n",check[2]);
    printf("%d\n",check[3]);
   // printf("%d\n",check[10]);
    return 0;
}
*/

/*
//Playing With Character
#include<stdio.h>
int main()
{
    char name[4] = {'A','B','C','D'};
    printf("%c",name[2]);
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    // int age = 22;
    // int* ptr = &age;
    // printf("ptr = %u\n",*ptr);
    // ptr++;
    // printf("ptr = %u\n",*ptr);

    // char star = '*';
    // char* ptr = &star;
    // printf("ptr = %u\n",*ptr);
    // ptr++; 
    // printf("ptr = %u\n",ptr);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int age = 22;
    int* ptr = &age;
    int _age = 23;
    int* _ptr = &_age;

    printf("%u\t,%u\n,difference is: %u\n",ptr,_ptr,ptr-_ptr);
    printf("Comparison = %u\n",ptr == _ptr);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int age = 22;
    char _age = 'a';
    int* ptr = &age;
    char* _ptr = &_age;

    printf("%u %u \ndifference is: %u\n",ptr,_ptr,ptr-_ptr);
    return 0;
}*/

// #include<stdio.h>
// int main()
// {
//     int aadhar[5];
//     int* ptr = &aadhar[0];
//     //input
//     for(int i = 0; i<5; i++)
//     {
//         printf("%d index: ",i);
//         scanf("%d",(ptr+i));        //(ptr+i) == &aadhar[i];
//     }
//     //output
//     for(int i = 0; i<5; i++)
//     {
//         printf("%d index = %d\n",i,*(ptr+i));
//     }
//     return 0;
// }

/*
#include<stdio.h>
void printNumbers(int arr[], int n);
int main()
{
    int arr[] = {6,8,5,6,0,3};
    int n;
    printf("enter upto :");
    scanf("%d",&n);
    printNumbers(arr,n);
    return 0;
}
void printNumbers(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}*/

/*
#include<stdio.h>
int main()
{
    int marks[2][3],total=0;
    marks[0][0] = 95;
    marks[0][1] = 90;
    marks[0][2] = 98;

    marks[1][0] = 91;
    marks[1][1] = 99;
    marks[1][2] = 89;

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
#include<stdio.h>
int countOdd(int arr[],int n);
int main()
{
    int arr[] = {8,9,6,5,78,65,88,54};
    printf("%d",countOdd(arr,8));
    return 0;
}
int countOdd(int arr[],int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2 != 0)
        {
            count = count + 1;
        }
    }
    return count;
}
*/

#include<stdio.h>
void reverse(int arr[],int n);
void printArr(int arr[],int n);

int main()
{
    int arr[] = {7,8,4,3,0};
    reverse(arr,5);
   printArr(arr,5);
    return 0;
}
void printArr(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void reverse(int arr[],int n)
{
    for(int i=0; i<n/2; i++)
    {
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];
        arr[i] = secondValue;
        arr[n-i-1] = firstValue; 
    }
}

/*
#include<stdio.h>
int main()
{
    int n;
    if(n>2)
    {
        printf("Enter n: ");
        scanf("%d",&n);
    }
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\t%d\t",fib[0],fib[1]);

    for(int i=2; i<n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t",fib[i]);
    }
    printf("\n");
    return 0;
}
*/

/*
#include<stdio.h>
void storeTable(int arr[][10], int n);
int main(){
    int arr[2][10];
    storeTable(arr,2);
    printf("%d",arr[2][10]);
    return 0;
}
void storeTable(int arr[][10], int n){
    for(int i=1; i<n; i++){
        arr[2][10] = n*i;
        
    }
}*/