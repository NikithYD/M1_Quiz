#include <stdio.h>
#include <stdlib.h>
void registration();
//void passtest(int passout, char degree[5],char name[30],char password[6],char gmail[30],int age);

void registration()
{
    char name[30],gmail[30],password[6],degree[5];
   int age,passout;
    printf("Please fill the details below:- \n");
    printf("Enter your name: \n");
    scanf("%s",name);
    printf("Enter Gmail Id: \n");
    scanf("%s",gmail);
    printf("Enter Password: \n");
    scanf("%s",password);
    printf("Enter Age: \n");
    scanf("%d",&age);
    printf("Enter Degree: \n");
    scanf("%s",degree);
    printf("Enter Passout year: \n");
    scanf("%d",&passout);
    passtest(passout,degree,name,password,gmail,age);
}
