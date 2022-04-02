
#include"unity.h"
#include"unity_internals.h"
#include"heade.h"

#include "nametest.h"
//void passtesty(void);
//extern void passs();
//extern void rereg();
void setUp(void){}

void tearDown(void){}
void passtes()
 {
  TEST_ASSERT_EQUAL(FAILED_TO_LOGIN, passtestyy(17,2021,"BE"));
  TEST_ASSERT_EQUAL(SUCCESS, passtestyy(22,2022,"BE"));
  TEST_ASSERT_EQUAL(SUCCESS, passtestyy(20,2022,"BE"));
  TEST_ASSERT_EQUAL(SUCCESS, passtestyy(21,2022,"BE"));
 
}
void reregistrationoo()
{
  TEST_ASSERT_EQUAL(SUCCESS, reregistrationoy("nik","qwe","asdf"));
  TEST_ASSERT_EQUAL(FAILED_TO_LOGIN, reregistrationoy("ni","qw","as"));
  
}

int main(void)
{   
    UnityBegin(NULL);
    RUN_TEST(passtes);
    RUN_TEST(reregistrationoo);
    return(UnityEnd());
}


 