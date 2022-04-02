/**
 * @file instlog.h
 * @author nikith (nikithydevadiga@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <stdio.h>
#include <stdlib.h>

/**
 * @brief contains functions to read,store and display the data
 * 
 */
int no;
int passtest(int passout, char degree[5],char name[30],char password[6],char gmail[30],int age);
void reregistration(char name[30], char password[30],char gmail[30]);
void userdisplay11();
int institutelogin();
int skip(FILE *file);
void filecheck();
void institutionfileread();

/**
 * @brief 
 * 
 * @param passout passout year
 * @param degree BE
 * @param name  your name
 * @param password any characters
 * @param gmail student mail
 * @param age above 21
 */
int passtest(int passout, char degree[5],char name[30],char password[6],char gmail[30],int age)
{  char pass;
    printf("GUUHU");
    if((passout!=2022)&&(degree!="BE"))
    {
        if(age<20)
        {
           printf("Age mismatch\n");
        }
        else
        {
            printf("Sorry!!!You are not eligible\n");
        }
    }
    else
    {
        printf("Congragulations!!!you are eligible\n");
        printf("Thanks for registering\n");
        reregistration(name,password,gmail);

    }return pass;
}
/**
 * @brief function for registration by student 
 */
void reregistration(char name[30], char password[30],char gmail[30])
{
    int temp,i,j;
    char rename[30],repassword[30],regmail[30];
    char *p,*q,*r,*s;
    printf("-----------------------------\n");
    printf("Please enter your first name\n");
    scanf("%s",rename);
    printf("Please enter your login mail\n");
    scanf("%s",regmail);
    printf("Please enter Password\n");
    scanf("%s",repassword);
    p=name;
    q=rename;
    r=gmail;
    s=regmail;
    while(name!=NULL)
    {
        for(i=0;(*(p+i))!='\0';i++)
        {
            if(*(p+i)==*(q+i))
            {
                for(j=0;(*(r+j))!='\0';j++)
                {
                    if(*(r+j)==*(s+j))
                    {
                        temp=1;
                        break;
                     }
                    }
                }
            }break;

        }

    if(temp)
    {
      printf("success!!!1\n");
      userdisplay11();
    }
    else
    {
        printf("No");
    }

}

/**
 * @brief display the stored data from file
 * 
 */
void userdisplay11()
    {
        int count=0;
        char ans[15];
        int no=3;
        int d;
        FILE *f;
        f = fopen("C:\\Users\\lenovo\\Desktop\\number.txt","r");
     //  f=fopen("numbero.txt","r");
       no= getw(f);
        //fgets(no,1048,f);
   //  bool keep_reading = true;
  int cl = 1,rl=1,ml;
  FILE *file;
  
  file = fopen("C:\\Users\\lenovo\\Desktop\\program.txt","r");
// file=fopen("programo.txt","r");
  char buffer[2048];
  char buffer1[2048];
 // char buffer2[2048];
  char buffer4[2048];
  int maxsize=2048;
  //  fgets(buffer, 1048, file);
    if (feof(file))
    {
      printf("File %d lines.\n", cl-1);
      printf("Couldn't find line %d.\n", rl);
    }
    else
    {
      do
      {
      fgets(buffer,1048,file);
      printf("%d question is\n",d);
      printf("%s",buffer);
      printf("Options are:\n");
      while(rl<cl+4)
      {
          fgets(buffer1,1048,file);
          printf("%s",buffer1);
          rl++;
      }

      cl=rl+1;
      fgets(buffer4,1048,file);
      printf("Enter correct option\n");
      scanf("%s[^\n]",ans);
      d++;
     // fgets(ans,1048,stdin);
      printf("Correct answer is %s\n",buffer4);
      if(strcmp(ans,buffer4)==1)
      {
          printf("Wrong answer\n");
          count;
      }
      else
      {
          printf("Correct answer\n");
          count++;
      }


     cl=cl-1;
      }
      while(cl<=((no*3)+2));

    }

    if (count>=(0.5*no))
    {
        printf("Passed!! total score is %d\n",count);
    }
    else
    {
        printf("failed..total score is %d\n",count);
    }
    
    fclose(file);
    }


    int skip(FILE *file)
{
    int c;

    while (c = fgetc(file), c != '\n' && c != EOF);

    return c;
}



/**
 * @brief function to implement login credentials by institute
 * 
 * @return int 
 */


int institutelogin()
{
    char inpassword[6]="qwerty";
    char inspassword[6];
    char *t,*u;
    int l,temp1;
    printf("Enter Institute Password\n");
     scanf("%s",inspassword);
     t= inspassword;
     u= inpassword;
     for(l=0;(*(t+l))!='\0';l++)
                {
                    if(*(t+l)==*(u+l))
                    {
                        temp1=1;
                        break;
                    }
                }
    filecheck();
    return no;

}


void filecheck()
{
    FILE *fptr;
 fptr = fopen("C:\\Users\\lenovo\\Desktop\\program.txt","w");
 //  file=fopen("programo.txt","w");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    else
    {
        institutionfileread();
    }
}
/**
 * @brief function read the data from stdin and store in file
 * 
 */
void institutionfileread()
 {
     int i,m,no;
     char q[5];
     char mmm[10], sentence[1000],ans[2048];
     FILE *fptr;
     FILE *f;
    fptr = fopen("C:\\Users\\lenovo\\Desktop\\program.txt","w");
   // fptr = fopen(C:\Users\lenovo\Desktop\LTTS\M1_Quiz\3_Implementation\CUserslenovoDesktop"programo.txt.w");
    printf("Enter the number of questions\n");
    scanf("%d",&no);
   f = fopen("C:\\Users\\lenovo\\Desktop\\number.txt","w");
   //f=fopen("numbero.txt","w");
   // fprintf(f, "%d",no);
    for(i=0;i<no;i++)
    {
    m =4;
     printf("Enter question number %d\n",i+1);
     scanf("%s",mmm);
     //fgets(mmm, sizeof(mmm), stdin);
    fprintf(fptr, "%s", mmm);
    printf("enter options\n");
    while(0<=m)
    {
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    m--;
    }
    printf("Enter correct option\n");
    fgets(q,sizeof(q),stdin);
    fprintf(fptr,"%s",q);
    }
    fclose(fptr);
  //  userdisplay();
    }
