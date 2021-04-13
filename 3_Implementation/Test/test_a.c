#include "unity.h"
#include "unity_internals.h"
#include<stdio.h>
#include "a.h"





	void setUp()
	{	}
	void tearDown()
	{	}
	
	
	void test_show_record(void)
	{
		char* name="Sridhar";
		float scr=1000000;
  		TEST_ASSERT_EQUAL(\n\n\t\t Sridhar has secured the Highest Score 100000",name,scr, show_record());
		char* name="Vinay";
		float scr=1000000;
  		TEST_ASSERT_EQUAL(\n\n\t\t Vinay secured the Highest Score 1000000",name,scr, show_record());
		char* name="Kamal";
		float scr=1000000;
        TEST_ASSERT_EQUAL(\n\n\t\t Kamal has secured the Highest Score 1000000",name,scr, show_record());                         

	}

               

	int main()
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_show_record);

  		return UNITY_END();
	}