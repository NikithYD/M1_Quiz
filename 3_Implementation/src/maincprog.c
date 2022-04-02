/**
 * @file maincprog.c
 * @author Nikith Y Devadiga (nikithydevadiga@gmail.com)
 * @brief Quiz game program
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include"heade.h"
#include"instlog.h"
#include"regist.h"
//void interccc(int n, char s[n],char o[4],int q[n],int i,int m);

//extern void registration();
//extern void institutelogin();
int no;
void userdisplay11();
int main()
{
    char name[30],password[6],gmail[30],degree[5],login[3],inspassword[6],institute[15];
    char rename[30],repassword[6],regmail[30],redegree[30];
    char inpassword[6]="qwerty",ilogin[2]="No";
    int age, passout;
    int count=0,temp=0,temp1=0,que=0,countq=0;
    int k=0,j=0,l=0;
    int n=0,z=0;
    char ss[n],o[4];
    int qq[n];

    char sentence[1000],mmm[10],dis[1000];
    int m=4,i;
    int q[5];
    char ans[2048];
    FILE *fptr;


    printf("-----------------------\n");
    printf("WELCOME TO ONLINE QUIZ\n");
    printf("-----------------------\n");
    printf("Institute login: Yes/No\n");
    scanf("%s",login);
    /**
     * @brief function registration for users and institutelogin for institute
     * 
     */
    if(strcmp(login,"No")==0)
    {
        registration();
    }
    else
    {
        institutelogin();
    }


}