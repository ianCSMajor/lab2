#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1]= "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3,test_val));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


TEST(EchoTest, EmptyString){
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1,test_val));
}
//
//the "char* test_val[3];" creates an array of size 3, "test_vals" that come after it are its elements
//the first argument of EXPECT_EQ is the output we are expecting, the second argument is using the echo() function from c-echo.h file with the length of the array
//and the array itself as an argument.
//
//if the return value is the same as the expected value, (the first and second parameters of EXPECT_EQ are the same, then the test passes
//
//
//
//
//--------------------------my tests---------------------------------//

TEST(myTest, myHi){
	char* test_val[2];       test_val[0]= "this one is skipped"; test_val[1]= "Hi";
	EXPECT_EQ("Hi", echo(2,test_val));
}

TEST(myTest, myName){
	char* test_val[2];	test_val[0]= "skip";  test_val[1]= "my name is";
	EXPECT_EQ("my name is", echo(2,test_val));
}

TEST(myTest, myRichard){
	char* test_val[2];	test_val[0]= "skip";   test_val[1]= "Richard";
	EXPECT_EQ("Richard", echo(2,test_val));
}
