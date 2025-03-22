/*
#include<stdio.h>
void printString(char arr[]);
int main()
{
    char firstName[] = "Priyam";
    char secondName[] = "Shankar";

    printString(firstName);
    printString(secondName);

}
void printString(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}

#include<stdio.h>
int main(){
    char name[] = "Priyam";
    printf("%s",name);
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    // char firstName[100];
    // scanf("%s",firstName);
    // printf("Your name is: %s",firstName);

    char fullName[100];
    scanf("%s",fullName);
    printf("Your fullname is: %s",fullName);
    return 0;

}*/
/*
#include<stdio.h>
int main(){
    char fullName[100];
    gets(fullName);
   // fgets(fullName, 100, stdin);
    puts(fullName);
    return 0;
}*/


//difference between character array and pointers
/*
#include<stdio.h>
int main(){
    char* canchange = "Priyam Shankar";
    puts(canchange);
    canchange = "Priyam";
    puts(canchange);*/

    /*char cannotchange[] = "Priyam Shankar";
    puts(cannotchange);
    cannotchange = "Priyam";
    puts(cannotchange);*/
 /*   return 0;
}*/
/*
#include<stdio.h>
int countLength(char arr[]);
int main(){
    char name[100];
    fgets(name, 100, stdin);
    printf("Length is:%d",countLength(name));
    return 0;
}
int countLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1;
}
//Finding Count Without Using function
#include<stdio.h>
int main(){
    char name[100];
    fgets(name, 100, stdin);
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d",count-1);
    return 0;
}*/


// #include<stdio.h>
// int countLength(char arr[]);
// int main(){
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("Length is:%d",countLength(name));
//     return 0;
// }
// int countLength(char arr[]){
//     int count = 0;
//     for(int i = 0; arr[i] = '\0'; i++){
//         if(arr[i]=='a'){
//             count++;
//         }
//     }
//     return count;
// }



//          strlen library function........



/*#include<stdio.h>
#include<string.h>
int main(){
    char name[] = "priyam";
    int length = strlen(name);
    printf("length is :%d",length);
    return 0;
}*/




//         strcpy library function...........


                                                           /* #include<stdio.h>
                                                            #include<string.h>
                                                            void main(){
                                                            
                                                                char str1[] = "hello";
                                                                char str2[] = "world";
                                                                strcpy(str1,str2);
                                                                puts(str1);

                                                               char oldStr[] = "oldStr";
                                                               char newStr[] = "newstr";
                                                               strcpy(oldStr, newStr);
                                                               puts(oldStr);
                                                            }*/

//           strcat library function..............




/*
#include<stdio.h>
#include<string.h>
int main(){
    char name[1000] = "I love ";
    char naam[] = " you";
    puts(strcat(name,naam));            //naya tarika invent kiya gya mere dwara;
    return 0;
}  */




//          strcmp library function...........






                                                                            /*#include<stdio.h>
                                                                            #include<string.h>
                                                                            int main(){
                                                                            
                                                                                char firstStr[] = "Apple";
                                                                                char secStr[] = "Alphabet";

                                                                                printf("%d\n",strcmp(firstStr, secStr));
                                                                                printf("%d\n",strcmp(secStr, firstStr));
                                                                                return 0;
                                                                            }*/



//Q1. //take a string input from the user using %c
/*
 #include<stdio.h>
 #include<string.h>
 int main(){
    char str[100];
    char ch;
    int i = 0;
    while( ch != '\n'){
        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }
    puts(str);
    int length = strlen(str);
    printf("%d",length);
    return 0;
 }   */   

// Q2.  //salting  where our salt is "123" added to end 
 /*#include<stdio.h>
 #include<string.h>
 
 int main(){
    char password[100];
   // fgets(password,100,stdin);
   scanf("%s",password);
    
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);
    strcat(newPass, salt);
    printf("%s",newPass);
    return 0;
 }*/
 
    
// Q3. slicing from n to m
/*
#include<stdio.h>
#include<string.h>
void slice(char str[], int n, int m);
int main(){
    char str[] = "heliloveyourld";
    slice(str, 3, 10);
    return 0;
}    
void slice(char str[], int n, int m){
     char newStr[200];
    int j =0;
    for(int i = n; i <= m; i++,j++){
       // strcpy(newStr, str);
       newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}   */


//Q4. count the occurence of vowels in a string
/*
#include<stdio.h>
#include<string.h>
void countVowels(char str[]);
int main(){
    char str[] = "iloveyouA";
    countVowels(str);
    return 0;
}
void countVowels(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' ||  str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    printf("%d",count);
}*/

//Q5. check a given character in a string

#include<stdio.h>

void checkChar(char str[], char ch);
int main(){
    char str[] = "priyam";
    char ch = 'x';
    checkChar(str,ch);
    return 0;
}
void checkChar(char str[], char ch){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("Character is present!");
            return;
        }
    }
    printf("Character is NOT present!");
    
}