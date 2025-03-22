// #include<stdio.h>
// void main()
// {
//     int age=22;
//     int* ptr=&age;
//     int _age=*ptr;
//     printf("%d\n",age);
//     printf("%d\n",&age);
//     printf("%d\n",ptr);
//     printf("%d\n",*ptr);
//     printf("%d\n",&ptr);
//     printf("%d\n",*ptr);
// }

// #include<stdio.h>
// int main()
// {
//     int x;
//     int* ptr;
//     ptr=&x;
//     *ptr=0;
//     printf("x=%d\n",x);
//     printf("*ptr=%d\n",*ptr);

//     *ptr=+5;
//     printf("x=%d\n",x);
//     printf("*ptr=%d\n",*ptr);

//     (*ptr)++;
//     printf("x=%d\n",x);
//     printf("*ptr=%d\n",*ptr);
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i=5;
//     int* ptr=&i;
//     int** pptr=&ptr;
//     printf("%d\n",**pptr);

//     return 0;
// }

// #include<stdio.h>
// void square(int n);
// int main()
// {
//     int number=4;
//     square(number);
//     printf("Number=%d\n",number);               //CALL BY VALUE
    
//     return 0;
// }
// void square(int n)
// {
//     n=n*n;
//     printf("squuare=%d\n",n);
// }

// #include<stdio.h>
// void _square(int* n);
// int main()
// {
//     int number=4;
//     _square(&number);                   //esme hm address input diye h jo ki change ho sakta h hmare according,,,//  CALL BY REFRENCE  
//     printf("number=%d\n",number);
//     return 0;
// }
// void _square(int* n)
// {
//     *n=(*n)*(*n);
//     printf("square=%d\n",*n);
// }

                                                                        //classroom question
// #include<stdio.h>
// void main()
// {
//     int a,b;
//     printf("Enter the value of a: & b: ");
//     scanf("%d %d",&a,&b);
//     int *ptra=&a;
//     int *ptrb=&b;
//     printf("Sum of a&b:%d",*(ptra)+*(ptrb));
// }    


// #include<stdio.h>
// void Add(int a,int b,int *sum);
// int main()
// {
//     int a,b,sum;
//     printf("Enter the value of a: & b: ");
//     scanf("%d %d",&a,&b);
//     Add(a,b,&sum);
//     printf("Sum is: %d",sum);
//     return 0;
// }
// void Add(int a,int b,int *sum)
// {
//     *sum=a+b;
// }

// #include<stdio.h>
// void Add(int *a,int *b,int *sum);
// int main()
// {
//     int a,b,sum;
//     printf("Enter the value of a: & b: ");
//     scanf("%d %d",&a,&b);
//     Add(&a,&b,&sum);
//     printf("Sum is:%d",sum);
//     return 0;
// }
// void Add(int *a,int *b,int *sum)
// {
//     *sum=*a + *b;
// }

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a: & b: ");
    scanf("%d %d",&a,&b);
    int *ptra=&a;
    int *ptrb=&b;
     if(*(ptra)>*(ptrb))
     {
        printf("Maximum No is %d\n",a);
     }
     else
     {
        printf("Maximum No is %d\n",b);
     }
}