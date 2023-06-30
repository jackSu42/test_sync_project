#include <stdio.h>

int main()
{

	int multiply( int a, int b )
	{
		
		return a*b;
	}
	

	int add( int a, int b )
	{
		printf( "input a and b" );
		return a+b;
	}

	int comp_less( int a, int b, int result )
	{
		result = ( a < b );
		return result;
	}

	


	int comp_more( int a, int b, int result )
	{
		result = b < a;
		return result;
	}


	int comp_equal( int a, int b, int result )
	{
		result = ( a == b );
		return result;
	}

	printf("test for new branch");
	
	printf(" add another sentence ");
	printf( "hello world" );
	return 0;

}