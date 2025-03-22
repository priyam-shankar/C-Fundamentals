// #include<stdio.h>
// void printHello();  //declartion
// int main()
// {
//     printHello();   //calling
//    // printHello();
//     // printf("Hello World");
//     return 0;
// }

// void printHello()   //define
// {
//     printf("hello!\n");
// }

// #include<stdio.h>
// void printHello();
// void printGoodbye();
// int main()
// {
//     printHello();
//     printGoodbye();    
//     return 0;
// }

// void printHello()
// {
//    printf("Hello\n");
// }
// void printGoodbye()
// {
//    printf("GoodBye");
// }

// #include<stdio.h>
// void namaste();     //declartion
// void bonjour();

// int main()
// {
//     printf("Enter i for Indian and f for French: ");
//     char ch;
//     scanf("%c",&ch);

//      if(ch=='i')
//      {
//         namaste();      //calling
//      }
//      else
//      {
//         bonjour();      //calling
//      }
//     return 0;
// }

// void namaste()          //define
// {
//     printf("Namaste");
// }
// void bonjour()          //define
// {
//     printf("Bonjour");
// }

// #include<stdio.h>
// int sum(int a , int b);

// int main()
// {
//     int a,b;
//     printf("Enter a: ");
//     scanf("%d",&a);
//     printf("Enter b: ");
//     scanf("%d",&b);

//     int s= sum(a,b);
//     printf("sum is: %d",s);
//     return 0;
// }
// int sum(int x , int y)
// {
//     return x+y;
// }

// #include<stdio.h>
// void printTable(int n);      //declaration

// int main()
// {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     printTable(n);              //calling
//     return 0;
// }
// void printTable(int n)         //definition
// {
//     for(int i=1; i<=10; i++)
//     {
//         printf("%d*%d=%d\n",n,i,n*i);
//     }
// }

// #include<stdio.h>
// void calculatePrice(float value);        //declaration
// int main()
// {
//     float value;
//     printf("Enter the value: ");
//     scanf("%f",&value);
//     calculatePrice(value); 
//     printf("value is: %f\n",value);             //calling
//     return 0;
// }
// void calculatePrice(float value)        //definition
// {
//     value = value+(0.18*value);        // parameter
//     printf("final price : %f\n",value);
// }

// #include<stdio.h>
// #include<math.h>       //library function.
// void calSquare(float n);

// int main()
// {
//     float n;
//     printf("Enter number: ");
//     scanf("%f",&n);
//     calSquare(n);
//     return 0;
// }
// void calSquare(float n)
// {
//     printf("Square of number is: %f",pow(n,2));
// } 

// #include<stdio.h>
// #include<math.h>
// void squareArea(float side);
// void circleArea(float rad);
// void rectangleArea(float l, float b);
// int main()
// {
//     float l,b,side,rad;
//     printf("Enter length: ");
//     scanf("%f",&l);
//     printf("Enter breadth: ");
//     scanf("%f",&b);
//     rectangleArea(l,b);

//     printf("Enter side of square: ");
//     scanf("%f",&side);
//     squareArea(side);

//     printf("Enter radius of circle: ");
//     scanf("%f",&rad);
//     circleArea(rad);

//     return 0;
// }
// void squareArea(float side)
// {
//     printf("Area of Square is: %f\n",side*side);
// }
// void circleArea(float rad)
// {
//     printf("Area of Circle is: %f\n",3.14*rad*rad);
// }
// void rectangleArea(float l, float b)
// {
//     printf("Area of recatangle is: %f\n",l*b);
// }


// #include<stdio.h>
// #include<math.h>
// float squareArea(float side);
// float circleArea(float rad);
// float rectangleArea(float l, float b);
// int main()
// {
//     float l,b,side,rad;
//     printf("Enter length: ");
//     scanf("%f",&l);
//     printf("Enter breadth: ");
//     scanf("%f",&b);
//     printf("Area of rectangle is: %f\n",rectangleArea(l,b));

//     printf("Enter side of square: ");
//     scanf("%f",&side);
//     printf("Area of square is: %f\n",squareArea(side));

//     printf("Enter radius of circle: ");
//     scanf("%f",&rad);
//     printf("Area of circle is: %f\n",circleArea(rad));

//     return 0;
// }
// float squareArea(float side)
// {
//     return side*side;
// }
// float circleArea(float rad)
// {
//     return 3.14*rad*rad;
// }
// float rectangleArea(float l, float b)
// {
//     return l*b;
// }

// #include<stdio.h>
// void printHW(int count);    //declaration
// int main()
// {
//     printHW(5);         //calling
//     return 0;
// }
// void printHW(int count)     //definition
// {
//     if(count==0)
//     {
//         return;
//     }
//      printf("Hello World\n");
//     printHW(count-1);
// }

// #include<stdio.h>
// int sum(int n);     //declaration
// int main()
// {
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     printf("sum is: %d\n",sum(n));
//     return 0;
// }
// int sum(int n)      //definition
// {
//     if(n==1)
//     {
//         return 1;
//     }
//     int sumNm1=sum(n-1);
//     int sumN=sumNm1+n;
//     return sumN;
// }

// #include<stdio.h>
// int fact(int n);        //declaration
// int main()
// {
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     printf("factorial of %d is: %d\n",n,fact(n));       //calling
//     return 0;
// }
// int fact(int n)         //definiton
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     int factNm1=fact(n-1);
//     int factN=factNm1*n;
//     return factN;
// }

// #include<stdio.h>
// #include<math.h>
// float convertTemp(float celsius);        //declaration
// int main()
// {
//     float celsius;
//     printf("Enter the temp in cel: ");
//     scanf("%f",&celsius);
//     printf("temp in farhenhiet is: %f",convertTemp(celsius));
//     return 0;
// }

// float convertTemp(float celsius)
// {
//     float far=celsius*(9.0/5.0)+32;
//     return far;
// }

// #include<stdio.h>
// #include<math.h>
// int calPercent(int science,int math,int sanskrit);      //declaration
// int main()
// {
//     int science,math,sanskrit;
//     printf("Enter marks in Science: ");
//     scanf("%d",&science);
//     printf("Enter marks in math: ");
//     scanf("%d",&math);
//     printf("Enter marks in Sanskrit: ");
//     scanf("%d",&sanskrit);   
//     printf("Percent is: %d",calPercent(science,math,sanskrit));  //calling   
//     return 0;
// }

// int calPercent(int science,int math,int sanskrit)           //definiton
// {
//     int calPercent=((science+math+sanskrit)/3);
// }

#include<stdio.h>
int fib(int n);       //definiton
int main()
{
    int n,fibN;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;
    printf("fib of %d is: %d\n",n,fibN);
    return fibN;
}