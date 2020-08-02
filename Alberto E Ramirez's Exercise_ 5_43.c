//Exercise 5.43 solution	

#include <stdio.h>


int main()
{
    static int count=1;
    
    printf("Count = %d\n", count++);
    while(count < 6) {
        main();
    }

    return 0;
}

