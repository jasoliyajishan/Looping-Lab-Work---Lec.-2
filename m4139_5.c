#include <stdio.h>

int main()
 {
    int i=1,n;
    printf("enter a number");
    scanf("%d",&n);

   do
    {
    	if(i%2==1)
        printf("%d\n", i);
        i++;
    }while (i <= n) ;

    return 0;
}
