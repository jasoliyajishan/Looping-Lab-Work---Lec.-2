#include <stdio.h>

int main()
 {
    int i=1,n;
    printf("enter a number");
    scanf("%d",&n);

    printf("%d\n", i);
       do
	   {
	   	 printf("%d\n", i);
        i++;

		} 
        while (i <= n) ;
    

    return 0;
}
