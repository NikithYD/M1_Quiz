#include"nametest.h"
function_status_t reregistrationoy(char rename[30], char repassword[30],char regmail[30])
{   char name[30]="nik";
    char password[30]="qwe";
    char gmail[30]="asdf";
    int temp=0,i,j;
    //char rename[30],repassword[30],regmail[30];
    char *p,*q,*r,*s;
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
                        //break;
                     }
                     else{
                     temp=0;}
                    }
            }else {temp=0;}
         }break;

    }

    if(temp)
    {
      printf("success!!!\n");
      return SUCCESS;
    }
    else
    {
        printf("No");
        return FAILED_TO_LOGIN;
    }

}
