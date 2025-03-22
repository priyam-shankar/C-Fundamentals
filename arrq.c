
/*
#include<stdio.h>
int main()
{
    int arr[10] , sum = 0;
    printf("enter your elements:");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your array elements are:");
    for(int i=0; i<10; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nAfter adding your array elements you get:");
    for(int i=0; i<10; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nSum of your array elements is: %d\n",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int arr[5],even = 0,odd = 0;
    printf("enter your elements:\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your array elements are:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=0; i<5; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total Even=%d and Total odd=%d",even,odd);
    return 0;
}


#include<stdio.h>
int main()
{
    int arr[7];
    printf("enter your elements:\n");
    for(int i=0; i<7; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your alternate array elements are:\n");
    for(int i=1; i<7; i=i+2)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int arr[7],key,i,pos,flag=0;
    printf("enter your elements:\n");
    for(i=0; i<7; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your array elements are:\n");
    for(i=0; i<7; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter No. for search:");
    scanf("%d",&key);

    for(i=0; i<7; i++)
    {
        if(arr[i]==key)
        {
            pos=i+1;
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("%d found at %d position:",key,pos);
    else
    printf("Number not found");
    return 0;

}

#include<stdio.h>
int main()
{
    int arr[7],i,freq=0,key;
    printf("enter your elements:\n");
    for(i=0; i<7; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your array elements are:\n");
    for(i=0; i<7; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter No. to find frequency:");
    scanf("%d",&key);
    for(i=0; i<7; i++)
    {
        if(arr[i]==key)
        {
            freq++;
        }
    }
    printf("Frequency of %d is %d times",key,freq);
    return 0;

}

#include<stdio.h>
int main()
{
    int arr[] = {3,5,8,7,1,11,43,4,98};
    int i,max,min;
    max = arr[0];
    for(i=1; i<9; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    min = arr[0];
    for(i=1; i<9; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
   // printf("%d is the minimum of all of them",min);


    printf("%d is the maximum and %d is the minimum",max,min);
}
/*
#include<stdio.h>
int main()
{
    int arr[] = {3,5,8,7,1,11,43,4,98};
    int i,min;
    min = arr[0];
    for(i=1; i<9; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d is the minimum of all of them",min);
}


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

#include<stdio.h>
int main()
{
    int arr[] = {2,5,8,6,13,86,76,45,67};
    int i,j,t;
    for(i=0; i<8; i++)
    {
        for(j=i+1; j<9; j++)
        {
            if(arr[i]<arr[j])
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
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Addition of matrix is:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}*/