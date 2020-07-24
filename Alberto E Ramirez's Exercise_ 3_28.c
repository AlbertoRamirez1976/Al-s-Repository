//Exercise 3.28 solution 

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int count = 1;
	 while ( count <= 10 )
	 {
	 puts( count % 2 ? "****" : "++++++++" );
	  ++count ;
	 }
	return 0 ;
}
