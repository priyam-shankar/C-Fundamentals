/*
#include<stdio.h>
#include<math.h>
int main(){
     int power= power(b,c);
     printf("%d",&power);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
    int b,c;
    b=c=1;
    int a= b+c;
    int power=pow(b,c);
    printf("%d",&power);
    return 0;
}

// TYPE CONVERSION : Complier accept only larger size datatype!
#include<stdio.h>
#include<math.h>
int main (){
    printf("%d \n",2*2);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main (){
    printf("%d \n",2*2.0);  //this code is error b/c we use %d instead of %f as we discussed in line no:21 our complier recognise larger value and multiplication of 2*2.0 is 4.0 and this is a float value so that's code is error.
    return 0;
}

#include<stdio.h>
#include<math.h>
int main (){
    printf("%f \n",2*2.0); //this is the correct form of our above code.
    return 0;
}

#include<stdio.h>
#include<math.h>
int main (){
    printf("%f \n",2.0*2.0);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main (){
    printf("%d \n",2/3);//this line represent that if you not need to get your answer in decimal then you will go with int datatype 
    return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
    printf("%f \n",3/2);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
    int a=1.999999;
    printf("%d",a);
    return 0;
 }

#include<stdio.h>
#include<math.h>
int main(){
    int a=1.999999;
    printf("%f",a); // float value does not work in this and above code also.
    return 0;
 }
 
 //Practice Questions 
 #include<stdio.h>
 #include<math.h>
 //Divisibility check of 2. 

 int main(){
    int x;
    printf("Enter x: ");
    scanf("%d",&x);
                            
    printf("%d",x%2==0);
    return 0;
 }
 
 #include<stdio.h>
 #include<math.h>

 // even or odd
 int main(){
    int x;
    printf("Enter x:");
    scanf("%d",&x);

    printf("%d is even",x,x%2==0);
    printf("%d is odd",x,x%2!=0);

    return 0;
 }

#include <stdio.h>
#include <math.h>
int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Check if the character is a digit
    int is_digit = (ch >= '0' && ch <= '9');
    
    // Print the result
    printf("%c is %s a digit.\n", ch, is_digit ? "" : "not");
    
    return 0;
}
*/