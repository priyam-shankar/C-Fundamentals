// structure is a collection of different data types;

                        //structure define
                       /* struct student {    //structure is a user define data types;
                            int roll;
                            char name[100];
                            float cgpa;
                        };

                        //structure declaration
                        struct student s1;

                        //struct variable ko value assign kiya
                        s1.roll = 257;
                        s1.name = "Priyam";
                        s1.cgpa = 8.08;*/

/*
#include<stdio.h>
#include<string.h>

//user - defined data type
    struct student {
        char name[100];
        int roll;
        float cgpa;
    };

int main(){
    struct student s1;
    //s1.name = "Priyam";
    strcpy(s1.name, "Priyam Shankar");
    s1.roll = 257;
    s1.cgpa = 8.08;

    printf("student name: %s\n",s1.name);
    printf("student roll: %d\n",s1.roll);
    printf("student cgpa: %.2f\n",s1.cgpa);
    return 0;
}*/

/*
#include<stdio.h>
#include<string.h>

    //user-define 
    struct student {
        char name[100];
        int roll;
        float cgpa;
    };

int main(){
    struct student s1;
    strcpy(s1.name,"Priyam Shankar");
    s1.roll = 257;
    s1.cgpa = 8.08;

    printf("student's Information:");
    printf(" name: %s\n",s1.name);
    printf(" roll: %d\n",s1.roll);
    printf(" cgpa: %.3f\n",s1.cgpa);

    struct student s2;
    strcpy(s2.name,"Dhendup Sherpa");
    s2.roll = 258;
    s2.cgpa = 7.28;

    printf("student's Information:");
    printf(" name: %s\n",s2.name);
    printf(" roll: %d\n",s2.roll);
    printf(" cgpa: %.3f\n",s2.cgpa);

    struct student s3;
    strcpy(s3.name,"Aditya Pandey");
    s3.roll = 259;
    s3.cgpa = 7.88;

    printf("student's Information:");
    printf(" name: %s\n",s3.name);
    printf(" roll: %d\n",s3.roll);
    printf(" cgpa: %.3f\n",s3.cgpa);
    return 0;
}*/

                            //ARRAY OF STRUCTURE//

/*
                                    struct student ECE[200];        //declare
                                    struct student CSE[200];
                                    struct student IT[200];

                                    //Access
                                    ECE[0].roll = 257;
                                    IT[5].cgpa = 8.08;
                                    strcpy(CSE[10].name,"Priyam Shankar");
*/

/*
#include<stdio.h>
#include<string.h>

    //uder-defined data type
    struct student {
        char name[200];
        int roll;
        float cgpa;
    };

int main(){
    struct student ECE[300];        //declare
    ECE[300].roll = 257;
    ECE[300].cgpa = 8.08;
    strcpy(ECE[300].name,"Priyam Shankar");

    printf("Student Info are:-");
    printf("name = %s\n",ECE[0].name);
    printf("roll = %d\n",ECE[0].roll);
    printf("cgpa = %.2f\n",ECE[0].cgpa);
    return 0;
}*/


/*
                    //Initialization of structures

            struct student s1;
            s1.roll =                       ==  struct student s1 = {"Priyam", 257, 8.08};
            s1.cgpa =                           struct student s2 = {"Priyam", 257, 8.08};
            strcpy()                            struct student s3 = {0};

*/

/*
#include<stdio.h>
#include<string.h>
    struct student {
        char name[100];
        int roll;
        float cgpa;
    };
int main(){
    struct student s1 = {"Priyam Shankar", 257, 8.08};
    struct student s2 = {"Dhendup Sherpa", 258, 7.28};
    struct student s3 = {0};

    printf("student name is = %s\n",s1.name);
    printf("student roll id = %d\n",s3.roll);
    return 0;
}*/


                                //POINTERS TO STRUCTURES
                                