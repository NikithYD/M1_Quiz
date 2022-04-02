#include"nametest.h"
function_status_t passtestyy(int age,int passout,char degree[5])
{
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
        return FAILED_TO_LOGIN;
    }
    else
    {
        printf("Congragulations!!!you are eligible\n");
        printf("Thanks for registering\n");
        return SUCCESS;
        }
        
}