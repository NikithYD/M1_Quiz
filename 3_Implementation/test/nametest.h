#include "stdio.h"
# ifndef _NAMET_
#define _NAMET_
typedef enum function_status_t
{
    SUCCESS,
    FAILED_TO_LOGIN
}function_status_t;
function_status_t passtestyy(int age,int passout,char degree[5]);
function_status_t reregistrationoy(char rename[30], char repassword[30],char regmail[30]);

#endif