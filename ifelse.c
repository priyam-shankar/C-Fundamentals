/* 
ALWAYS REMEMBER IN IF ELSE

if(condition){
// something true 
}
else{
//something false
}

#include<stdio.h>
int main(){
     int age;
     printf("Enter age:");
     scanf("%d",&age);

     if(age>18){
             printf("adult \n");
             printf("they can vote \n");
             printf("they can drive \n");
     }
     else{
             printf("not adult");
         }
     return 0;
}

#include<stdio.h>
int main(){
     int age;
     printf("Enter age:");
     scanf("%d",&age);

     if(age>18){
             printf("adult \n");
             printf("they can vote \n");
             printf("they can drive \n");
     }
    return 0;
}


// Ternary operator "?" use: condition ? printf("true cheez"):printf("false cheez")

#include<stdio.h>

int main(){

        int age;
        printf("Enter age:");
        scanf("%d",&age);

        age>=18 ? printf("You are adult\n"):printf("You are not adult\n");

        return 0;
}

#include<stdio.h>

 int main(){

        int a,b;
        printf("Enter the first number:");
        scanf("%d",&a);
        printf("Enter the second number:");
        scanf("%d",&b);

        if (a>b){
                printf("The greatest number is %d",a);              
        }else{
                printf("The greatest number is %d",b);
        }

        return 0;
        
 }
 
 #include<stdio.h>
 int main(){
        int a,b,c;
        printf("Enter the first number:");
        scanf("%d",&a);
        printf("Enter the second number:");
        scanf("%d",&b);
        printf("Enter the third number:");
        scanf("%d",&c); 

          if((a>b)&&(a>c)){
                            printf(" The greatest number is %d",a);
          }else if(b>c){
                            printf("The greatest number is %d",b);
          }else{
                            printf("The greatest number is %d",c)
          }   

        return 0;   
 }
 
 #include<stdio.h>
 int main(){
     int a;
     printf("Enter a:");
     scanf("%d",&a);

        if(a%2==0){
                printf("The number is even %d",a);
        }else{
                printf("The number is odd %d",a);                
        }
      return 0;
 }
 


 #include<stdio.h>

 int main(){
        int day;  //1-mon; 2-tues; 3-Wed 
        printf("Enter day (1-7):");
        scanf("%d",&day);

        switch(day){
                case 1:printf("monday\n");
                       break;
                case 2:printf("tuesday\n");
                       break;
                case 3:printf("wednesday\n");
                       break;
                case 4:printf("thursday\n");
                       break;
                case 5:printf("friday\n");
                       break;
                case 6:printf("saturday\n");
                       break;
                case 7:printf("sunday\n");
                       break;
                default:printf("Invalid");
        }
        return 0;
 }

#include<stdio.h>
int main(){
        int number;
        printf("Enter the number:");
        scanf("%d",&number);

        if(number>=0){
                printf("positive number\n");
                 if(number%2==0){
                        printf("positive even no.\n");
                 }else{
                        printf("positive odd no.\n");
                 }
        }else{
                printf("negative number\n");
        }
      return 0;  
}

  #include<stdio.h>
 int main(){
        int marks;
        printf("Enter marks number(1-100):");
        scanf("%d",&marks);
         if((marks>=0)&&(marks<=30)){
                printf("fail\n");
         }else if((marks>30)&&(marks<=100)){
                printf("pass\n");
         }else{
                printf("wrong marks");
         }
      return 0;   
 }

 #include<stdio.h>
 int main(){
        int marks;
        printf("Enter marks (1-100)");
        scanf("%d",&marks);
        if((marks>=90)&&(marks<=100)){
                printf("your grade is A+\n");
        }else if((marks>=70)&&(marks<90)){
                printf("your grade is A\n");
        }else if((marks>=30)&&(marks<70)){
                printf("your grade is B\n");
        }else{
                printf("Wrong Marks");
        }

        return 0;
 }

// HOME WORK SET
#include<stdio.h>
int main(){
        int number;
        printf("Enter the number:");
        scanf("%d",&number);

        if(number>0){
                printf("number is a Natural number\n");
        }else{
                printf("not natural number\n");
        }
        return 0;
}
*/


